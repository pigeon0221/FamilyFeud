#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
 
#define melodyPin A2
//Mario main theme melody
int melody1[] = {
    NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
};
int melody2[] = {
     NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
};
int melody3[] = {
    NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
};
int melody4[] = {
    NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
};
int melody5[] = {
   NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};


//Mario main them tempo
int tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

};
int tempo2[] = {
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};
//Underworld melody
int underworld_melody1[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
 
};
int underworld_melody2[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
 
};
int underworld_melody3[] = {
   NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
 
};
int underworld_melody4[] = {
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
 
};
//Underwolrd tempo
int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
};
int underworld_tempo2[] = {
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};

bool button1On = false;
bool button2On = false;
int underWorldMusicCount=1;
int overWorldMusicCount=1;
void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(5, INPUT_PULLUP); //Button 1
  pinMode(3, OUTPUT);
  pinMode(11, INPUT_PULLUP);  //Button 2
  pinMode(10, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(12, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);
  song();
  
 
}

void loop() {
  //read the pushbutton value into a variable
  int button1 = digitalRead(5);
  int button2 = digitalRead(11);
  int resetButton = digitalRead(12);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if(button1On == true){
     digitalWrite(3, HIGH);
  }
  if(button2On == true){
     digitalWrite(10, HIGH);
  }
  if (resetButton == LOW){
     digitalWrite(8, LOW);
  }
  else{
    digitalWrite(8, HIGH);
  }
  if (button1 == LOW and button2On == false) {
    digitalWrite(3, HIGH);
    button1On=true;
     if (overWorldMusicCount==1){
     int size = sizeof(melody1) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / tempo[thisNOTE];
 
      buzz(melodyPin, melody1[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
       digitalWrite(3, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(3, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
 
    }
    }
    if (overWorldMusicCount==2){
     int size = sizeof(melody2) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / tempo[thisNOTE];
 
      buzz(melodyPin, melody2[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
      digitalWrite(3, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(3, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
 
    }
    }
    if (overWorldMusicCount==3){
     int size = sizeof(melody3) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / tempo2[thisNOTE];
 
      buzz(melodyPin, melody3[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
     digitalWrite(3, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(3, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
 
    }
    }
    if (overWorldMusicCount==4){
     int size = sizeof(melody4) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / tempo[thisNOTE];
 
      buzz(melodyPin, melody4[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
     digitalWrite(3, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(3, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
 
    }
    }
     if (overWorldMusicCount==5){
     int size = sizeof(melody5) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / tempo2[thisNOTE];
 
      buzz(melodyPin, melody5[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
      
     digitalWrite(3, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(3, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
       overWorldMusicCount=0;
    }
    }
    overWorldMusicCount+=1;
  }
  if (button2 == LOW and button1On == false) {
    digitalWrite(10, HIGH);
    button2On=true;
    if (underWorldMusicCount==1){
     int size = sizeof(underworld_melody1) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / underworld_tempo[thisNOTE];
 
      buzz(melodyPin, underworld_melody1[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
     digitalWrite(10, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(10, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
 
    }
    }
     if (underWorldMusicCount==2){
     int size = sizeof(underworld_melody2) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / underworld_tempo[thisNOTE];
 
      buzz(melodyPin, underworld_melody2[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
      digitalWrite(10, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(10, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
 
    }
     }
     if (underWorldMusicCount==3){
     int size = sizeof(underworld_melody3) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / underworld_tempo[thisNOTE];
 
      buzz(melodyPin, underworld_melody3[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
      digitalWrite(10, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(10, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
 
    }
  }
   if (underWorldMusicCount==4){
     int size = sizeof(underworld_melody4) / sizeof(int);
    for (int thisNOTE = 0; thisNOTE < size; thisNOTE++) {
 
      // to calculate the NOTE duration, take one second
      // divided by the NOTE type.
      //e.g. quarter NOTE = 1000 / 4, eighth NOTE = 1000/8, etc.
      int NOTEDuration = 1000 / underworld_tempo2[thisNOTE];
 
      buzz(melodyPin, underworld_melody4[thisNOTE], NOTEDuration);
 
      // to distinguish the NOTEs, set a minimum time between them.
      // the NOTE's duration + 30% seems to work well:
      int pauseBetweenNOTEs = NOTEDuration * 1.30;
     digitalWrite(10, LOW);
      delay(pauseBetweenNOTEs);
       digitalWrite(10, HIGH);
 
      // stop the tone playing:
      buzz(melodyPin, 0, NOTEDuration);
      underWorldMusicCount=0;
    }
  }
  underWorldMusicCount+=1;
  }
  if (resetButton == LOW) {
    digitalWrite(10, LOW);
    digitalWrite(3 , LOW);
    button1On=false;
    button2On=false;
  }


  
    
}


void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13, LOW);
 
}
void song()  //here is where all the NOTEs for the song are played.
{        
 buzz(melodyPin, NOTE_A7,100); //A
 delay(100);
buzz(melodyPin, NOTE_G7,100); //G
 delay(100);
buzz(melodyPin, NOTE_E7,100); //E
 delay(100);
buzz(melodyPin, NOTE_C7,100); //C
 delay(100);
buzz(melodyPin, NOTE_D7,100); //D
 delay(100);
buzz(melodyPin, NOTE_B7,100); //B
 delay(100);
buzz(melodyPin, NOTE_F7,100); //F
 delay(100);
buzz(melodyPin, NOTE_C8,100); //C
 delay(100);
buzz(melodyPin, NOTE_A7,100); //A
 delay(100);
buzz(melodyPin, NOTE_G7,100); //G
 delay(100);
buzz(melodyPin, NOTE_E7,100); //E
 delay(100);
buzz(melodyPin, NOTE_C7,100); //C
 delay(100);
buzz(melodyPin, NOTE_D7,100); //D
 delay(100);
buzz(melodyPin, NOTE_B7,100); //B
 delay(100);
buzz(melodyPin, NOTE_F7,100); //F
 delay(100);
buzz(melodyPin, NOTE_C8,100); //C
 delay(100);
  
}
