const int button_Pin = 7;
int button_State = 0;
const int LED_Up_Pin = 8;

void setup() {
  pinMode(LED_Pin, OUTPUT);
  pinMode(button_Pin, INPUT);
  pinMode(LED_Up_Pin, OUTPUT);

}

void loop() {
  button_State = digitalRead(button_Pin);
  if (button_State == HIGH) {
    digitalWrite(LED_Pin, HIGH);
    digitalWrite(LED_Up_Pin, LOW);
  }
  else {
    digitalWrite(LED_Pin, LOW);
    digitalWrite(LED_Up_Pin, HIGH);
  }

}
