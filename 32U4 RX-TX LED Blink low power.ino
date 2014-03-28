/*
  32U4 Micro arduino
  LED 17 has reverse logic !! is orange LED 
  green LED  has no pin number 
 
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

#include <JeeLib.h>

    ISR(WDT_vect) { Sleepy::watchdogEvent(); }

// the setup routine runs once when you press reset:
void setup() {
  delay (10000); 
}

// the loop routine runs over and over again forever:
void loop() {

  
  TXLED1; //TX GREEN LED 
  Sleepy::loseSomeTime(75);              // wait for a 75/1000 second
  TXLED0; //TX GREEN LED
  
  Sleepy::loseSomeTime(3000);              // wait for 3 seconds
  
  RXLED1; //RX ORANGE LED 
  Sleepy::loseSomeTime(50);              // wait for a 50/1000 second
  RXLED0; //RX ORANGE LED 
  
  Sleepy::loseSomeTime(3000);              // wait for 3 seconds
  
}
