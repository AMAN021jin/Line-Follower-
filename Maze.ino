//void maze()
//{
//  while(1)
//  {
//    sensor_reading();
////    follow_line();
//    inch();
//    
//    unsigned char found_left=0;
//    unsigned char found_straight=0;
//    unsigned char found_right=0;
//
//
//    sensor_reading();
//
//    if(s[4]==1)
//    {
//      found_left = 1;
//    }
//   
//    if(s[0]==1)
//    {
//      found_right = 1;
//    }
//     
//
//    if((s[0]==0 && s[1]==0 && s[2]==1 && s[3]==0 && s[4]==0)||(s[0]==0 && s[1]==1 && s[2]==1 && s[3]==0 && s[4]==0) || (s[0]==0 && s[1]==0 && s[2]==1 && s[3]==1 && s[4]==0))
//    {
//      found_straight = 1;
//    }
//
//    unsigned char dir = select_turn(found_left, found_straight, found_right);
//
//    turn(dir);
//
//    follow_line();
//  }
//}
