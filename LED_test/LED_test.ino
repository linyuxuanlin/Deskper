
#define LED 6

void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  analogWrite(LED,255);
  delay(100);
  analogWrite(LED,0);
  delay(100);
}
