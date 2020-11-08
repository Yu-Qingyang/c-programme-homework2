#include <stdio.h>
#include <math.h>
float x,y;
int main()				
{
	printf("please enter the x site: \n");
	scanf("%f",&x);
	printf("please enter the y site: \n");
	scanf("%f",&y);
	x=fabs(x);
	y=fabs(y);
	if((x-2)*(x-2)+(y-2)*(y-2)<=1)printf("height 10");
	else printf("height 0");
	return 0;
}
