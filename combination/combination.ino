#define sound_sensor 7
#define piezo 4
#define light_sensor 5
#define LED 6
#define auto_button 8
#define piezo 4
#define distance_sensor 9
#define button 2
#define motor 3
boolean button_state = 0;
boolean button_state2 = 0;
void setup() {
  pinMode(piezo, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(piezo, OUTPUT);
  pinMode(button, INPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
  Serial.print("hello world");
  digitalWrite(motor, LOW);
}

void loop() {
  if (digitalRead(sound_sensor) == 1) {
    digitalWrite(piezo, HIGH);
    delay(2000);
    digitalWrite(piezo, LOW);
  }
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
  if (digitalRead(distance_sensor) == 1) {
    digitalWrite(piezo, HIGH);
  } else {
    digitalWrite(piezo, LOW);
  }
  if (digitalRead(button) == 0) {
    delay(10);
    if (digitalRead(button) == 1) { //如果按钮按下
      button_state = !button_state;
    }
  } else if (digitalRead(button) == 1) {
    delay(10);
    if (digitalRead(button) == 0) {
      button_state = button_state;
    }
  }
  if (button_state == true) {
    digitalWrite(motor, HIGH);
  } else {
    digitalWrite(motor, LOW);
  }
  Serial.println(button_state);
}
