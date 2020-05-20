#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7

char state = '0';

void setup() {
  // put your setup code here, to run once:
  pinMode (pin2, OUTPUT);
  pinMode (pin3, OUTPUT);
  pinMode (pin4, OUTPUT);
  pinMode (pin5, OUTPUT);
  pinMode (pin6, OUTPUT);
  pinMode (pin7,OUTPUT);
  Serial.begin(9600);   //default baud rate of bluetooth??
}

void loop() 
  // put your main code here, to run repeatedly
  
   if (state=='0' )  {
      digitalWrite(pin2,LOW); 
      Serial.println("PIN2: OFF");

      digitalWrite(pin3,LOW); 
      Serial.println("PIN2: OFF");

      digitalWrite(pin4,LOW); 
      Serial.println("PIN2: OFF");

      digitalWrite(pin5,LOW); 
      Serial.println("PIN2: OFF");

      digitalWrite(pin6,LOW); 
      Serial.println("PIN2: OFF");

      digitalWrite(pin7,LOW); 
      Serial.println("PIN2: OFF");

      state=0;
     }
     

   else if (state=='1')  {
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      Serial.println("pin2: ON");
//      state=0;
    }  

   else if (state=='2')  {
      digitalWrite(pin3,HIGH);
      digitalWrite(pin2,LOW);
      
      Serial.println("pin3: ON");
//      state=0;
    } 
   else if (state=='3')  {
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
//      state=0;
    }  

  else if (state=='4')  {
      digitalWrite(pin4,HIGH);
      digitalWrite(pin6,HIGH);
      digitalWrite(pin5,LOW);
      digitalWrite(pin7,LOW);
      
      Serial.println("pin4: ON");
      Serial.println("pin6: ON");
//      state=0;
    } 

  else if (state=='7')  {
      digitalWrite(pin5,HIGH);
      digitalWrite(pin7,HIGH);
      digitalWrite(pin4,LOW);
      digitalWrite(pin6,LOW);
      
      Serial.println("pin5: ON");
      Serial.println("pin7: ON");
//      state=0;
    } 


  else if (state=='5')  {
      digitalWrite(pin5,HIGH);
       digitalWrite(pin6,HIGH);
       digitalWrite(pin4,LOW);
       digitalWrite(pin7,LOW);
      
      Serial.println("pin5: ON");
      Serial.println("pin6: ON");
//      state=0;
    } 

  else if (state=='6')  {
      digitalWrite(pin4,HIGH);
       digitalWrite(pin7,HIGH);
       digitalWrite(pin5,LOW);
       digitalWrite(pin6,LOW);
      
      Serial.println("pin4: ON");
      Serial.println("pin7: ON");
//      state=0;
    } 

  else if (state=='8')  {
      digitalWrite(pin4,LOW);
      digitalWrite(pin5,LOW);
      digitalWrite(pin6,LOW);
      digitalWrite(pin7,LOW);
      
      
//      state=0;
    } 
    
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    Serial.println(inChar);
    state = inChar;
  }
}
