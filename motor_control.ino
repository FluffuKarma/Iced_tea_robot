#include <Stepper.h>

class Motor {
  Stepper myStepper = Stepper(stepsPerRevolution, D1, D3, D2, D4);
 
  void clockwise(int steps) {
    myStepper.step(steps);
  }
  
  void anticlockwise(int steps) {
    myStepper.step(-steps);
  }  
}
