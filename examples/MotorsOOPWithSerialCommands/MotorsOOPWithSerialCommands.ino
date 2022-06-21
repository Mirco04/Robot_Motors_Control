/*

Autor: Mirco04

this example show how to control the robot's motors thanks to
commands sent by the "Serial Monitor".

*/

#include <Robot.h> //include the "Robot library"

String line = ""; //empty line

//------------------------------------------------//

Robot myRobot; //create Robot object

//------------------------------------------------//


void setup() {

  Serial.begin(115200);
//------------------------------------------------//

  myRobot.Motor1Pins(2,15);  //attach and setup GPIO 2 and GPIO 15 for Motor 1  
  myRobot.Motor2Pins(4,0);   //attach and setup GPIO 4 and GPIO 0 for Motor 2
  myRobot.Motor3Pins(12,13); //attach and setup GPIO 12 and GPIO 13 for Motor 3
  myRobot.Motor4Pins(14,27); //attach and setup GPIO 14 and GPIO 27 for Motor 4
  
//--------------------------------------------------//
  

}

void process(String line){  //External function to read the line (passed as a parameter of the function) and activate the methods (this fuction will be called in "void loop")

  if(line.equals("forwards")){

    myRobot.goForwards();  //if line is "forwards" the "goForwards()" will be activated.
  
  }else if(line.equals("backwards")){

    myRobot.goBackwards(); //if line is "backwards" the "goBackwards()" will be activated.
    
  }else if(line.equals("steer left")){

    myRobot.steerLeft(); //if line is "steer left" the "steerLeft()" will be activated.
    

  }else if(line.equals("steer right")){

    myRobot.steerRight(); //if line is "steer right" the "steerRight()" will be activated.
   

  }else if(line.equals("stop")){

    myRobot.Stop(); //if line is "stop" the "Stop()" will be activated.

  }

}

void loop() {
   

  if(Serial.available()){ // if the serial communication is available...

    char ch = Serial.read(); // read what is written on the "Serial Monitor".

    if(ch == '\n' || ch == '\r'){

      process(line); //call the "process()" function  and pass "line" as parameter.
      line = "";

    }else{
      line += ch; 
    }

    delay(20);

  }
  

}


