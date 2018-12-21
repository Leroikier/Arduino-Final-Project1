//Variabler
int GREEN = 3;
int YELLOW = 4;
int RED = 5;
int switchState = 0;
int piezoPin = 8;

void setup() {
//Alt sættes til at give et output
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
//Switchstate digitalread 2 er vores forbindelse til knappen
switchState = digitalRead(2);

//Hvis switchstate er low svare det til at knappen ikke er aktiveret
if (switchState == LOW){  
  do{
  digitalWrite(3, LOW); //Green LED
  digitalWrite(4, LOW); //YELLOW LED
  digitalWrite(5, HIGH);  //RED LED
  delay(800);
  tone(piezoPin, 175, 600);
  delay(800);
  break;
}while (switchState == LOW);// imens knappen ikke er trykket, kør vores Do while.
}

if (switchState == HIGH){  //hvis knappen trykkes, kør denne if sætning.
  digitalWrite(3, LOW); //Green LED
  digitalWrite(4, HIGH); //YELLOW LED, angiver at den gule lampen er tændt.
  digitalWrite(5, LOW); //RED LED
  
  delay(1200);
  tone(piezoPin, 175, 600);
  delay(1200);
  tone(piezoPin, 175, 600);
  delay(1200);
  tone(piezoPin, 175, 600);
  delay(1200);
  tone(piezoPin, 175, 600);
  delay(800);

  
  digitalWrite(3, HIGH); //Green LED, angiver at den grønne lampen er tændt.
  digitalWrite(4, LOW); //YELLOW LED
  digitalWrite(5, LOW); //RED LED

  delay(600);
  tone(piezoPin, 190, 150); // første argument (piezopin) er forbindelsen til vores piezohøjtaler,
                            // anden argument er herts på vores lydsignal
  delay(600); 
  tone(piezoPin, 190, 150); // , sidste argument er hvor mange milisekunder tonen skal afspille
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  tone(piezoPin, 190, 150);
  delay(600);
  
  digitalWrite(3, LOW); //Green LED
  digitalWrite(4, HIGH); //YELLOW LED, angiver at den gule lampen er tændt.
  digitalWrite(5, LOW); //RED LED

  delay(1200);
  tone(piezoPin, 175, 600);
  delay(1200);
  tone(piezoPin, 175, 600);
  delay(1200);
  tone(piezoPin, 175, 600);
  delay(1200);
  tone(piezoPin, 175, 600);
  delay(800);
}
}
