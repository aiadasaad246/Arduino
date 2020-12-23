#include "Decrease.c"
#include "Increase.c"

int led = 12;
int increase = 11;
int decrease = 10;
int writevalue=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(increase,INPUT);
  pinMode(decrease,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(increase)) 
  {
    Increase(&writevalue);
    Serial.println(writevalue);
    analogWrite(led,writevalue);
    delay(500);
  }
   if (digitalRead(decrease)) 
  {
    Decrease(&writevalue);
    Serial.println(writevalue);
    analogWrite(led,writevalue);
    delay(500);
  }


}
