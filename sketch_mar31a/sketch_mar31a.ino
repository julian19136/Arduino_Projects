int buzzer=7;

void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

    int value = analogRead(24);
    Serial.println(value);
    int pitch = map(value, 0, 1023, 0, 5000);
    tone(buzzer, pitch, 10);
    delay(1);
    
}
