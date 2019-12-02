char dataString[50] = {0};
int num = 0; 


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

   Serial.begin(9600);

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
    num = 1;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
 
  } 
  
  if (buttonState2 == HIGH) {
    num = 2;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
  if (buttonState3 == HIGH) {
    num = 3;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
   if (buttonState4 == HIGH) {
    num = 4;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
   if (buttonState5 == HIGH) {
    num = 5;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
   
  if (buttonState6 == HIGH) {
    num = 6;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
  if (buttonState7 == HIGH) {
    num = 7;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
   if (buttonState8 == HIGH) {
    num = 8;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
   if (buttonState9 == HIGH) {
    num = 9;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
  if (buttonState10 == HIGH) {
    num = 10;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
  if (buttonState11 == HIGH) {
    num = 11;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
   if (buttonState12 == HIGH) {
    num = 12;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
   if (buttonState13 == HIGH) {
    num = 13;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
  if (buttonState14 == HIGH) {
    num = 14;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
   if (buttonState15 == HIGH) {
    num = 15;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
   if (buttonState16 == HIGH) {
    num = 16;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
  if (buttonState17 == HIGH) {
    num = 17;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
   if (buttonState18 == HIGH) {
    num = 18;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
  if (buttonState19 == HIGH) {
    num = 19;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
  if (buttonState20 == HIGH) {
    num = 20;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
   if (buttonState21 == HIGH) {
    num = 21;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
  if (buttonState22 == HIGH) {
    num = 22;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
   if (buttonState23 == HIGH) {
    num = 23;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
  if (buttonState24 == HIGH) {
    num = 24;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  } 
  
  if (buttonState25 == HIGH) {
    num = 25;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
  
   if (buttonState26 == HIGH) {
    num = 26;
    sprintf(dataString,"%02X",num); // convert a value to hexa 
    Serial.println(dataString);   // send the data
    delay(140); 
  }
}

