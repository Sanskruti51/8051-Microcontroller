#include<reg51.h>
sbit led=P1^0;
sbit sw=P3^0;
void main(){
	led=1;
	while(1)
	{
		if(sw==0)
		{
			led=0;
		}
	}
}
