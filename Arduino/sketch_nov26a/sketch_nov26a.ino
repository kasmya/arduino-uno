int trig=13;
int echo=12;
int tim;
int dist;
void setup(){
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}
void loop(){
  digitalWrite(trig,LOW);
  delay(10);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  delay(10);
  tim=pulseIn(echo,HIGH);
  dist=(tim/2)/29;
  Serial.println(dist);
  delay(10);
}