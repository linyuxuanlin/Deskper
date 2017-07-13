//检测到障碍物——1

#define distance_sensor 9

void setup() {
  Serial.begin(9600);
 Serial.print("hello world");
}

void loop() {
  Serial.println(digitalRead(distance_sensor));
  delay(100);
}
