const int ledPin = 13;
const int buzzerPin = 3;
#define NOTE_C4 262   // Middle C
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523   // High C
#define NOTE_D5 587   // High D
#define NOTE_F5 698   // High F
#define NOTE_E4 330   // Middle E
#define NOTE_G5 784   // High G
#define NOTE_E5 659   // High E
#define NOTE_B3 247
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B4 494
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_REST 0

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
 int melody[] = {
    NOTE_D4, NOTE_B3, NOTE_A3, NOTE_REST, NOTE_A3, NOTE_FS3, NOTE_G3, NOTE_E3, NOTE_D3, NOTE_FS3, NOTE_A3,
    NOTE_A3, NOTE_D4, NOTE_FS4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_A4,
    NOTE_FS4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_B3
  };

  int noteDurations[] = {
    8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 2,
    8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 4, 4,
    8, 8, 4, 8, 8, 4, 8, 8, 4, 4
  };
  
  for (int i = 0; i < 32; i++) {
    int noteDuration = 1000 / noteDurations[i];
    if (melody[i] != NOTE_REST) {
      tone(buzzerPin, melody[i], noteDuration);
    }
    delay(noteDuration + 30); // Add a small delay for a more pleasant sound
  }
  
}
