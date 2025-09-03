// Pin definitions
#define TRIG_PIN 9
#define ECHO_PIN 10
#define BUZZER_PIN 8
#define IR_PIN 7
#define LED_PIN 6
#define LDR_PIN A0

long duration;
int distance;

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // ----------- Ultrasonic Sensor Reading -----------
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2; // convert to cm

  // ----------- IR Sensor Reading -----------
  int irValue = digitalRead(IR_PIN);

  // ----------- LDR Reading -----------
  int ldrValue = analogRead(LDR_PIN);

  // Debugging values on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm | IR: ");
  Serial.print(irValue);
  Serial.print(" | LDR: ");
  Serial.println(ldrValue);

  // ----------- Conditions -----------
  // Ultrasonic obstacle detection (within 30 cm)
  if (distance > 0 && distance < 30) {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
  }
  // IR obstacle detection
  else if (irValue == 0) { // IR LOW = obstacle detected
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  }

  // Optional: Use LDR for night-time LED indication
  if (ldrValue < 300) {  // darker environment
    digitalWrite(LED_PIN, HIGH);
  }

  delay(200);
}
