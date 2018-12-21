int switchState = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
switchState = digitalRead(2);
if (switchState == LOW){
  digitalWrite(3, HIGH); //Green LED
  digitalWrite(4, LOW); //RED LED
  digitalWrite(5, LOW);  //RED LED
}
else {
  digitalWrite(3, LOW); //Green LED
  digitalWrite(4, LOW); //RED LED
  digitalWrite(5, HIGH);  //RED LED

  delay(250);
  //Toggle the LED's
  digitalWrite(4, HIGH); //RED LED
  digitalWrite(5, LOW);  //RED LED

  delay(250);
}
}
