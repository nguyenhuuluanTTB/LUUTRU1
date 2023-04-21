#include<stdio.h>
void Input(int a[], int n);
void Output(int a[], int n);
int Timkiemtuantu(int a[], int n, int x);
void Sort(int a[], int n);
int Timkiemnhiphan(int a[], int n, int x);
int search(int a[], int n, int x);
int main()
{
	int n,x,a[50];
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&n);
	Input(a,n);
	printf("\nGia tri cac phan tu cua mang vua nhap la: ");
	Output(a,n);
	printf("\nNhap phan tu can tim(tim kiem tuan tu): ");
	scanf("%d",&x);
	//Tim kiem Tuan tu:
/*	if(Timkiemtuantu(a,n,x)== -1)
	  printf("\nKhong tim thay x=%d trong mang!",x);
	else 
	  printf("\nTim thay phan tu x=%d tai vi tri a[%d](tim kiem tuan tu)",x,Timkiemtuantu(a,n,x));
	//Tim kiem Nhi phan:
	Sort(a,n);
	if(Timkiemnhiphan(a,n,x) == -1)
	  printf("\nKhong tim thay phan tu x=%d trong mang!",x);
	else 
	  printf("\nTim thay phan tu x=%d tai vi tri a[%d](tim kiem nhi phan)",x,Timkiemnhiphan(a,n,x));*/
	  //Tim kiem cach khac:
	
	printf("\nKet qua tim kiem: ");
	if(search(a,n,x)==-1)
	  printf("\nKhong tim thay x!");
	else 
	  
	return 0;
}
void Input(int a[], int n)
{
	for(int i=0 ; i<n ; i++)
	   {
	   	   printf("\nNhap a[%d]= ",i);
	   	   scanf("%d",&a[i]);
	   }
}
void Output(int a[], int n)
{
	for(int i=0; i<n ; i++)
	   {
	   	   printf(" %d ",a[i]);
	   }
}
int Timkiemtuantu(int a[], int n, int x)
{
	int i=0;
	a[n]=x;
	while(a[i]!=x)
	     i++;
    if(i==n)
      return -1;
    else 
      return i;
}
void Sort(int a[], int n)
{
	for(int i=0 ; i<n-1 ; i++)
	   {
	   	  for(int j= n-1 ; j>i ;j--)
	   	     {
	   	     	if(a[j] < a[j-1])
	   	     	  {
	   	     	  	  int tam = a[j];
	   	     	  	     a[j] = a[j-1];
	   	     	  	    a[j-1]= tam; 
	   	     	  }
			 }
	   }
	printf("\nGia tri cac phan tu cua mang sau khi sap xep la: ");
	Output(a,n);
}
int Timkiemnhiphan(int a[], int n, int x)
{
	int left=0, right = n-1, mid;
	do
	  {
	  	mid=(left+right)/2;
	  	if(a[mid] == x)
	  	  return mid;
	  	else 
	  	    {
	  	    	if(x < a[mid])
	  	    	  right = mid - 1;
	  	    	else 
	  	    	  left  = mid + 1;
			}
	  }while(left <= right);
	 return -1;
}
int search(int a[], int n, int x)
{
	int dem=0;
	for(int i=0; i<n ; i++)
	   {
	   	  if(a[i]==x)
	   	    {
	   	    	printf(" a[%d] ",i);
	   	    	dem++;
			}
	   }
	if(dem==0)
	  return -1;
}
