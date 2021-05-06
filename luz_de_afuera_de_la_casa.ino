const int threshold = 400;
const int ledPin = 13;
const int analogPin = A0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);

  delay(100);        // delay in between reads for stability
  if (sensorValue > threshold) {
    digitalWrite(ledPin, HIGH);
    delay(500);
  } else {
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}
