int trig = 13;
int echo = 12;
int tim;
int dist;
int bulb = 9;
void setup(){
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(bulb,OUTPUT);
}
void loop(){
  digitalWrite(trig,LOW);
  delay(10);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  tim=pulseIn(echo,HIGH);
  dist=(tim/2)/29;
  Serial.println(dist);
  delay(10);
  if(dist<=5){
  digitalWrite(bulb,HIGH);}
  else {
  digitalWrite(bulb,LOW);}}