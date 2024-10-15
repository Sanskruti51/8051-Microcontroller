#include<reg51.h>
sbit NR=P0^0;  //north
sbit NY=P0^1; 
sbit NG=P0^2;  
sbit SR=P0^3;   //south 
sbit SY=P0^4; 
sbit SG=P0^5; 
sbit ER=P0^6;    //east
sbit EY=P0^7; 
sbit EG=P1^0;    
sbit WER=P1^1;    //west 
sbit WEY=P1^2;
sbit WEG=P1^3; 
int delay(int t);
void main(){
	   NR=1; NY=1; NG=1;   //initially all off
     SR=1; SY=1; SG=1; 
     ER=1; EY=1; EG=1;     
     WER=1; WEY=1; WEG=1;
	while(1){
	   NR=1; NY=1; NG=0;       // green for north lights
     SR=1; SY=1; SG=0;       // forward green for south lights
     ER=0; EY=1; EG=1;       //Red signal for east
     WER=0; WEY=1; WEG=1;       //Red signal for west lights
	delay(10);
	   NR=1; NY=1; NG=0;       //yellow lights
     SR=1; SY=1; SG=0;       
     ER=1; EY=0; EG=1;      
     WER=1; WEY=0; WEG=1; 
	delay(10);
	   NR=0; NY=1; NG=1;       //north and south red lights
     SR=0; SY=1; SG=1;        
     ER=1; EY=1; EG=0;  
     WER=1; WEY=1; WEG=0; 
	delay(10);
	   NR=1; NY=0; NG=1;   //yellow lights for North and south
     SR=1; SY=0; SG=1; 
     ER=1; EY=1; EG=0;     
     WER=1; WEY=1; WEG=0;
	delay(10);
	}
}
int delay(int t){
	int i,j;
	for(i=0;i<t*10;i++)
	{
		for(j=0;j<75;j++);
	}
}
