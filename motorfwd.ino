const int irLeftSensor = 2;
const int irRightSensor = 3;
const int leftMotorForward = 4;
const int leftMotorBackward = 5;
const int rightMotorForward = 6;
const int rightMotorBackward = 7;

void setup() {
  pinMode(irLeftSensor, INPUT);
  pinMode(irRightSensor, INPUT);
  pinMode(leftMotorForward, OUTPUT);
  pinMode(leftMotorBackward, OUTPUT);
  pinMode(rightMotorForward, OUTPUT);
  pinMode(rightMotorBackward, OUTPUT);
}

void loop() {
  if(digitalRead(irLeftSensor < 500) && digitalRead(irRightSensor < 500)){
    digitalWrite(leftMotorForward, 255);
    digitalWrite(rightMotorForward, 255);
  }else if(digitalRead(irLeftSensor < 500) && digitalRead(irRightSensor > 500)){
    digitalWrite(leftMotorForward, 255);
    digitalWrite(rightMotorForward, 0);
  }else if(digitalRead(irLeftSensor > 500) && digitalRead(irRightSensor < 500)){
    digitalWrite(leftMotorForward, 0);
    digitalWrite(rightMotorForward, 255);
  }else{
    digitalWrite(leftMotorForward, 0);
    digitalWrite(rightMotorForward, 0);
  }
  

}
