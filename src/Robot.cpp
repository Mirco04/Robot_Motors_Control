#include "Robot.h"
#include <Arduino.h>


using namespace std;


    void Robot::Motor1Pins(const int ForwardsPin1, const int BackwardsPin1){

      MotorPin1Forwards = ForwardsPin1;
      MotorPin1Backwards = BackwardsPin1;

        pinMode(MotorPin1Forwards, OUTPUT);
        pinMode(MotorPin1Backwards, OUTPUT);

    }


    void Robot::Motor2Pins(const int ForwardsPin2, const int BackwardsPin2){

      MotorPin2Forwards = ForwardsPin2;
      MotorPin2Backwards= BackwardsPin2;

        pinMode(MotorPin2Forwards, OUTPUT);
        pinMode(MotorPin2Backwards, OUTPUT);

    }

    void Robot::Motor3Pins(const int ForwardsPin3, const int BackwardsPin3){

      MotorPin3Forwards = ForwardsPin3;
      MotorPin3Backwards = BackwardsPin3;

        pinMode(MotorPin3Forwards, OUTPUT);
        pinMode(MotorPin3Backwards, OUTPUT);

    }

    void Robot::Motor4Pins(const int ForwardsPin4, const int BackwardsPin4){

      MotorPin4Forwards = ForwardsPin4;
      MotorPin4Backwards = BackwardsPin4;

        pinMode(MotorPin4Forwards, OUTPUT);
        pinMode(MotorPin4Backwards, OUTPUT);

    }


    void Robot::goForwards(){

      digitalWrite(MotorPin1Forwards,HIGH);
      digitalWrite(MotorPin1Backwards,LOW);

      digitalWrite(MotorPin2Forwards,HIGH);
      digitalWrite(MotorPin2Backwards,LOW);

      digitalWrite(MotorPin3Forwards,HIGH);
      digitalWrite(MotorPin3Backwards,LOW);

      digitalWrite(MotorPin4Forwards,HIGH);
      digitalWrite(MotorPin4Backwards,LOW);
      
        
    }

    void Robot::goBackwards(){

      digitalWrite(MotorPin1Forwards,LOW);
      digitalWrite(MotorPin1Backwards,HIGH);

      digitalWrite(MotorPin2Forwards,LOW);
      digitalWrite(MotorPin2Backwards,HIGH);

      digitalWrite(MotorPin3Forwards,LOW);
      digitalWrite(MotorPin3Backwards,HIGH);

      digitalWrite(MotorPin4Forwards,LOW);
      digitalWrite(MotorPin4Backwards,HIGH);
      
        
    }

    void Robot::steerLeft(){

      digitalWrite(MotorPin1Forwards,LOW);
      digitalWrite(MotorPin1Backwards,HIGH);

      digitalWrite(MotorPin2Forwards,LOW);
      digitalWrite(MotorPin2Backwards,HIGH);

      digitalWrite(MotorPin3Forwards,HIGH);
      digitalWrite(MotorPin3Backwards,LOW);

      digitalWrite(MotorPin4Forwards,HIGH);
      digitalWrite(MotorPin4Backwards,LOW);
      
        
    }

    void Robot::steerRight(){

      digitalWrite(MotorPin1Forwards,HIGH);
      digitalWrite(MotorPin1Backwards,LOW);

      digitalWrite(MotorPin2Forwards,HIGH);
      digitalWrite(MotorPin2Backwards,LOW);

      digitalWrite(MotorPin3Forwards,LOW);
      digitalWrite(MotorPin3Backwards,HIGH);

      digitalWrite(MotorPin4Forwards,LOW);
      digitalWrite(MotorPin4Backwards,HIGH);
      
        
    }

    void Robot::Stop(){

      digitalWrite(MotorPin1Forwards,LOW);
      digitalWrite(MotorPin1Backwards,LOW);

      digitalWrite(MotorPin2Forwards,LOW);
      digitalWrite(MotorPin2Backwards,LOW);

      digitalWrite(MotorPin3Forwards,LOW);
      digitalWrite(MotorPin3Backwards,LOW);

      digitalWrite(MotorPin4Forwards,LOW);
      digitalWrite(MotorPin4Backwards,LOW);
      
        
    }

