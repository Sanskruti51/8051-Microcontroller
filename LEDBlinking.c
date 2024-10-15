#include<reg51.h>
void delay(int t);
sbit led=P1^0;
void main()
{
	led=1;
	while(1)
	{
		led=0;
		delay(5);
		led=1;
		delay(5);
	}
}
	void delay(int t){
		int i, j;
		for(i=0; i<t*10; i++)
		{
			for(j=0;j<=75;j++);
		}
	}
	