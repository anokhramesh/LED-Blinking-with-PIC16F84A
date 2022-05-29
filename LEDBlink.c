//Blinking led with pic 16f84A
//set crystal frequency to 8 Mhz
//Connect led to pin #6 of PIC16F84A
void main() {
   TRISB = 0;//set port B as an Output
   while(1)   //infinite Loop
{
   PORTB = 1; // port B HIGH to turn Led ON
   delay_ms(1000);// delay 1 second
   PORTB = 0; //port B LOW to turn Led OFF
   delay_ms(1000);//delay 1 second
}
}