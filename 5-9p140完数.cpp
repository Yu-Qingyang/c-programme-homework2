#include <stdio.h>
#define ranMax 999999
int Ram[ranMax],ram_pin=0;
int saveFactor(int saveFactor_1)
{
	Ram[ram_pin]=saveFactor_1;
	ram_pin++;
	//printf("saveFactor:%d\n",saveFactor_1);
}
void deleteRam()
{
	for(int i=1;i<=ranMax;i++)Ram[i]=0;
	ram_pin=0; 
}
void calculateFactor(int calculateFactor_1)
{
	for(int i=1;i<calculateFactor_1;i++)if(calculateFactor_1%i==0)saveFactor(i);
}
void display(int display_1)
{
	printf("\n%d its factors are ",display_1);
	for(int m=0;m<ram_pin;m++)printf(",%d"+!m,Ram[m]);
}
int main()				
{
	for(int i=5;i<=1000;i++)
	{
		printf("\ncalculating %d",i);
		deleteRam();
		calculateFactor(i);
		int sum=0;
		for(int p=0;p<ram_pin;p++)sum+=Ram[p];
		if(sum==i)display(i);
	}
	//for(int i=0;i<ram_pin;i++)printf("%d  ",Ram[i]);				//show RAM
	return 0;
}
