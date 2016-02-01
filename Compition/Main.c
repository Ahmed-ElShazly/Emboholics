/**************************************************************/
/***************************Macros*****************************/
/**************************************************************/

#include <stdio.h>
#include "type.h"
#include "UserR.h"
#include "Math.h"




void main (void){

u8 time1;
u8 time2;
u8 time3;
u8 time4;
u8 Max_time_user;
u8 Min_time_user;
u8 flag=1;


Initialize();

while(flag){
printf ("Please Enter Time 1 \n");
time1 = getch();
//scanf ("%c",&time1);

printf ("Please Enter Time 2 \n");
time2 = getch();
//scanf ("%c",&time2);

printf ("Please Enter Time 3 \n");
time3 = getch();
//scanf ("%c",&time3);

printf ("Please Enter Time 4 \n");
time4 = getch();
//scanf ("%c",&time4);

Max_time_user = Get_max(time1,time2,time3,time4);

Min_time_user = Get_min(time1,time2,time3,time4);

Inc(Min_time_user);

Dec(Max_time_user);

if (Get_loser()!=0)
{
  flag=0;
 }

}

printf("the winner is %d \n", Get_winner() );

printf("the loser is %d \n", Get_loser() );


}
