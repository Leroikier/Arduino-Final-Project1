int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);

while (millis() <5000) {
  sensorValue = analogRead(A0);
  if (sensorValue > sensorHigh) {
    sensorHigh = sensorValue;
  }
  if (sensorValue  < sensorLow) {
    sensorLow = sensorValue;
  }
}
digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(A0);

int pitch = map(sensorValue,sensorLow,sensorHigh, 50, 4000);

tone(8, pitch, 20);

delay(10);
}

// When you first power the Arduino on, there is a 5 second window for you to calibrate the sensor. To do this, move your hand up and down over the photoresistor, changing the amount of light that reaches it. The closer you replicate the motions you expect to use while playing the instrument, the better the calibration will be.
After 5 seconds, the calibration will be complete, and the LED on the Arduino will turn off. When this happens, you should hear some noise coming from the piezo! As the amount of light that falls on the sensor changes, so should the frequency that the piezo plays.

