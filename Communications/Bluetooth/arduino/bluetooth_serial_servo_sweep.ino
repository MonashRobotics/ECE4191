#include <Servo.h>

String data;
int pos = 0;

Servo myservo;

void setup() 
{
  Serial.begin(9600);  // HC-05 default speed in AT command more
  pinMode(LED_BUILTIN, OUTPUT);
  myservo.attach(9);
}

void loop()
{

  // Keep reading
  if (Serial.available()>0)
  {
    data = Serial.readString();
    data.trim();
    Serial.print(data);  
  }

  if (data.compareTo("Sweep")==0){
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
  }

  data = "";
}
