#include <stdio.h>
void YQY_strcat(char *dest,char *src)			//将 dest和 src链接并存储在 dest内 
{
	#define MAX 999
	int strcat_1,strcat_2;						//偏移量 
	for(strcat_1=0;strcat_1<MAX;strcat_1++)
	{
		if(*(dest+strcat_1)=='\0')
		{
			break;		//判断空 
		}
	}
	for(strcat_2=0;strcat_1<MAX;strcat_1++,strcat_2++)
	{
		if(*(src+strcat_2)=='\0')break;
		*(dest+strcat_1)=*(src+strcat_2);		//字符复制 
	}
	#undef MAX
}
void YQY_strncpy(char *dest,char *src,int x)	//将 dest的结尾x个字符用 src的前 x个字符替换并保存在 dest内 
{
	#define MAX 999
	int strncpy_1,strncpy_2;
	for(strncpy_1=0;strncpy_1<MAX;strncpy_1++)
	{
		if(*(dest+strncpy_1)=='\0')
		{
			break;		//判断空
		}
	}
	if(strncpy_1<x)
	{
		x=strncpy_1;
	}
	for(strncpy_2=0;strncpy_1<MAX&&strncpy_2<x;strncpy_1++,strncpy_2++)
	{
		if(*(src+strncpy_2)=='\0')break;
		*(dest+strncpy_1-x)=*(src+strncpy_2);
	}
	#undef MAX
}
int YQY_strlen(char *dest)						//返回dest的长度（整形） 
{
	int x;
	for(x=0;*(dest+x)!='\0';x++);
	return x;
}
int YQY_strlwr(char *dest)						//将 dest的小写字母转换成大写字母 
{
	#define MAX 999
	int strlwr_1;
	for(strlwr_1=0;strlwr_1<MAX;strlwr_1++)
	{
		if(*(dest+strlwr_1)>='a'&&*(dest+strlwr_1)<='z')
		{
			*(dest+strlwr_1)-=32;
		}
		if(*(dest+strlwr_1)=='\0')break;
	}
	#undef MAX
}
int main()
{
	char c1[999]={"Yu qing yang"};
	char c2[999]={" is666?"};
	//YQY_strcat(c1,c2);
	//YQY_strncpy(c1,c2,5);
	YQY_strlwr(c1);
	YQY_strlen(c1);
	printf("%s\n",c1);
	printf("the length is %d",YQY_strlen(c1));
	return 0;
}
