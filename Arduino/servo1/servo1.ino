#include <Servo.h>
Servo s1;
void setup(){
  s1.attach(12);
}
void loop(){
  for (int pos=0; pos<=180; pos=pos+1){
    s1.write(pos);
    delay(15);
  }
  delay(2000);
  for (int pos=180; pos>=0; pos=pos-1){
    s1.write(pos);
    delay(15);
  }
}