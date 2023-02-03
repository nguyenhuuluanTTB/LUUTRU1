#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,m,n;
	FILE *fp;
	char link[50];
	a=(int*)malloc(sizeof(int));
    printf("\Nhap link: ");
	gets(link);
	if((fp=fopen(link,"w"))==NULL)
	   {
	   	   printf("\nLoi mo file");
	   	   exit(1);
	   }
	else
	    {
	    	printf("\nNhap so dong so cot cua mang: ");
	        scanf("%d %d",&m,&n);
	    	for(int i=0;i<m;i++)
	           {
	   	         for(int j=0;j<n;j++)
	   	            {
	   	      	      printf("\nNhap a[%d][%d]: ",i,j);
	   	      	      scanf("%d",a+i*n+j);
			        }
	    }
	   fprintf(fp,"\nGia tri cac phan tu cua mang la: ");
	        for(int i=0;i<n;i++)
	   {
	   	    for(int j=0;j<m;j++)
	   	       {
	   	       	  fprintf(fp,"%d",*(a+i*n+j));
			   }
		    fprintf(fp,"\n");
	   }
		}
	
	return 0;
}
