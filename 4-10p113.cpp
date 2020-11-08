#include <stdio.h>
/*按要求使用if或switch编写程序 */ 
void doByIf();
void doBySwitch();
int main()
{
	doByIf();							//使用if编写 
	//doBySwitch();						//使用switch编写 
	return 0;
}
void doByIf()
{
	float I;
	printf("please input money : ");
	scanf("%f",&I);
	if(I<=100000)printf("money = %f",I*0.1);
	else if((I>100000)&&(I<=200000))printf("money = %.2f yuan",(I-100000)*0.075+10000);
	else if((I>200000)&&(I<=400000))printf("money = %.2f yuan",(I-200000)*0.050+17500);
	else if((I>400000)&&(I<=600000))printf("money = %.2f yuan",(I-400000)*0.030+38500);
	else if((I>600000)&&(I<=1000000))printf("money = %.2f yuan",(I-600000)*0.015+53500);
	else if(I>1000000)printf("money = %.2f yuan",(I-1000000)*0.010+47500);
}
void doBySwitch()
{
	float I;
	int x = 0;
	printf("please input money : ");
	scanf("%f",&I);
	x=(int)I/100000;
	//printf("%d",x);						//test 1
	switch(x)
	{
		case 0:
			printf("money = %f",I*0.1);
			break;
		case 1:
			printf("money = %.2f yuan",(I-100000)*0.075+10000);
			break;
		case 2:
		case 3:
			printf("money = %.2f yuan",(I-200000)*0.050+17500);
			break;
		case 4:
		case 5:
			printf("money = %.2f yuan",(I-400000)*0.030+38500);
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			printf("money = %.2f yuan",(I-600000)*0.015+53500);
			break;
		default:
			printf("money = %.2f yuan",(I-1000000)*0.010+47500);
			break;
	}
	
}
