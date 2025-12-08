# chinna-improved-basic-botton-LED-arduino-circuit
### one of my first ever circuit i've touch with my own hand, this is not the circuit i made up by myself but rather a modified circuit i got from book called "Arduino Project Handbook 25 Practical Project to Get You Started" by Mark Gaddes, big thanks to his book!


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
![arduino project 1](https://github.com/user-attachments/assets/f07b3bd6-ceae-4fe9-b68b-cd2b847413a7)

## After my first project and this imrpoved switch arduino circuit i made i learned multiple thing
1. resistor and component 2 legs should not be in the same line of bread board because current will and go straight to load or ground, because resistor have more resistance therefore current will choose better path to flow through (probably im not the best at these stuff)

2. arduino board will communicate with each other pin. for example circuit in this repository have 1 input which is botton and 2 ouput which is 2 LED. 1 yellow LED will stay open all the time and will close when botton is pushed, green LED is the oppoite which will only open once botton is pushed. **i dont have to get 2 seperate input in order to power to seperate output, just one is enough.**

3. as you can see in picture bread board have 4 big seperate box
   have 2 long line which have + and - __indicates that these point are only for 5V pin, 3.3 V pin and ground pin__
   have 5 long line which doesn't connect as long line horizontally **but rather a vertical short line which has 5 hole in a line connected** which main purpose of small components like resistors, transistors etc.

4. if i want LED to do according to arduino command _(blinking or switch circuit in this case)_ i have to connect **digital output pin >> 220 ohms resistors >> LED >> ground** if i dont use 220 ohms resistor and connect digital pin directly to LED it wont burn but rather going to have a really bright colour _(in my case my green LED glow yellow because too much voltage?)_ but if you connect LED directly to battery or DC source it may burn if do without proper resistor, **this case it's digital signal from arduino to LED which is why it didn't burn if connects without 220 ohms resistor**

5. **to get digital input you should not connect 5V pin to load then out of load directly to input digital pin** but you have to create 2 seperate path, one for signal and other for current to go back to ground normally

### that's probably all! i'll add more if i manage to think about it

# PLEASE CORRECT ME IF IM WRONG ON ANY OF THIS OR HAVE TO IMRPOVE IN SOME WAY ON MY GITHUB REPOSITORY BECAUSE IM A HIGHSCHOOLER WITH ONLY FUNDAMENTAL KNOWLEDGE PLEASE CONTACT ME @ProfessorTaisan on X (twitter)
   
