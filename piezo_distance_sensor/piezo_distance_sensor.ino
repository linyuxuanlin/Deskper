#define piezo 4
#define distance_sensor 9

void setup() {
  pinMode(piezo,OUTPUT);
}

void loop() {
  if(digitalRead(distance_sensor)==1){
    digitalWrite(piezo,HIGH);
  }else{
    digitalWrite(piezo,LOW);
  }
}
