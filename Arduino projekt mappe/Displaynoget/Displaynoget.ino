#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);

pinMode(switchPin,INPUT);

lcd.print("Crystal Ball!");

lcd.setCursor(0, 1);
lcd.print("Shake it Bitch!");
}

void loop() {
  // put your main code here, to run repeatedly:
switchState= digitalRead(switchPin);

if (switchState != prevSwitchState) {
  if (switchState == LOW ) {
    reply = random(8);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("The ball says: ");
    lcd.setCursor(0, 1);

    switch(reply){
      case 0:
      lcd.print("Yeah boi");
      break;
      case 1:
      lcd.print("You'r moms gay");
      break;
      case 2:
      lcd.print("you'r dads gay");
      break;
      case 3:
      lcd.print("Gaayboooi");
      break;
      case 4:
      lcd.print("Suck me dry");
      break;
      case 5:
      lcd.print("Rimjobs for free");
      break;
      case 6:
      lcd.print("Knob head");
      break;
      case 7:
      lcd.print("You are Jew");
      break;
    }
  }
}
prevSwitchState = switchState;
}
