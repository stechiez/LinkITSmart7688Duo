void setup() {
    Serial.begin(115200); 
    Serial1.begin(57600); 
    pinMode(13, OUTPUT);
}
void loop() {
    int c = Serial1.read(); // read from MT7688
    if (c != -1) {
        switch(c) {
        case '0': 
            digitalWrite(13, 0);
            break;
        case '1': 
            digitalWrite(13, 1);
            break;
        }
    }
}
