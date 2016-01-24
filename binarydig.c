# binarydig.c
#include <stdio.h>
int main() 
{
		int decinm,num,i=0,binnum[100],count;
		printf("Enter the decimal number\n");
		scanf("%d",&decinm);
		num=decinm;
		while(quot!=0)
		{
				binnum[i++]=num%2;
				num=num/2;
		}
		count=i;
		printf("the number of bits= %d",count);
		return 0;
}
