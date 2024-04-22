#include<reg51.h>

void main()
{
	while(1)
	{
		unsigned int i;
		P2=0x05;    // 2motors clockwise
		for(i=0;i<40000;i++);
		
			P2=0x00;    // 2motors stop
		for(i=0;i<40000;i++);
		
		
			P2=0x09;    // 2motors anticlockwise
		for(i=0;i<40000;i++);
		
		
			P2=0x00;    // 2motors stop
		for(i=0;i<40000;i++);
		
			P2=0x06;    // 1 anti 1 motors clockwise
		for(i=0;i<40000;i++);
		
		
			P2=0x00;    // 2motors stop
		for(i=0;i<40000;i++);
	}
		
	}