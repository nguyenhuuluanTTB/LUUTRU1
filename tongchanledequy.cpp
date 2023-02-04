#include<stdio.h>
int chan(int n);
int le(int n);
int main()
{
	int n;
	printf("Nhap so bat ki: ");
	scanf("%d",&n);
	chan(n);
	return 0;
}
int le(int n)
{
	if(n%2==0)
	  { chan(n); }
	else 
	    { 
		    printf("\nSo %d la so le !",n); 
	    }
}
int chan(int n)
{
	if(n % 2 != 0)
	  { le(n); } 
	else 
	    { 
		     printf("\nSo %d la so chan !",n);
	    }
}

