#define light_sensor 5
#define LED 6
#define auto_button 8
boolean button_state2 = 0;
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.print("hello world");
}

void loop() {
  if (digitalRead(auto_button) == 0) {
    delay(10);
    if (digitalRead(auto_button) == 1) {
      button_state2 = !button_state2;
    }
  } else if (digitalRead(auto_button) == 1) {
    delay(10);
    if (digitalRead(auto_button) == 0) {
      button_state2 = button_state2;
    }
  }


  
  if (button_state2 == true) {
    if (digitalRead(light_sensor) == 1) {
      analogWrite(LED, 255);
    } else {
      analogWrite(LED, 0);
    }
  } else {
    analogWrite(LED, 0);
  }
  Serial.println(button_state2);
  Serial.println(digitalRead(light_sensor));
}
