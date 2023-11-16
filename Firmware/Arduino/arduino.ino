// Variables for tracking the state of the program
int i = 0;
int j = 0;

// Motor control pins for the left side
const int EnableL = 5;
const int HighL = 6;  // LEFT SIDE MOTOR
const int LowL = 7;

// Motor control pins for the right side
const int EnableR = 10;
const int HighR = 8;  // RIGHT SIDE MOTOR
const int LowR = 9;

// Digital pins for reading binary data
const int D0 = 0; // Raspberry pin 21 LSB
const int D1 = 1; // Raspberry pin 22
const int D2 = 2; // Raspberry pin 23
const int D3 = 3; // Raspberry pin 24 MSB

// Variables to store binary data
int a, b, c, d, data;

// Setup function to initialize pins
void setup() {
  pinMode(EnableL, OUTPUT);
  pinMode(HighL, OUTPUT);
  pinMode(LowL, OUTPUT);

  pinMode(EnableR, OUTPUT);
  pinMode(HighR, OUTPUT);
  pinMode(LowR, OUTPUT);

  pinMode(D0, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(D3, INPUT_PULLUP);
}

// Function to read binary data from digital pins
void Data() {
  a = digitalRead(D0);
  b = digitalRead(D1);
  c = digitalRead(D2);
  d = digitalRead(D3);

  // Convert binary data to decimal
  data = 8 * d + 4 * c + 2 * b + a;
}

// Function to move the robot forward
void Forward() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 255);
}

// Function to move the robot backward
void Backward() {
  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 225);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 225);
}

// Function to stop the robot
void Stop() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 0);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 0);
}

// Function to turn left
void Left1() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 115);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 255);
}

// Function to turn left
void Left2() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 75);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 255);
}

// Function to turn left
void Left3() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 75);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 255);
}

// Function to turn right
void Right1() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 115);
}

// Function to turn right
void Right2() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 75);
}

// Function to turn right
void Right3() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 55);
}

// Function for U-turn
void UTurn() {
  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0);
  delay(400);

  analogWrite(EnableL, 235);
  analogWrite(EnableR, 235); // forward
  delay(1000);

  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0);
  delay(400);

  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  digitalWrite(HighR, LOW); // left
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 235);
  analogWrite(EnableR, 235);
  delay(1100);

  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0);
  delay(400);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, LOW); // forward
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 235);
  analogWrite(EnableR, 235);
  delay(800);

  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0);
  delay(400);

  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  digitalWrite(HighR, LOW); // left
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 235);
  analogWrite(EnableR, 235);
  delay(1200);

  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0);
  delay(1000);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 180);
  analogWrite(EnableR, 180);
  delay(300);
}

// Function to handle object detection
void Object() {
  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0); // stop
  delay(1000);

  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH); // left
  analogWrite(EnableL, 250);
  analogWrite(EnableR, 250);
  delay(500);

  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0); // stop
  delay(200);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH); // forward
  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 255);
  analogWrite(EnableR, 255);
  delay(1000);

  analogWrite(EnableL, 0); // stop
  analogWrite(EnableR, 0);
  delay(200);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, HIGH); // right
  digitalWrite(LowR, LOW);
  analogWrite(EnableL, 255);
  analogWrite(EnableR, 255);
  delay(500);

  analogWrite(EnableL, 0); // stop
  analogWrite(EnableR, 0);
  delay(1000);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, LOW); // forward
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 150);
  analogWrite(EnableR, 150);
  delay(1000);

  i = i + 1;
}

// Function to perform lane change
void Lane_Change() {
  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0); // stop
  delay(1000);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW); // right
  analogWrite(EnableL, 250);
  analogWrite(EnableR, 250);
  delay(500);

  analogWrite(EnableL, 0);
  analogWrite(EnableR, 0); // stop
  delay(200);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH); // forward
  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 255);
  analogWrite(EnableR, 255);
  delay(900);

  analogWrite(EnableL, 0); // stop
  analogWrite(EnableR, 0);
  delay(200);

  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  digitalWrite(HighR, LOW); // left
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 255);
  analogWrite(EnableR, 255);
  delay(500);

  analogWrite(EnableL, 0); // stop
  analogWrite(EnableR, 0);
  delay(1000);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, LOW); // forward
  digitalWrite(LowR, HIGH);
  analogWrite(EnableL, 150);
  analogWrite(EnableR, 150);
  delay(500);
}

void loop() {
  if (j > 25000) {
    Lane_Change();
    i = 0;
    j = 0;
  }

  Data();
  if (data == 0) {
    Forward();
    if (i > 0) {
      j = j + 1;
    }
  } else if (data == 1) {
    Right1();
    if (i > 0) {
      j = j + 1;
    }
  } else if (data == 2) {
    Right2();
    if (i > 0) {
      j = j + 1;
    }
  } else if (data == 3) {
    Right3();
    if (i > 0) {
      j = j + 1;
    }
  } else if (data == 4) {
    Left1();
    if (i > 0) {
      j = j + 1;
    }
  } else if (data == 5) {
    Left2();
    if (i > 0) {
      j = j + 1;
    }
  } else if (data == 6) {
    Left3();
    if (i > 0) {
      j = j + 1;
    }
  } else if (data == 7) {
    UTurn();
  } else if (data == 8) {
    analogWrite(EnableL, 0);
    analogWrite(EnableR, 0);
    delay(6000);

    analogWrite(EnableL, 150);
    analogWrite(EnableR, 150);
    delay(1000);
  } else if (data == 9) {
    Object();
  } else if (data == 10) {
    analogWrite(EnableL, 0);
    analogWrite(EnableR, 0);
  } else if (data > 10) {
    Stop();
  }
}
