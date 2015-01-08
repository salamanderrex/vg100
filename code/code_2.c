	#include <JIrobot++.h>

int main(void)				//Main Function
	{
		mstick[0]=0;	//a difference of 500ms is set up between mstick 0,1 and 1,2
		mstick[1]=500;
		mstick[2]=1000;
		while(1)
			{
				print(0,0,mstick[0]);  //from LCD we can find that mstick counts automatically as the time being
				print(6,0,mstick[1]);	
				print(12,0,mstick[2]);
				waitms(200);
				cls();
				if (button())
				{
				mstick[0]=0;
				mstick[1]=0;
				mstick[2]=0;  //reset all mstick if button is pressed
				}
			}
	}


