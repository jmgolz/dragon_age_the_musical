#include "pitches.h"
//Dragon Age Inquisition theme (partial)
int melody[] = {
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_D5, 
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_D5, 
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4,
  NOTE_F5, NOTE_D5, NOTE_A5, NOTE_F5, NOTE_C6, NOTE_A5, NOTE_C6, NOTE_B5,
  NOTE_F5, NOTE_D5, NOTE_A5, NOTE_F5, NOTE_C6, NOTE_A5, NOTE_D6, NOTE_B5,
  NOTE_F5, NOTE_E5, NOTE_F5, NOTE_D5, NOTE_A5, NOTE_G5, NOTE_A5, NOTE_F5,
  NOTE_C6, NOTE_B5, NOTE_C6, NOTE_A5, NOTE_D6, NOTE_B5,
  NOTE_F5, NOTE_E5, NOTE_F5, NOTE_D5, NOTE_C6, NOTE_A5, 
  NOTE_B5, 0,
  NOTE_A4, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_G5, NOTE_FS5, NOTE_E5, 0,
  NOTE_A4, NOTE_E5, NOTE_A5, NOTE_C6, NOTE_B5, NOTE_G5, 0, 
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_G5, NOTE_A5, NOTE_E5, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_E5, NOTE_A4, NOTE_C6, NOTE_B5, NOTE_G5, NOTE_E5, NOTE_A5
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  1, 6, 1, 6, 1, 6, 2, 2,
  1, 6, 1, 6, 1, 6, 2, 2,
  6, 6, 2, 4, 6, 6, 2, 4,
  6, 6, 2, 4, 2, 2, 
  6, 6, 2, 4, 2, 2, 
  1, 2,
  2, 1, 6, 6, 2, 2, 1, 4,
  2, 1, 2, 2, 2, 1, 4,
  8, 8, 8, 8,
  2, 1, 6, 6, 2, 2, 1, 6, 6, 6, 6,
  2, 1, 2, 2, 2, 1, 2, 1,
  1
  
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 112; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}

// ghetto gospel melody NOTE_C6, NOTE_DS5, NOTE_G5, NOTE_F5, NOTE_DS5, NOTE_C5, NOTE_CS5, NOTE_C6, NOTE_G5, NOTE_F5, NOTE_DS5, NOTE_C5, NOTE_AS4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_GS4
// ghetto gospel noteDurations 6, 8, 2, 6, 4, 4, 8, 2, 2, 8, 8, 8, 8, 8, 8, 8, 8, 1
