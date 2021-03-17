void pid()
{
  while(1){
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
  rs = Max+motorspeed;

  ls = Max;
}
if(motorspeed>0)
{
  ls = Max-motorspeed;
  rs = Max;
}
if(motorspeed==0)
{
  rs = Max;
  ls = Max;
}
  //Serial.print(rs);
  //Serial.print(' ');
  //Serial.println(ls);
  forward(rs,ls);
  if(digitalRead(A0))               // only left
  {
    
    inch(30);
    do
    {
      sharp_left(slow+5,slow+5);
    }while( !digitalRead(A1) );
    //align();
    stop();
  }
  if(!digitalRead(A4) && !digitalRead(A3) && !digitalRead(A2) && !digitalRead(A1) && !digitalRead(A0))          // dead or right
  {
    
    inch(60);
//    digitalWrite(led, HIGH);
//      stop();
//      delay(2000);
//      digitalWrite(led, LOW);
    if((digitalRead(A1)==1)||(digitalRead(A2)==1)||(digitalRead(A3)==1))
    {
      
      
      break;
    }
    
    do
    {
      sharp_right(slow+5,slow+10);
    }while( !digitalRead(A3));
    //align();
    stop();
  }
//  if(s[0]==0 && s[1]==0 && s[2]==0 && s[3]==0 && s[4]==0)
//  {
//    break;
//  }
//
//  if(s[0]==1 && s[4]==1)
//  {
//    break;
//  }
}
}
