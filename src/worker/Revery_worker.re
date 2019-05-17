open Js_of_ocaml;
open Js_of_ocaml_toplevel;

open PlaygroundEval;
open Worker;

let log = v => print_endline("[Worker] " ++ v);

let start = () => {
  Repl.SyntaxControl.re();
  JsooTop.initialize();

  let render = Backend.start(execute, complete);
  log("Initialized");

  let f = _ => {
    render();
  };
  Js.Unsafe.callback(f);
};

let () = Js.export_all([%js {val startWorker = start}]);
