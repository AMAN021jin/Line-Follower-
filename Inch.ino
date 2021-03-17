void inch(int pass)                  //for moving 1 inch bot forward at any turn or intersection
{
  
  forward(70,70);
delay(pass);//previous val 30
  stop();

  sensor_reading();

  
}
