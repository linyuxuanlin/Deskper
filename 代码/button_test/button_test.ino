//按下为1，空为0
#define button 2

void setup() {
 pinMode(button,INPUT);
 Serial.begin(9600);
 Serial.print("hello world");
}

void loop() {
  Serial.println(digitalRead(button));
  delay(100);
}
