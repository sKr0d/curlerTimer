int led = 1;           // the PWM pin the LED is attached to
int brightness = 10;    // how bright the LED is
int fadeAmount = 2;    // how many points to fade the LED by

int button = 2;
int dr = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  dr = digitalRead(button);
  if (dr == LOW) {

    analogWrite(led, brightness);
    brightness = brightness + fadeAmount;

    if (brightness <= 10 || brightness >= 250) {
      fadeAmount = -fadeAmount;
    }
    delay(30);
  } else {
    analogWrite(led, 0);
  }
}
