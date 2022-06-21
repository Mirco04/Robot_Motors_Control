/*

Autor: Mirco04

this example show how to control the robot's motors thanks to
commands sent by a bluetooth device.
ATTENTION: this project is create based on the ESP32 architecture,
the bluetooth library may not work on others boards.

*/

#include <BluetoothSerial.h> //include the "BluetoothSerial library"
#include <Robot.h> //include the "Robot library"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif


BluetoothSerial SerialBT; //create Bluetooth object

String line = "";

//------------------------------------------------//

Robot myRobot; //create Robot object

//------------------------------------------------//


void setup() {

  Serial.begin(115200);
  SerialBT.begin("ESP32-TEST"); //inizialize bluetooth and give it a name.
  Serial.println("The device started, now you can pair it with bluetooth!");
//------------------------------------------------//

  myRobot.Motor1Pins(2,15);    //attach and setup GPIO 2 and GPIO 15 for Motor 1  
  myRobot.Motor2Pins(4,0);    //attach and setup GPIO 4 and GPIO 0 for Motor 2
  myRobot.Motor3Pins(12,13);  //attach and setup GPIO 12 and GPIO 13 for Motor 3
  myRobot.Motor4Pins(14,27);  //attach and setup GPIO 14 and GPIO 27 for Motor 4
  
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
   

  if(SerialBT.available()){ // if the bluetooth communication is available...

    char ch = SerialBT.read(); // read what is written by the bluetooth device.

    if(ch == '\n' || ch == '\r'){

      process(line); //call the "process()" function  and pass "line" as parameter.
      line = "";

    }else{
      line += ch;
    }

    delay(20);

  }
  

}

