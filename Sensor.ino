int sensor_reading()
{
      s[4] = digitalRead(A0);      // extreme left sensor
   s[3] = digitalRead(A1);       // left sensor
   s[2] = digitalRead(A2);     // middle sensor
   s[1]= digitalRead(A3);     // right sensor
  s[0]= digitalRead(A4);      // Extreme right sensor

  
if(s[0]+s[1]+s[2]+s[3]+s[4] != 0)
{
pos = (4000*s[0]+3000*s[1]+2000*s[2]+1000*s[3]+0*s[4])/(s[0]+s[1]+s[2]+s[3]+s[4]);
}

else
{
  pos = 5000;             // if all sensors are on white
}
Serial.println(pos);
  return pos;

}
