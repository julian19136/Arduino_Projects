//constaints
const int buttonPin = 2;
const int ledPin = 13;

//variables
int buttonState = 0;
int lastButtonState = 0;
int randVal = 0;

void setup() {
  //initialise the button on pin 2
  pinMode(buttonPin, INPUT);
  //initialise the led 
  pinMode(ledPin, OUTPUT);
  //intialise the serial communication
  Serial.begin(9600);
}// end setup

void loop() {
  //set random number 
  randVal = random(1000);

  //read button state
  buttonState = digitalRead(buttonPin);

  //compare the buttonstate against previous
  if (buttonState != lastButtonState) {

      //compare the buttonstate against previous
      if (buttonState == HIGH) {
        
      }else{
        //if current state is low, send value
        Serial.println(randVal);
      }
      //incase of bounce
      delay(50);
  }

      lastButtonState = buttonState;
  
}
