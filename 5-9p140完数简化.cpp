#include <stdio.h>
int Ram[99],ram_pin=0;
int main()				
{
	for(int i=5;i<=1000;i++)
	{
		for(int i=1;i<=99;i++)Ram[i]=0;
		ram_pin=0; 
		for(int p=1;p<i;p++)if(i%p==0)
		{
			Ram[ram_pin]=p;
			ram_pin++;
		}
		int sum=0;
		for(int p=0;p<ram_pin;p++)sum+=Ram[p];
		if(sum==i)
		{
			printf("\n%d its factors are ",i);
			for(int m=0;m<ram_pin;m++)printf(",%d"+!m,Ram[m]);
		}
	}
	return 0;
}
