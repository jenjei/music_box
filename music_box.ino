
void loop() {
  // put your main code here, to run repeatedly:
}

#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784

// Defining the melody
int melody[] = {
  NOTE_E5, NOTE_B4,NOTE_C5,NOTE_D5,NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5,
  NOTE_C5,NOTE_A4, NOTE_A4,
  0, NOTE_D5, NOTE_F5, NOTE_A4, NOTE_G5, NOTE_F5,
  NOTE_E5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5,
  NOTE_C5, NOTE_A4, NOTE_A4
};

// Defining note durations
// 4 = 1/4 note, 8 = 1/8 note etc.
int noteDurations[] = {
  4, 8, 8, 4, 8, 8,
  4, 8, 8, 4, 8, 8,
  2, 8, 4, 4,
  4, 4, 4,
  4, 4, 8, 4, 8, 8,
  2, 8, 4, 8, 8,
  4, 8, 8, 4, 4,
  4, 4, 4
};

void setup() {
  // Iterate through the notes
  for (int thisNote = 0; thisNote < 42; thisNote++) {
    
    // Calculating note durations
    int noteDuration = 1000 / noteDurations[thisNote];
    
    // Play the melody
    tone(9, melody[thisNote], noteDuration);

    // Pauses between notes
    // Note length +30%
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop melody
    noTone(9);
  }
}
