#include <stdio.h>

int headcount,numberRam=0;
struct Student										// 使用结构体数组缩短程序源码长度
{
	int number;
	char name[40];
	int math;
	int ehglish;
	int chinese;
}student[999];
void input(int inputRam)							//输入 
{
	student[inputRam].number=inputRam+1;
	printf("please input the NO.%d student name:",inputRam+1);
	scanf("%s",&student[inputRam].name);
	printf("math score:");
	scanf("%d",&student[inputRam].math);
	printf("ehglish score:");
	scanf("%d",&student[inputRam].ehglish);
	printf("chinese score:");
	scanf("%d",&student[inputRam].chinese);
}
void output(int outputRam)							//输出 
{
	printf("NO.%d    %d    %4d     %4d    %s\n",student[outputRam].number,student[outputRam].math,student[outputRam].ehglish,student[outputRam].chinese,student[outputRam].name);
}
int main()
{
	printf("welcome to YQY's student management\n");
	printf("how many student do you want to input?\n");
	scanf("%d",&headcount);
	for(int i=0;i<headcount;i++)input(i);
	printf("\n\nthe bill:\nnumber  math english chinese  name\n");
	for(int i=0;i<headcount;i++)output(i);
	return 0;
} 
