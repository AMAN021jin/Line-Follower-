void align()
{
  unsigned long timeRecord = millis();
  while((millis()-timeRecord) < 8)
  {
   Position=sensor_reading();
//Serial.println(Position);
 error = Position-set_point;

 D_error = error-last_error;
 I_error = I_error+error;
//Serial.print(error);
//Serial.print(' ');
 last_error = error;

 motorspeed = (Kp*error + Ki*I_error + Kd*D_error);
//Serial.println(motorspeed);
 if(motorspeed<-255)
{
  motorspeed=-255;
}

if(motorspeed>255)
{
  motorspeed=255;
}
if(motorspeed<0)
{
  rs = slow+motorspeed;

  ls = slow;
}
if(motorspeed>0)
{
  ls = slow-motorspeed;
  rs = slow;
}
if(motorspeed==0)
{
  rs = slow;
  ls = slow;
}
  //Serial.print(rs);
  //Serial.print(' ');
  //Serial.println(ls);
  forward(rs,ls);
}
}
