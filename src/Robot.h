#ifndef Robot_h
#define Robot_h
#include "Arduino.h"

class Robot{

  private:

      int MotorPin1Forwards;
      int MotorPin1Backwards;

      int MotorPin2Forwards;
      int MotorPin2Backwards;

      int MotorPin3Forwards;
      int MotorPin3Backwards;

      int MotorPin4Forwards;
      int MotorPin4Backwards;

  public:
  	

    void Motor1Pins(const int ForwardsPin1, const int BackwardsPin1);


    void Motor2Pins(const int ForwardsPin2, const int BackwardsPin2);

    void Motor3Pins(const int ForwardsPin3, const int BackwardsPin3);

    void Motor4Pins(const int ForwardsPin4, const int BackwardsPin4);


    void goForwards();
    
    void goBackwards();
    
    void steerLeft();

    void steerRight();

    void Stop();
};

#endif
