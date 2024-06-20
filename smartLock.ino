#include <Servo.h>

Servo myServo;
int statusLed = 4;
char incomingValue = 0;
bool servoMoved = false;

void setup() {
  Serial.begin(9600);
  myServo.attach(3);
  pinMode(statusLed, OUTPUT);
  digitalWrite(statusLed, HIGH);
}

void loop() {
  if (Serial.available() > 0) {
    incomingValue = Serial.read();
    Serial.print(incomingValue);
    Serial.print("\n");
    
    if (incomingValue == '1' && !servoMoved) {
      myServo.attach(3);
      myServo.write(180);
      delay(265);
      myServo.detach();
      digitalWrite(statusLed, LOW);
      servoMoved = true;
    } 
    
    if (incomingValue == '2' && servoMoved) {
      myServo.attach(3);
      myServo.write(0);
      delay(265);
      myServo.detach();
      digitalWrite(statusLed, HIGH);
      servoMoved = false;
    }
  }
}
