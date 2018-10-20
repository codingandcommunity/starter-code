//Arduino Piano
/*
Source: https://www.hackster.io/rahulkhanna/arduino-tutorial-mini-piano-08f8b8
Visit the Channel for more interesting projects
https://www.youtube.com/channel/UCks-9JSnVb22dlqtMgPjrlg

*/

/*
 * tone is the "sound value" associated with the C note
 */
int tone_C 262;
int C = 10;

int Buzz = 11;
int LED = 13;

void setup()
{
  pinMode(LED, OUTPUT);
  digitalWrite(LED,LOW);

  // pin 10 is paired with the C note
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);
  
}

void loop()
{
  /* 
   * If the button that is paired with the C note 
   * is pressed, then play the C note and light up the LED.
   */
  while(digitalRead(C) == LOW)
  {
    /*
     * The tone function is from the tone helper tool.
     * The line tone(Buzz,T_C); plays the C note through 
     * the Piezo buzzer.
     */
    tone(Buzz,T_C); 
    digitalWrite(LED,HIGH);
  }

  /*
   * If no button is pressed, don't play a note and 
   * don't light up the LED.
   */
  noTone(Buzz);
  digitalWrite(LED,LOW);

}

