/**************************************************************/
/***************************Macros*****************************/
/**************************************************************/
#include "type.h"
#include "UserR.h"
#define User1 1
#define User2 2
#define User3 3
#define User4 4
#define IntiPts 5

/**************************************************************/
/********************* Global Variable ************************/
/**************************************************************/
u8 User1_pts;
u8 User2_pts;
u8 User3_pts;
u8 User4_pts;

void Initialize(void){

	User1_pts=InitPts;
	User2_pts=InitPts;
	User3_pts=InitPts;
	User4_pts=InitPts;

	return;
}

void Inc(u8 Index){

	switch (Index){
	case User1: User1_pts++;
	break;
	case User2: User2_pts++;
	break;
	case User3: User3_pts++;
	break;
	case User4: User4_pts++;
	break;
	}
	return;
}

u8 Dec(u8 Index){

	u8 flag=1;

	switch (Index){
	case User1: User1_pts--;
	break;
	case User2: User2_pts--;
	break;
	case User3: User3_pts--;
	break;
	case User4: User4_pts--;
	break;
	}

   if (User1_pts==0 || User2_pts==0 || User3_pts==0 || User4_pts==0)
   {
	   flag=0 ;
   }

   return flag;
}


u8 Get_winner(){
	u8 Index;

	if (User1_pts>User2_pts && User1_pts>User3_pts && User1_pts>User4_pts)
	{
		Index=User1;
	}
	else if(User2_pts>User3_pts && User2_pts>User4_pts)
	{
	    Index=User2;
	}
	else if(User3_pts>User4_pts)
	{
		Index=User3;
	}
	else
	{
		Index=User4;
	}

return (Index);
}

u8 Get_loser(){
	u8 Index=0;

	if (User1_pts==0)
	{
		Index=User1;
	}
	else if(User2_pts==0)
	{
	    Index=User2;
	}
	else if(User3_pts==0)
	{
		Index=User3;
	}
	else if (User4_pts==0)
	{
		Index=User4;
	}

return (Index);
}





