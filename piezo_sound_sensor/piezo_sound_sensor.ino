#define sound_sensor 7
#define piezo 4
void setup() {
  pinMode(piezo,OUTPUT);
}

void loop() {
  if(digitalRead(sound_sensor)==1){
    digitalWrite(piezo,HIGH);
    delay(2000);
    digitalWrite(piezo,LOW);
  }
}
