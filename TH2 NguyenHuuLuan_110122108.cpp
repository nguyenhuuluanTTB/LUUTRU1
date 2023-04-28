#include<stdio.h>
void Input(int a[], int n);
void Output(int a[], int n);
void Selection_sort(int a[], int n);
void Swap(int *x, int *y);
void Insert_sort(int a[], int n);
void Bubble_sort(int a[], int n);
void Interchange_sort(int a[], int n);
void Heap_sort(int a[], int n);
void Heapify(int a[], int n, int i);
void Quick_sort(int a[], int l, int r);
void Merge_sort(int a[],int l, int r);
void Merge(int a[], int l, int m, int r);
int main()
{
	int n, a[100];
	printf("\nNhap so phan tu cua mang ");
	scanf("%d",&n);
	Input(a,n);
	printf("\nGia tri cac phan tu cua mang vua nhap la: ");
	Output(a,n);
	Selection_sort(a,n);
	printf("\nGia tri cac phan tu cua mang sau khi sap xep(Seclection sort): ");
	Output(a,n);
	Insert_sort(a,n);
	printf("\nGia tri cac phan tu cua mang sau khi sap xep(Insert sort): ");
	Output(a,n);
	Bubble_sort(a,n);
	printf("\nGia tri cac phan tu cua mang sau khi sap xep(Bubble sort): ");
	Output(a,n);
	Interchange_sort(a,n);
	printf("\nGia tri cac phan tu cua mang sau khi sap xep(Interchange sort): ");
	Output(a,n);
	Heap_sort(a,n);
	printf("\nGia tri cac phan tu cua mang sau khi sap xep(Heap sort): ");
	Output(a,n);
	Quick_sort(a,0,n-1);
	printf("\nGia tri cac phan tu cua mang sau khi sap xep(Quick sort): ");
	Output(a,n);
	Merge_sort(a,0,n-1);
	printf("\nGia tri cac phan tu cua mang sau khi sap xep(Merge sort): ");
	Output(a,n);
}
void Input(int a[], int n)
{
	for(int i=0 ; i<n ; i++){
		printf("\nNhap a[%d]= ",i);
		scanf("%d",&a[i]);
		}
}
void Output(int a[], int n)
{
	for(int i=0 ; i<n ; i++)
	   {
	   	   printf(" %d ",a[i]);
	   }
}
void Swap(int *x, int *y)
{
    int temp = *x;
        *x   = *y;
        *y   = temp;
}
void Selection_sort(int a[], int n)
{
	for(int i=0 ; i<n-1 ; i++)
	   {
	   	    int min = i;
	   	    for(int j=i+1 ; j<n ; j++)
	   	       {
	   	       	  if(a[min] > a[j])
	   	       	    min = j;
			   }
			Swap(&a[i],&a[min]);
	   }
}
void Insert_sort(int a[], int n)
{
	for(int i=1 ; i<n ; i++)
	   {
           int x = a[i];
		   int pos = i-1;
		   while((pos>=0) && (a[pos] > x))
		        {
		        	 a[pos+1] = a[pos];
		        	 pos --;
				}
		   a[pos+1] = x;	   
	   }
	
}
void Bubble_sort(int a[], int n)
{
	 for(int i=0 ; i<n ; i++)
	    {
	    	for(int j=n-1 ; j>i ; j--)
	    	   {
	    	   	    if(a[j] < a[j-1])
	    	   	      Swap(&a[j],&a[j-1]);
			   }
	    }	
}
void Interchange_sort(int a[], int n)
{
	for(int i=0 ; i<n-1 ; i++)
	   {
	   	   for(int j= i+1; j<n ; j++)
	   	      {
	   	      	 if(a[i] > a[j])
				   Swap(&a[i],&a[j]); 
		      }
	   }
}
void Heapify(int a[], int n, int i)
{
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	
	if((left<n) && (a[largest] < a[left]))
	  largest = left;
	if((right<n) && (a[largest] < a[right]))
	  largest = right;
	if(largest != i)
	  {
	  	 Swap(&a[i],&a[largest]);
	  	 Heapify(a,n,largest);
	  }
}
void Heap_sort(int a[], int n)
{
	for(int i=n/2-1 ; i>= 0 ; i-- )
	   {
	   	    Heapify(a,n,i); 
	   }
	for(int i=n-1 ; i>=0 ; i--)
	   {
	   	    Swap(&a[i],&a[0]);
	   	    Heapify(a,i,0);
	   }
}
void Quick_sort(int a[], int l, int r)
{
	if(l>r)
	  return;
	int i = l;
	int j = r;
	int key=(l+r)/2;
	do{
		while(a[i] < a[key])
		     i++;
	    while(a[j] > a[key])
	         j--;
	    if(i<=j)
	      {
	      	Swap(&a[i],&a[j]);
	      	i++;
	      	j--;
		  }
	}while(i<j);
   
    Quick_sort(a,l,j);
    Quick_sort(a,i,r);
}
void Merge(int a[], int l, int m, int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int L[n1], R[n2];
	for(int i=0 ; i<n1 ; i++)
	   {
	   	   L[i]=a[l+i];
	   }
	for(int j=0; j<n2 ; j++)
	   {
	   	    R[j]=a[m+1+j];
	   }
	int i=0;
	int j=0;
	int k=l;
	while((i<n1) && (j<n2))
	     {
	     	if(L[i] <= R[j])
	     	  {
			    a[k] = L[i];
			    i++;
			   }
	     	 
	     	else 
	     	   {
	     	   	a[k] = R[j];
	     	   	j++;
				}
			k++;
		 }
	while(i<n1)
	     {
	     	a[k] = L[i];
	     	i++;
	     	k++;
		 }
	while(j<n2)
	     {
	     	a[k] = R[j];
	     	j++;
	     	k++;
		 }
	
}
void Merge_sort(int a[],int l, int r)
{
	if(l<r)
	  {
	  	int m = (l+r)/2;
	Merge_sort(a,l,m);
	Merge_sort(a,m+1,r);
	
	Merge(a,l,m,r);
	  }
}
