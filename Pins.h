#define RM1 12
#define RM2 8
#define LM1 10
#define LM2 9

#define EN1 5
#define EN2 6

#define led 11

int motorspeed;

int error = 0;
int last_error = 0;
int Max = 60;
int medium = 65;
int slow = 55;
int s[5] = {0,0,0,0,0};
int pos , Position;
int set_point = 2000;

int rs, ls, right, left;

float Kp = 0.040 , Ki = 0 , Kd =1 ;

int I_error = 0;
int D_error = 0;
