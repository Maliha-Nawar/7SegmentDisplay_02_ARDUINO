           //4
           //Name: Maliha Nawar; ID: 17.01.05.131
void setup() {
DDRD=0b11111100;//initializing (2-7) pins as output
DDRB=0b00011111;//initializing (8-12) pins as output
}
void loop() {

PORTB=0b00000101;PORTD=0b00001100;delay(2000);//to show "1" in the 1st ssd & turning off other 2
PORTB=0b00001101;PORTD=0b10110100;delay(2000);//to show "3" in the 2nd ssd & turning off other 2
PORTB=0b00000101;PORTD=0b00011000;delay(2000);//to show "1" in the 3rd ssd & turning off other 2
//delay 2000ms is to show digits at 2s intervals
}
