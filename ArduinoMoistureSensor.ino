const int moisture_sensor_pin = A0;

void setup(){
    pinMode(moisture_sensor_pin, INPUT);
    Serial.begin(9600);
}

void loop(){
    
    int moisture = analogRead(moisture_sensor_pin);

    Serial.println(moisture);
    delay(1000);
}