# chinna-improved-basic-botton-LED-arduino-circuit
### one of my first ever circuit i've touch with my own hand, this is not the circuit i made up by myself but rather a modified circuit i got from book called "Arduino Project Handbook 25 Practical; Project to Get You Started" by Mark Gaddes, big thanks to his book!


Circuit Diagram here : 

[Exquisite Juttuli-Bombul.pdf](https://github.com/user-attachments/files/23981201/Exquisite.Juttuli-Bombul.pdf)  


|Name      |Quantity|Components        |
|----------|--------|------------------|
|U1        |1       |Arduino Uno R3    |
|S1        |1       |Pushbotton        |
|R1, R2, R3|3       |220 ohms resistors|
|D1, D2    |2       |Yellow, Green LED |


or this file for data table : [UploadName,Quantity,Component
"U1",1," Arduino Uno R3"
"S1",1," Pushbutton"
"R1, R2, R3",3,"1 kΩ Resistor"
"D1, D2",2,"Red LED"
ing bom.csv…]()



## Circuit on TinkerCAD :

<img width="1272" height="457" alt="Exquisite Juttuli-Bombul" src="https://github.com/user-attachments/assets/d333af50-89d1-49e6-a35b-1e44ccc43843" />



## Whole code on arduino IDE here :

``` const int LED_Pin = 13;
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
```
