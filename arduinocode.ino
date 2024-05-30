int BUTTON_A = 2; // Connect button A to pin 2 on the Arduino
int BUTTON_B = 3; // Connect button B to pin 3 on the Arduino
int BUTTON_C = 6; // Connect button C to pin 4 on the Arduino
int BUTTON_D = 5;
int BUTTON_E = 4;
int BUTTON_Q = 8;
int LED_PINA = 11;
int LED_PINB = 17;
int LED_PINC = 10;
int LED_PIND = 7;


int LED_PINE = 18;
// Add more button pins as needed

int PIEZO = 12; // Connect the piezo buzzer or speaker to pin 7 on the Arduino

void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 baud
  pinMode(BUTTON_A, INPUT_PULLUP); // Set button A pin as input with internal pull-up resistor
  pinMode(BUTTON_B, INPUT_PULLUP); // Set button B pin as input with internal pull-up resistor
  pinMode(BUTTON_C, INPUT_PULLUP); // Set button C pin as input with internal pull-up resistor
  pinMode(BUTTON_D, INPUT_PULLUP); // Set button C pin as input with internal pull-up resistor
  pinMode(BUTTON_E, INPUT_PULLUP); // Set button C pin as input with internal pull-up resistor
  pinMode(BUTTON_Q, INPUT_PULLUP);
  pinMode(LED_PINA, OUTPUT);
  pinMode(LED_PINB, OUTPUT);
  pinMode(LED_PINC, OUTPUT);
  pinMode(LED_PIND, OUTPUT);
  pinMode(LED_PINE, OUTPUT);


  // Initialize piezo pin
  pinMode(PIEZO, OUTPUT);
}

void loop() {
  // Read the state of button A
  if (digitalRead(BUTTON_A) == LOW) {
    playPianoNote(12, 230); // Play A note (440 Hz)
    digitalWrite(LED_PINA, HIGH);
  } else {
    digitalWrite(LED_PINA, LOW);
  }
 
  // Read the state of button B
  if (digitalRead(BUTTON_B) == LOW) {
    playPianoNote(12, 330); // Play B note (494 Hz)
    digitalWrite(LED_PINB, HIGH);
  } else {
    digitalWrite(LED_PINB, LOW);
  }
 
  // Read the state of button C
  if (digitalRead(BUTTON_C) == LOW) {
    playPianoNote(12, 130); // Play C note (523 Hz)
    digitalWrite(LED_PINC, HIGH);
  } else {
    digitalWrite(LED_PINC, LOW);
  }

    // Read the state of button D
  if (digitalRead(BUTTON_D) == LOW) {
    playPianoNote(12, 430); // Play C note (523 Hz)
    digitalWrite(LED_PIND, HIGH);
  } else {
    digitalWrite(LED_PIND, LOW);
  }

  if (digitalRead(BUTTON_E) == LOW) {
    playPianoNote(12, 530);
    digitalWrite(LED_PINE, HIGH);
  } else {
    digitalWrite(LED_PINE, LOW);
  }
 
  if (digitalRead(BUTTON_Q) == LOW) {
    midi(); // Call your midi function when the button is pressed
  }
  // Add more buttons and notes as needed
}

  void midi() {

    digitalWrite(LED_PIND, HIGH);
       
      tone(PIEZO, 146, 706.188118812);
      delay(784.653465347);
      delay(264.851485149);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINE, HIGH);
    
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);
 
    digitalWrite(LED_PINC, HIGH);
  
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
         
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);
    
    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);

      tone(PIEZO, 130, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PIND, HIGH);

      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 130, 593.316831683);
      delay(659.240924092);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);

      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PIND, HIGH);

      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);

      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 138, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);

      tone(PIEZO, 138, 593.316831683);
      delay(659.240924092);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINC, HIGH);
 
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINE, HIGH);
  
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);

      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);

      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
  
      tone(PIEZO, 138, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);

      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
 
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINC, HIGH);

      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 277, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 277, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 277, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 277, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 207, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
    
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 207, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 277, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 261, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 233, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 155, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 164, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 195, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
 
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINB, HIGH);
         
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 277, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 277, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 277, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 277, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 207, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);

    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);

    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
          
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
          
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);

    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINC, HIGH);
          
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
    
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
    
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 207, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
     
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINE, HIGH);
     
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
   
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
       
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 277, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINE, HIGH);
      
      tone(PIEZO, 261, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
    
    digitalWrite(LED_PINE, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
    
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 233, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
    
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 155, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 164, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 195, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PINC, HIGH);
      
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINC, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINB, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINB, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
    
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
    
    digitalWrite(LED_PINA, LOW);

    digitalWrite(LED_PIND, HIGH);
      
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
   
    digitalWrite(LED_PIND, LOW);

    digitalWrite(LED_PINA, HIGH);
       
      tone(PIEZO, 146, 1425.0);
      delay(1583.33333333);
 
    digitalWrite(LED_PINA, LOW);

  }

void playPianoNote(int PIEZO, int frequency) {
  tone(PIEZO, frequency, 100); // Play the specified note for 100 ms
  delay(100); // Delay to ensure the note is heard
  noTone(PIEZO); // Stop the tone
}


