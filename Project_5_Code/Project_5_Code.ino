#define LED 7
#define POTENTIOMETER 4

int pVal;
int multiplied;

void setup() {
  // put your setup code here, to run once:
  pinMode(POTENTIONMETER, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    
    //Get value from potentiometer
    pVal = analogRead(POTENTIOMETER);

    //Turn LED on
    digitalWrite(LED, HIGH);

    //Make it stay on depending on the value read from potentiometer
    multiplied = 10*pVal;
    delay(multiplied);
    
    //Turn LED off
    digitalWrite(LED, LOW);
    delay(multiplied);
    
    Serial.println(pVal);
}
