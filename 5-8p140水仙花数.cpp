#include <stdio.h>
int unit,decade,hundreds;
int cube(int cube_1)											//calculate x^3
{
	return cube_1*cube_1*cube_1;
}
void extend(int extend_1)										//extend x to unit decade and hundreds
{
	unit=extend_1-extend_1/10*10;
	decade=(extend_1-extend_1/100*100-unit)/10;
	hundreds=(extend_1-extend_1/1000*1000-unit-decade*10)/100;
	//printf("%d-%d-%d",hundreds,decade,unit);					//make a tese 
}
int main()				
{
	for(int i=100;i<1000;i++)
	{
		extend(i);												//extend x to unit decade and hundreds
		if(cube(unit)+cube(decade)+cube(hundreds)==i)printf("%d is the number\n",i);
	}
	return 0;
}
