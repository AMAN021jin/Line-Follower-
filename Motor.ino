void forward(int right, int left)
{
  
  digitalWrite(RM1, HIGH);
  digitalWrite(RM2, LOW);           // Moving Straight
  digitalWrite(LM1, HIGH);
  digitalWrite(LM2, LOW);
  analogWrite(EN1, right);
  analogWrite(EN2, left);
}

void stop()
{
  digitalWrite(RM1, LOW);
  digitalWrite(RM2, LOW);           // stopping the bot
  digitalWrite(LM1, LOW);
  digitalWrite(LM2, LOW);
  analogWrite(EN1, 0);
  analogWrite(EN2, 0);
}

void sharp_left(int a, int b)
{
   digitalWrite(RM1, HIGH);
  digitalWrite(RM2, LOW);           // Moving sharp left (90 degree)
  digitalWrite(LM1, LOW);
  digitalWrite(LM2, HIGH);
  analogWrite(EN1, a);
  analogWrite(EN2,b);
  
}

void sharp_right(int c, int d)
{
   digitalWrite(RM1, LOW);
  digitalWrite(RM2, HIGH);           // Moving sharp right (90 degree)
  digitalWrite(LM1, HIGH);
  digitalWrite(LM2, LOW);
  analogWrite(EN1, c);
  analogWrite(EN2, d);

}

void U_turn(int x, int y)
{
   digitalWrite(RM1, LOW);
  digitalWrite(RM2, HIGH);           // Moving U_turn (same as right turn)
  digitalWrite(LM1, HIGH);
  digitalWrite(LM2, LOW);
  analogWrite(EN1, x);
  analogWrite(EN2, y);
}


 
