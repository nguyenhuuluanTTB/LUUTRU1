#include<stdio.h>
int tinhgiaithua(int n);
int tongnguyenduong(int m);
int main()
{
	int n,m;
	printf("\nNhap vao so n(tinh giai thua): ");
	scanf("%d",&n);
	printf("\n%di= %d",n,tinhgiaithua(n));
	printf("\nNhap vao so m(tinh tong tu 1 den m): ");
	scanf("%d",&m);
	printf("\nTong cac so tu 1 den %d la: %d",m,tongnguyenduong(m));
	return 0;
}
int tinhgiaithua(int n)
{
	if(n>0)
	  {
	  	 return n*tinhgiaithua(n-1);
	  }
	else 
	   return 1;
}
int tongnguyenduong(int m)
{
	int tong=0;
	if(m>0)
	  {
	  	   return tong= m+tongnguyenduong(m-1);
	  }
	else 
	    return 0;
}   	
