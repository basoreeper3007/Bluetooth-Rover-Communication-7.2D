#include <SoftwareSerial.h>
SoftwareSerial BTserial(8, 9)

int in1 = 2; 
int in2 = 4;
int enA = 3;

int in3 = 5;
int in4 = 7;
int enB = 6; 

int state = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);
  BTserial.begin(38400);
}

void loop() {
if (BTserial.available() > 0) {
    state = BTSerial.read();
  if (state = 1){
  digitalWrite(in1, LOW); //Move Forwards 1.5s
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(1500);  }

  if (state = 0){
  digitalWrite(in1, LOW); //Stop 0.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(500); }

  if (state = 2) {
  digitalWrite(in1, HIGH); //Move Backwards 1.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(1500);  }

  state = 10;
}
}
