#define LED_BUILTIN 2 //The built-in LED in the ESP32 is in PIN 2

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);    //Define built-in LED pin as output
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);    //Turn on Built-in LED
    delay(1000);                        //Wait 1 second
    digitalWrite(LED_BUILTIN, LOW);     //Turn off Built-in LED
    delay(1000);                        //Wait 1 second
}