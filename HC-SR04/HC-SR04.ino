#define Pin_Trigger 19  //Trigger pin of HC-SR04
#define Pin_Echo 18     //Echo pin of HC-SR04
#define LED 2           //Built-in LED
#define TSample 250     //Sample time 250ms

float distance;
float MeasureTime;

void setup()
{
    Serial.begin(115200); //Start communication at 9600 BaudRate
    Serial.println("Booting up..."); 
    pinMode(Pin_Trigger, OUTPUT);
    pinMode(Pin_Echo, INPUT);
}

void loop()
{
    digitalWrite(Pin_Trigger, LOW);
    delayMicroseconds(5);
    digitalWrite(Pin_Trigger, HIGH);
    delayMicroseconds(10);
    MeasureTime = pulseIn(Pin_Echo, HIGH);
    distance = 0.01715*MeasureTime;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("cm");
    delay(TSample);   
}

