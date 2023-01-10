#define LED_PIN 8
#define BUTTON_PIN 2
int count = 1;
int prevK = 0;
int k;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  k = digitalRead(BUTTON_PIN);
//  Serial.println(k);
  
  if (prevK < k) {
    count++;
    Serial.println(count);
  }

  if (count == 3){
    count = 1;
  }
  if (count%2 == 0) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
  prevK = k;
}
