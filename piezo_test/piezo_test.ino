#define piezo 4

void setup() {
  pinMode(piezo,OUTPUT);
}

void loop() {
 digitalWrite(piezo,HIGH);
 delay(500);
 digitalWrite(piezo,LOW);
 delay(500);
}
