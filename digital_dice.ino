const int rows[] = {22, 19, 23, 18, 5};
const int cols[] = {27, 26, 25, 33, 32};

const int BUTTON = 4;

// 5x5 digits
byte numbers[6][5] = {

  // 1
  {
    B00100,
    B01100,
    B00100,
    B00100,
    B01110
  },

  // 2
  {
    B01110,
    B00001,
    B00110,
    B01000,
    B01111
  },

  // 3
  {
    B01110,
    B00001,
    B00110,
    B00001,
    B01110
  },

  // 4
  {
    B01010,
    B01010,
    B01010,
    B01111,
    B00010
  },

  // 5
  {
    B01111,
    B01000,
    B01110,
    B00001,
    B01110
  },

  // 6
  {
    B00111,
    B01000,
    B01110,
    B01001,
    B00110
  }
};


void setup() {

  for (int i = 0; i < 5; i++) {
    pinMode(rows[i], OUTPUT);
    pinMode(cols[i], OUTPUT);

    digitalWrite(rows[i], LOW);
    digitalWrite(cols[i], HIGH);
  }

  pinMode(BUTTON, INPUT_PULLUP);

  randomSeed(analogRead(34));
}


void displayNumber(int number) {

  for (int row = 0; row < 5; row++) {

    digitalWrite(rows[row], HIGH);

    for (int col = 0; col < 5; col++) {

      if (numbers[number - 1][row] & (1 << (4 - col))) {

        digitalWrite(cols[col], LOW);
      }
    }

    delayMicroseconds(1000);

    digitalWrite(rows[row], LOW);

    for (int col = 0; col < 5; col++) {
      digitalWrite(cols[col], HIGH);
    }
  }
}


void loop() {

  static int number = 1;

  // Keep displaying number
  displayNumber(number);

  // Button pressed
  if (digitalRead(BUTTON) == LOW) {

    delay(50);

    // Rolling animation
    for (int i = 0; i < 15; i++) {

      number = random(1, 7);

      unsigned long start = millis();

      while (millis() - start < 80) {
        displayNumber(number);
      }
    }

    // Final number
    number = random(1, 7);

    unsigned long start = millis();

    while (millis() - start < 2000) {
      displayNumber(number);
    }

    // Wait for button release
    while (digitalRead(BUTTON) == LOW) {
      displayNumber(number);
    }
  }
}