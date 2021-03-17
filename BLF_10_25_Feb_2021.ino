#include"Pins.h"



void setup()
{

  Serial.begin(9600);
   pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    stop();
    delay(3000);
    

}

void loop() 
{
  //forward(slow,slow);
   pid();
//    Serial.println(millis()); //prints time since program started
//  delay(1000);          // wait a second so as not to send massive amounts of data
//   stop();
//   delay(5000);
  
  //sensor_reading();
//  maze();
//if(s[4]==1)       //for detecting left
//{
//check_left();
//}
  /*
  follow_line();



if((s[0]==1))                // for detecting right
{
  check_right();
}
if(s[0]==0 && s[1]==0 && s[2]==0 && s[3]==0 && s[4]==0)               // for dead end
{
  check_U_turn();
}
if(s[0]==1 && s[1]==1 && s[2]==1 && s[3]==1 && s[4]==1)               // for T point
{
  delay(10);
  check_T();
}

if(s[0]==1 && s[1]==1 && s[2]==0 && s[3]==1 && s[4]==1)
{
  check_left();
}
//if((s[0]==1 && s[1]==0 && s[2]==0 && s[3]==0 && s[4]==1)
//{
  //forward(slow,slow);
//}

else{
  sensor_reading();

follow_line();
}
 */
}
