void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.write(analogRead(A0)/4);

delay(1);
}

import processing.serial.*;

Serial myPort;

PImage logo;

int bgcolor = 0;

void setup();{
  colorMode(HSB, 255);

  logo =loadImage("http://arduino.cc/logo.png");
  size(logo.width, logo.height);

  println("Available serial ports:");
  println(Serial.list());

  myPort =
    new Serial(this, Serial.list()[0], 9600);
}



