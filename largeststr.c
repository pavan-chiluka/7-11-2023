#include<stdio.h>
#include<string.h>
#define MAX 50
void largest(char *str);
void smallest(char *str);
int main()
{
	char str[MAX];
	printf("enter a string");
	scanf("%[^\n]s",str);
	largest(str);
	printf("\n");
        smallest(str);
}
void largest(char *str)
{
	int i,j,max=0,min=0,index,count=0,len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=' ')
		{
		 ++count;
		}
		else
		{
			if(count>=max)
			{
				max=count;
				index=i-max;
			}
			count=0;
		}
	}
	if(count>max)
	{
        max=count;
	index=len-max;
	}
	for(i=index;i<=index+max;i++)
	{
		printf("%c",str[i]);
	}
	printf(" the largest string count: %d ",max);
}
void smallest(char *str)
{
 int i,j,count=0,min=0,index,value=0,len1=strlen(str);
        for(i=0;i<len1;i++)
        {
                if(str[i]!=' ')
                {
                 ++count;
                }
                else
                {
                        if((count<min)||(min==0))
                        {
                                min=count;
                                index=i-min;
                        }

                        count=0;
                }
        }
        if((count<min)||(min==0))
	{
        min=count;
        index=len1-min;
        }
        for(i=index;i<=index+min;i++)
        {
                printf("%c",str[i]);
        }
        printf(" the smallest string count: %d ",min);
}
	

