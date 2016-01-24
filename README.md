# binarydig.c
#include <stdio.h>
int main() 
{
		int decinm=8023,quot,i=0,binnum[100],count;
		quot=decinm;
		while(quot!=0)
		{
				binnum[i++]=quot%2;
				quot=quot/2;
		}
		count=i;
		printf("the number of bits= %d",count);
		return 0;
}
