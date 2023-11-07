#include<stdio.h>
#include<stdlib.h>
void zero_last(int *ptr,int r);
int main()
{
	int *ptr,r;
	printf("enter the rows");
	scanf("%d",&r);
	ptr=((int*)malloc(r*sizeof(int)));
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%d",&ptr[i]);
	}
	zero_last(ptr,r);
}
void zero_last(int *ptr,int r)
{
	int i,count=0;
	for(i=0;i<r;i++)
	{
		if(ptr[i]>0)
		{
		ptr[count++]=ptr[i];
		}
	}
       for(i=count;i<r;i++)
        {
             ptr[count++]=0;
        }
        for(i=0;i<r;i++)
        {
                printf("%d",ptr[i]);
        }

}
