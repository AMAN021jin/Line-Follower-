//void check_left()                                       // for moving left
//{
// 
// 
////    inch();
////    sensor_reading();     
//    do
//    {
//    sharp_left(slow,slow);
//    sensor_reading();
//    }while(!digitalRead(A2));
//    stop();
//  }
//
//
//void check_right()                            // for moving right
//{
//  inch();
//  sensor_reading();
//
//  while((((sensor_reading())>2000)&&((sensor_reading())<=4000))||((sensor_reading())==5000))
//  {
//    sharp_right(slow,slow);
//    sensor_reading();
//  }
//  stop();
//}
//
//void check_U_turn()               
//{
//  inch();
//  sensor_reading();
//  while((sensor_reading())==5000)
//  {
//    U_turn(slow,slow);
//  }
//  stop();
//}
//
//
//void check_T()                     // for detecting T point and moving left
//{
//  
//  sensor_reading();
//  while((sensor_reading())==5000)
//  {
//    sharp_left(slow,slow);
//    sensor_reading();
//  }
//}
///*
//void check_s_left()
//{
//  inch();
//  sensor_reading();
//  if((sensor_reading())!=5000)
//  {
//     while(s[4]!=1)
//    {
//    sharp_left();
//    sensor_reading();
// 
//  }
//  }
// 
//}
//*/
