//有声音输出1
#define sound_sensor 7

void setup() {
  Serial.begin(9600);
 Serial.print("hello world");
}

void loop() {
   Serial.println(digitalRead(sound_sensor));
  delay(100);
}
