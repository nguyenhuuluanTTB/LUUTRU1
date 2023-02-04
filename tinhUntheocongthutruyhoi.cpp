/*Un=n neu n<6
Un=Un-5+Un-4+....Un-1 neu n>=6*/
#include<stdio.h>
int tinhUn(int n);
int main()
{
	int n;
	printf("Nhap vao mot so n: ");
	scanf("%d",&n);
	printf("\nUn= %d",tinhUn(n));
}
int tinhUn(int n)
{
	int s=0;
	if(n<6)
	  return n;
	else 
	    {
	    	for(int i=n-1;i>=1;i--)
	    	   {
	    	   	    s= s + tinhUn(n-i);
			   }
		}
	return s;
}
