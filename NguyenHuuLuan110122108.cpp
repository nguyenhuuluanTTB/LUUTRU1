#include<stdio.h>
void Nhap(int a[], int n);
void Xuat(int a[], int n);
void Xuatnguoc(int a[], int n);
int Timkiemtuantu(int a[],int n, int x);
int Timkiemnhiphan(int a[], int n, int x);
void sort(int a[], int n);
int main()
{
	int n,x,a[50];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	Nhap(a,n);
	printf("\nGia tri cac phan tu cua mang vua nhap la: ");
	Xuat(a,n);
	printf("\nGia tri cac phan tu cua mang vua nhap la(xuat nguoc): ");
	Xuatnguoc(a,n);
	printf("\nNhap gia tri can tim :");
	scanf("%d",&x);
	//tim kiem tuan tu:
	if(Timkiemtuantu(a,n,x)== -1)
	  printf("\nKhong tim thay phan tu x=%d trong mang!",x);
	else 
	  printf("\nTim thay phan tu x=%d tai vi tri a[%d](tim kiem tuan tu)",x,Timkiemtuantu(a,n,x));
	//tim kiem nhi phan:
	sort(a,n); 
	printf("\nGia tri cac phan tu cua mang sau khi sap xep la: ");
	Xuat(a,n);
	if(Timkiemnhiphan(a,n,x)== -1)
	  printf("\nKhong tim thay phan tu x=%d trong mang!",x);
	else 
	  printf("\nTim thay phan tu x=%d tai vi tri a[%d](tim kiem nhi phan)",x,Timkiemnhiphan(a,n,x));
	return 0;
}
void Nhap(int a[], int n)
{
	for(int i=0 ; i<n ; i++)
	   {
	   	  printf("\nNhap a[%d]= ", i);
	   	  scanf("%d",&a[i]);
	   }
}
void Xuat(int a[], int n)
{
	for(int i= 0 ; i <n ; i++)
	   {
	   	  printf(" %d ", a[i]);
	   }
}
void Xuatnguoc(int a[], int n)
{
	for(int i=n-1 ; i >=0  ; i--)
	   {
	   	  printf(" %d ",a[i]);
	   }
}
void sort(int a[], int n) // selection sort 
{
	for(int i=0 ; i < n-1 ; i++)
	   {
	   	  int min=i;
	   	  for(int j=i+1 ; j<n ; j++)
	   	     {
	   	     	if(a[min] > a[j])
	   	     	  min = j;
			 }
		  int temp = a[i];
		      a[i] = a[min];
		      a[min] = temp;
	   }
}
int Timkiemtuantu(int a[],int n, int x)
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
int Timkiemnhiphan(int a[], int n, int x)
{
	int left = 0, right = n-1, mid;
	do 
	  {
	  	mid = (left+right)/2;
	  	if(a[mid] == x)
	  	  return mid;
	  	else 
	  	    {
	  	    	if(a[mid] > x)
	  	    	  right = mid - 1;
	  	    	else 
	  	    	  left = mid + 1;
			}
	  }while(left <= right);
	 return -1;  
}	
