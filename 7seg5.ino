      //5
      //Name: Maliha Nawar; ID: 17.01.05.131
byte lupTable[16]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71};
void setup() {
  
DDRD=0b11111111;//initializing (0-7) pins as output
DDRB=0b00000110;//initializing 10,9 pins as output
}
void loop() {
  
int i=0;
for (int j=15;j>=0;j--)
{PORTD=lupTable[i];PORTB=0b00000010;delay(1000);//to show (0-F) in the 1st ssd & turning off the other
PORTD=lupTable[j];PORTB=0b00000100;delay(1000);//to show (F-0) in the 2nd ssd & turning off the other
i=i+1;                                         //to get (0-F)}}
