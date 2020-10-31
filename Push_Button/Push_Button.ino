#define Button 12
#define LED 2

void setup()
{
    pinMode(Button, INPUT_PULLUP);
    pinMode(LED, OUTPUT);
}

void loop()
{
    if(digitalRead(Button) == HIGH){
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
}