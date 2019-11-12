const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3; 
const int buttonPin3 = 4;
const int buttonPin4 = 5; 

const int buttonPin5 = 8;     // the number of the pushbutton pin
const int buttonPin6 = 9; 
const int buttonPin7 = 10;
const int buttonPin8 = 11; 
const int buttonPin9 = 12;     // the number of the pushbutton pin
const int buttonPin10 = 13;

const int buttonPin11 = 6; // Abort
const int buttonPin12 = 7; // Launch 

const int buttonPin13 = 14; 
const int buttonPin14 = 15;
const int buttonPin15 = 16;
const int buttonPin16 = 17; 
const int buttonPin17 = 18;
const int buttonPin18 = 19;

const int buttonPin19 = A0; 
const int buttonPin20 = A1;
const int buttonPin21 = A2;

const int buttonPin22 = A3; 
const int buttonPin23 = A4;
const int buttonPin24 = A5;
const int buttonPin25 = A6; 
const int buttonPin26 = A7;


const int soundPin1 = 22;      // the number of the LED pin
const int soundPin2 = 23;      // the number of the LED pin
const int soundPin3 = 24;      // the number of the LED pin
const int soundPin4 = 25;      // the number of the LED pin
const int soundPin5 = 26;      // the number of the LED pin
const int soundPin6 = 27;      // the number of the LED pin
const int soundPin7 = 28;      // the number of the LED pin
const int soundPin8 = 29;      // the number of the LED pin
const int soundPin9 = 30;      // the number of the LED pin
const int soundPin10 = 31;      // the number of the LED pin
const int soundPin11 = 32;      // the number of the LED pin
const int soundPin12 = 33;      // the number of the LED pin

const int soundPin13 = 35;      // the number of the LED pin
const int soundPin14 = 35;      // the number of the LED pin
const int soundPin15 = 35;      // the number of the LED pin
const int soundPin16 = 35;      // the number of the LED pin
const int soundPin17 = 35;      // the number of the LED pin
const int soundPin18 = 35;      // the number of the LED pin

const int soundPin19 = 36;      // the number of the LED pin
const int soundPin20 = 37;      // the number of the LED pin
const int soundPin21 = 38;      // the number of the LED pin

const int soundPin22 = 39;      // the number of the LED pin
const int soundPin23 = 40;      // the number of the LED pin
const int soundPin24 = 41;      // the number of the LED pin
const int soundPin25 = 42;      // the number of the LED pin
const int soundPin26 = 43;      // the number of the LED pin


// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0; 
int buttonState3 = 0; 
int buttonState4 = 0; 
int buttonState5 = 0;         // variable for reading the pushbutton status
int buttonState6 = 0; 
int buttonState7 = 0; 
int buttonState8 = 0; 
int buttonState9 = 0;         // variable for reading the pushbutton status
int buttonState10 = 0; 
int buttonState11 = 0; 
int buttonState12 = 0; 
int buttonState13 = 0; 
int buttonState14 = 0; 
int buttonState15 = 0; 
int buttonState16 = 0; 
int buttonState17 = 0; 
int buttonState18 = 0; 
int buttonState19 = 0; 
int buttonState20 = 0; 
int buttonState21 = 0;
int buttonState22 = 0; 
int buttonState23 = 0; 
int buttonState24 = 0; 
int buttonState25 = 0; 
int buttonState26 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(soundPin1, OUTPUT);
  pinMode(soundPin2, OUTPUT);
  pinMode(soundPin3, OUTPUT);
  pinMode(soundPin4, OUTPUT);
  pinMode(soundPin5, OUTPUT);
  pinMode(soundPin6, OUTPUT);
  pinMode(soundPin7, OUTPUT);
  pinMode(soundPin8, OUTPUT);
  pinMode(soundPin9, OUTPUT);
  pinMode(soundPin10, OUTPUT);
  pinMode(soundPin11, OUTPUT);
  pinMode(soundPin12, OUTPUT);
  pinMode(soundPin13, OUTPUT);
  pinMode(soundPin14, OUTPUT);
  pinMode(soundPin15, OUTPUT);
  pinMode(soundPin16, OUTPUT);
  pinMode(soundPin17, OUTPUT);
  pinMode(soundPin18, OUTPUT);
  pinMode(soundPin19, OUTPUT);
  pinMode(soundPin20, OUTPUT);
  pinMode(soundPin21, OUTPUT);
  pinMode(soundPin22, OUTPUT);
  pinMode(soundPin23, OUTPUT);
  pinMode(soundPin24, OUTPUT);
  pinMode(soundPin25, OUTPUT);
  pinMode(soundPin26, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buttonPin11, INPUT);
  pinMode(buttonPin12, INPUT);
  pinMode(buttonPin13, INPUT);
  pinMode(buttonPin14, INPUT);
  pinMode(buttonPin15, INPUT);
  pinMode(buttonPin16, INPUT);
  pinMode(buttonPin17, INPUT);
  pinMode(buttonPin18, INPUT);
  pinMode(buttonPin19, INPUT);
  pinMode(buttonPin20, INPUT);
  pinMode(buttonPin21, INPUT);
  pinMode(buttonPin22, INPUT);
  pinMode(buttonPin23, INPUT);
  pinMode(buttonPin24, INPUT);
  pinMode(buttonPin25, INPUT);
  pinMode(buttonPin26, INPUT);
  
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  buttonState9 = digitalRead(buttonPin9);
  buttonState10 = digitalRead(buttonPin10);
  buttonState11 = digitalRead(buttonPin11);
  buttonState12 = digitalRead(buttonPin12);
  buttonState13 = digitalRead(buttonPin13);
  buttonState14 = digitalRead(buttonPin14);
  buttonState15 = digitalRead(buttonPin15);
  buttonState16 = digitalRead(buttonPin16);
  buttonState17 = digitalRead(buttonPin17);
  buttonState18 = digitalRead(buttonPin18);
  buttonState19 = digitalRead(buttonPin19);
  buttonState20 = digitalRead(buttonPin20);
  buttonState21 = digitalRead(buttonPin21);
  buttonState22 = digitalRead(buttonPin22);
  buttonState23 = digitalRead(buttonPin23);
  buttonState24 = digitalRead(buttonPin24);
  buttonState25 = digitalRead(buttonPin25);
  buttonState26 = digitalRead(buttonPin26);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin1, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin1, LOW);
  }
  
  if (buttonState2 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin2, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin2, LOW);
  }
  
  if (buttonState3 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin3, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin3, LOW);
  }
  
   if (buttonState4 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin4, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin4, LOW);
  }
  
   if (buttonState5 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin5, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin5, LOW);
  }
  
  
  if (buttonState6 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin6, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin6, LOW);
  }
  
  if (buttonState7 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin7, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin7, LOW);
  }
  
   if (buttonState8 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin8, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin8, LOW);
  }
  
   if (buttonState9 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin9, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin9, LOW);
  }
  
  if (buttonState10 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin10, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin10, LOW);
  }
  
  if (buttonState11 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin11, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin11, LOW);
  }
  
   if (buttonState12 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin12, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin12, LOW);
  }
  
   if (buttonState13 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin13, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin13, LOW);
  }
  
  if (buttonState14 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin14, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin14, LOW);
  }
  
   if (buttonState15 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin15, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin15, LOW);
  }
   if (buttonState16 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin16, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin16, LOW);
  }
  
  if (buttonState17 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin17, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin17, LOW);
  }
  
   if (buttonState18 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin18, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin18, LOW);
  }
  if (buttonState19 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin19, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin19, LOW);
  }
  
  if (buttonState20 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin20, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin20, LOW);
  }
  
   if (buttonState21 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin21, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin21, LOW);
  }
    
  if (buttonState22 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin22, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin22, LOW);
  }
  
   if (buttonState23 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin23, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin23, LOW);
  }
  if (buttonState24 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin24, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin24, LOW);
  }
  
  if (buttonState25 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin25, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin25, LOW);
  }
  
   if (buttonState26 == HIGH) {
    // turn LED on:
    digitalWrite(soundPin26, HIGH);
  } else {
    // turn LED off:
    digitalWrite(soundPin26, LOW);
  }
}

