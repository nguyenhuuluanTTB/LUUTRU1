#include<stdio.h>
int timfibo(int n);
int main()
{
	int i,k;
	printf("\nBan muon tim bao nhieu so fibonacci ?: ");
	scanf("%d",&k);
	printf("5 so fibonacci dau tien la:");
	for(int i=0;i<k;i++)
	   {
	   	   printf(" %d ",timfibo(i));
	   }
	return 0;
}
int timfibo(int n)
{
	if(n<0)
	  {return -1;}
	else if(n==0 || n==1)
	        {return n;}
	     else 
	          {return timfibo(n-1) + timfibo(n-2);}
}
