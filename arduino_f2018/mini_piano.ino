//Arduino Piano
/*
Source: https://www.hackster.io/rahulkhanna/arduino-tutorial-mini-piano-08f8b8
Visit the Channel for more interesting projects
https://www.youtube.com/channel/UCks-9JSnVb22dlqtMgPjrlg

*/

/*
 * tone is the "sound value" associated with the C note
 */
int tone_C = 1915;

/*
 * Other note tones:   d     e     f     g     a     b   
 *              1700  1519  1432   1275  1136  1014
 */

/*
 * Pin for button to read in if the user presses the C note
 */
int button_C = 10;

/*
 * Pins for speaker and LED 
 */
int speaker = 11;
int LED = 13;

void setup()
{
  pinMode(LED, OUTPUT);
  digitalWrite(LED,LOW);

  /*
   * Pin 10 is paired with the C note
   */
  pinMode(button_C, INPUT);
  digitalWrite(button_C,HIGH);

  /*
   * Add the other notes to pins to play 
   */
   
  
}

void loop()
{
  /* 
   * If the button that is paired with the C note 
   * is pressed, then play the C note and light up the LED.
   */
  while(digitalRead(button_C) == LOW)
  {
    /*
     * This 
     */
    digitalWrite(speaker, HIGH);
    delayMicroseconds(tone_C);
    digitalWrite(speaker, LOW);
    delayMicroseconds(tone_C);
    
    digitalWrite(LED,HIGH);
  }

  /*
   * Add the logic for the other notes here!
   */

}

