#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); TX || RX

int state = 0;

int in1 = 8; 
int in2 = 9;
int enA = 10;

int in3 = 12;
int in4 = 13;
int enB = 11;

void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  BTserial.write('1'); //Sends signal to other rover to move forward
  digitalWrite(in1, LOW); //Move Forwards 1.5s
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(1500);

  BTserial.write('0'); //Sends signal to other rover to stop
  digitalWrite(in1, LOW); //Stop 0.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(500);

  BTserial.write('2'); //Sends signal to other rover to move back
  digitalWrite(in1, HIGH); //Move Backwards 1.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(1500);

  BTserial.write('0'); //Sends signal to other rover to stop
  digitalWrite(in1, LOW); //Stop 0.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(500);
}

void loop()
{
  
}
