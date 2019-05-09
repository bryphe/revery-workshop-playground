open Revery;
open Revery.UI;
open Revery.UI.Components;

module Constants = {
  let gravity = 2000.0;
  let floorHeight = 32;
  let skyHeight = 128;
  let flapForce = (-250.0);

  /* Speed (float) - horizontal speed of the flappy bird */
  let speedF = 100.;

  /* width (int) - the width of our 'game surface' */
  let width = 800;
  let height = 600;

  let birdX = 50;
  let birdHeight = 32;
  let birdWidth = 32;

  let skyWidth = 276;
  let landWidth = 336;

  let pipeWidth = 90;
  let pipeHeight = 480;
  let pipeGap = 200;
};

let render = () => <View />;
