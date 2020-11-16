#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;
const int ledPin = 13;

//variables
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int lastButtonState1 = 0;
int lastButtonState2 = 0;
int lastButtonState3 = 0;
int lastButtonState4 = 0;
int lastButtonState5 = 0;
int randVal = 0;

/* Set the delay between fresh samples */
#define BNO055_SAMPLERATE_DELAY_MS (100)

// Check I2C device address and correct line below (by default address is 0x29 or 0x28)
// id, address
Adafruit_BNO055 bno = Adafruit_BNO055(-1, 0x28);


void setup() {
  // intialise the button on pin 2
  pinMode(buttonPin1, INPUT);
   // intialise the button on pin 3
  pinMode(buttonPin2, INPUT);
  // intialise the button on pin 2
  pinMode(buttonPin3, INPUT);
   // intialise the button on pin 3
  pinMode(buttonPin4, INPUT);
   // intialise the button on pin 3
  pinMode(buttonPin5, INPUT);
  //initialise the led
  pinMode(ledPin, OUTPUT);
  //initialise the serial communication
  Serial.begin(9600);


  /* Initialise the sensor */
  if(!bno.begin())
  {
    /* There was a problem detecting the BNO055 ... check your connections */
    Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
    while(1);
  }

  delay(1000);

  bno.setExtCrystalUse(true);

}

void loop() {
  //set random number
  randVal = random(1000);

  

  //read button state
  buttonState1 = digitalRead(buttonPin1);

  //compare the buttonstate against previous
  if (buttonState1 != lastButtonState1) {

    //if the state has changed, nothing
    if (buttonState1 == HIGH) {

    }else{
    //if current state is low, send value
    Serial.print(4);
    Serial.print(" ");

    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

    /* Display the floating point data */
    Serial.print(euler.x());
    Serial.print(" ");
    
    Serial.print(euler.y());
    Serial.print(" ");
    
    Serial.print(euler.z());
    Serial.print(" ");
    
    Serial.print("\t\t");
    Serial.println("");
    }
    //incase of bounce
    delay(50);
  }
  
  //save current state as the last state, for next time through loop
  lastButtonState1 = buttonState1;




  //read button state
  buttonState2 = digitalRead(buttonPin2);

  //compare the buttonstate against previous
  if (buttonState2 != lastButtonState2) {

    //if the state has changed, nothing
    if (buttonState2 == HIGH) {

    }else{
    //if current state is low, send value
    Serial.print(3);
    Serial.print(" ");

    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

    /* Display the floating point data */
    Serial.print(euler.x());
    Serial.print(" ");
    
    Serial.print(euler.y());
    Serial.print(" ");
    
    Serial.print(euler.z());
    Serial.print(" ");
    
    Serial.print("\t\t");
    Serial.println("");
    }
    //incase of bounce
    delay(50);
  }
  
  //save current state as the last state, for next time through loop
  lastButtonState2 = buttonState2;




  //read button state
  buttonState3 = digitalRead(buttonPin3);

  //compare the buttonstate against previous
  if (buttonState3 != lastButtonState3) {

    //if the state has changed, nothing
    if (buttonState3 == HIGH) {

    }else{
    //if current state is low, send value
    Serial.print(2);
    Serial.print(" ");

    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

    /* Display the floating point data */
    Serial.print(euler.x());
    Serial.print(" ");
    
    Serial.print(euler.y());
    Serial.print(" ");
    
    Serial.print(euler.z());
    Serial.print(" ");
    
    Serial.print("\t\t");
    Serial.println("");
    }
    //incase of bounce
    delay(50);
  }
  
  //save current state as the last state, for next time through loop
  lastButtonState3 = buttonState3;




  
  //read button state
  buttonState4 = digitalRead(buttonPin4);

  //compare the buttonstate against previous
  if (buttonState4 != lastButtonState4) {

    //if the state has changed, nothing
    if (buttonState4 == HIGH) {

    }else{
    //if current state is low, send value
    Serial.print(1);
    Serial.print(" ");

    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

    /* Display the floating point data */
    Serial.print(euler.x());
    Serial.print(" ");
    
    Serial.print(euler.y());
    Serial.print(" ");
    
    Serial.print(euler.z());
    Serial.print(" ");
    
    Serial.print("\t\t");
    Serial.println("");
    }
    //incase of bounce
    delay(50);
  }
  
  //save current state as the last state, for next time through loop
  lastButtonState4 = buttonState4;




  //read button state
  buttonState5 = digitalRead(buttonPin5);
  
  //compare the buttonstate against previous
  if (buttonState5 != lastButtonState5) {
    
    //if the state has changed, nothing
    if (buttonState5 == HIGH) {
  
    }else{
    //if current state is low, send value
    Serial.print(0);
    Serial.print(" ");

    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

    /* Display the floating point data */
    Serial.print(euler.x());
    Serial.print(" ");
    
    Serial.print(euler.y());
    Serial.print(" ");
    
    Serial.print(euler.z());
    Serial.print(" ");
    
    Serial.print("\t\t");
    Serial.println("");

    }
    //incase of bounce
    delay(50);
  }
  
  
  //save current state as the last state, for next time through loop
  lastButtonState5 = buttonState5;


  delay(BNO055_SAMPLERATE_DELAY_MS);
  
}
