#define button 2
#define motor 3
boolean button_state=0;
void setup() {
  pinMode(button,INPUT);
  pinMode(motor,OUTPUT);
 Serial.begin(9600);
 Serial.print("hello world");
 digitalWrite(motor,LOW);
}

void loop() {
  if(digitalRead(button)==0){ 
    delay(10);
    if(digitalRead(button)==1){ //如果按钮按下
    button_state=!button_state;
    }
  }else if(digitalRead(button)==1){
    delay(10);
    if(digitalRead(button)==0){
    button_state=button_state;
    }
  }
  if(button_state==true){
    digitalWrite(motor,HIGH);
  }else {
    digitalWrite(motor,LOW);
  }
  Serial.println(button_state);
}
