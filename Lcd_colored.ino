#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 128;
const int colorG = 128;
const int colorB = 0;
int i=0,j=0,k=0;

void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    
    
    // Print a message to the LCD.
    lcd.print("hello, world!");

    delay(1000);
}

void loop() 
{
   lcd.setRGB(i, k, j);
   i+=10;
   j+=20;
   k+=30;
   if(i>=255) i=0;
   if(j>=255) j=0;
   if(k>=255) k=0;
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print(millis()/1000);
    


    delay(100);
}
