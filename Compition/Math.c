/**************************************************************/
/***************************Macros*****************************/
/**************************************************************/
#include "type.h"
#include "Math.h"
#define User1 1
#define User2 2
#define User3 3
#define User4 4



u8 Get_max(u8 t1,u8 t2,u8 t3,u8 t4){

	u8 Index;

	if (t1>t2 && t1>t3 && t1>t4)
	{
		Index=User1;
	}
	else if(t2>t3 && t2>t4)
	{
	    Index=User2;
	}
	else if(t3>t4)
	{
		Index=User3;
	}
	else
	{
		Index=User4;
	}

return Index;
}

u8 Get_min(u8 t1,u8 t2,u8 t3,u8 t4){

	u8 Index;

	if (t1<t2 && t1<t3 && t1<t4)
	{
		Index=User1;
	}
	else if(t2<t3 && t2<t4)
	{
	    Index=User2;
	}
	else if(t3<t4)
	{
		Index=User3;
	}
	else
	{
		Index=User4;
	}

return (Index);
}
