//暗——1,亮——0

#define light_sensor 5

void setup() {
  Serial.begin(9600);
 Serial.print("hello world");
}

void loop() {
  Serial.println(digitalRead(light_sensor));
  delay(100);
}
