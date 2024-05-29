
// Arduino Cube

int k = 0;
int g = 0;
int l = 0;
int h = 0;
const int columnPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A4, A5};
const int rowPins[] = {A0, A1, A2, A3};

void setup() {
  // Set digital pins 0 through 13 as outputs
  for (int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }

  // Set analog pins 4 and 5 (A4 and A5) as outputs (digital pins 14 and 15)
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  // Set analog pins 0 through 3 (A0 to A3) as outputs
  for (int i = 0; i <= 3; i++) {
    pinMode(A0 + i, OUTPUT);
  }
}

void loop() {
  // Turn on digital pins 0 through 13, and analog pins 4 and 5 (A4 and A5)
 if(k <= 1){
  for (int i = 0; i <= 3; i++) {
    for (int j = 0; j <= 13; j++) {
      digitalWrite(A0 + i, HIGH);
      digitalWrite(j, HIGH);
      delay(100); // Delay to see the LED effect
      digitalWrite(j, LOW);
    }

    // Treat analog pins 4 and 5 as digital pins 14 and 15
    digitalWrite(A4, HIGH);
    delay(100);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
    delay(100);
    digitalWrite(A5, LOW);
    digitalWrite(A0 + i, LOW);
    }
  while(g <= 2){
    for (int i = 0; i <= 4; i++){
      for (int j = 0; j < sizeof(columnPins) / sizeof(columnPins[0]); j++) {
      digitalWrite(columnPins[j], HIGH);
      }
      digitalWrite(A0 + i, HIGH);
      // Delay to keep the pins high (adjust as needed)
      delay(100);
  
      // Turn off all column pins simultaneously
      for (int j = 0; j < sizeof(columnPins) / sizeof(columnPins[0]); j++) {
      digitalWrite(columnPins[j], LOW);
      }
      digitalWrite(A0 + i, LOW);
    }
    for (int i = 2; i >= 1; i--){
      for (int j = 0; j < sizeof(columnPins) / sizeof(columnPins[0]); j++) {
      digitalWrite(columnPins[j], HIGH);
      }
      digitalWrite(A0 + i, HIGH);
      // Delay to keep the pins high (adjust as needed)
      delay(100);
  
      // Turn off all column pins simultaneously
      for (int j = 0; j < sizeof(columnPins) / sizeof(columnPins[0]); j++) {
      digitalWrite(columnPins[j], LOW);
      }
      digitalWrite(A0 + i, LOW);
    }
    g++;
  }
  while(h <=2){
    for (int j = 0; j < 15; j += 4){
      for (int i = 0; i < 3; i++){
        digitalWrite(A0 + i, HIGH);
      }
      digitalWrite(columnPins[j],HIGH);
      digitalWrite(columnPins[j+1],HIGH);
      digitalWrite(columnPins[j+2],HIGH);
      digitalWrite(columnPins[j+3],HIGH);
      delay(50);
      
      for (int i = 0; i < 3; i++){
        digitalWrite(A0 + i, LOW);
      }
      digitalWrite(columnPins[j],LOW);
      digitalWrite(columnPins[j+1],LOW);
      digitalWrite(columnPins[j+2],LOW);
      digitalWrite(columnPins[j+3],LOW);
      delay(50);
    }
    for (int j = 11; j > 3; j -= 4){
      for (int i = 3; i >=0 ; i--){
        digitalWrite(A3 - i, HIGH);
      }
      digitalWrite(columnPins[j],HIGH);
      digitalWrite(columnPins[j-1],HIGH);
      digitalWrite(columnPins[j-2],HIGH);
      digitalWrite(columnPins[j-3],HIGH);
      delay(50);
      
      for (int i = 3; i > 0; i--){
        digitalWrite(A3 - i, LOW);
      }
      digitalWrite(columnPins[j],LOW);
      digitalWrite(columnPins[j-1],LOW);
      digitalWrite(columnPins[j-2],LOW);
      digitalWrite(columnPins[j-3],LOW);
      delay(50);
    }
    h++;
  }
  while(l <= 4){
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(A1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    delay(100);
    for (int i = 0; i < sizeof(rowPins) / sizeof(rowPins[i]); i++) {
      digitalWrite(rowPins[i], HIGH);
      }
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(100);
    for (int i = 0; i < sizeof(rowPins) / sizeof(rowPins[i]); i++) {
      digitalWrite(rowPins[i], LOW);
      }
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(100);
    l++;
  }
  k++;
 }
}
