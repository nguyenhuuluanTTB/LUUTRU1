#include<stdio.h>
void xuatmang(int a[3][3],int n,FILE *fp)
{
	fprintf(fp,"Gia tri cac phan tu cua mang la:\n");
	for(int i=0;i<n;i++)
       {
       	  for(int j=0;j<n;j++)
       	     {
       	     	 fprintf(fp,"%d ",a[i][j]);
       	     }
       	   fprintf(fp,"\n");
       }
}
void kiemtrandvatinhtong(int a[3][3],int n,FILE *fp)
{
	int s=0;
	for(int i=0;i<n;i++)
	   {
	   	   for(int j=0;j<n;j++)
	   	      {
	   	      	 if(a[i][j]>0)
	   	      	   {
	   	      	   	 fprintf(fp,"\na[%d][%d]= %d la phan tu lon hon 0",i,j,a[i][j]);
	   	      	   	 s=s+a[i][j];
	   	      	   }
	   	      }
	   }
	fprintf(fp,"\nTong cac phan tu duong trong mang la: %d",s);
}
int main()
{
	int n=3;
	int a[3][3]={{1,-2,-3},{4,-5,6},{7,-8,9}};
	FILE *fp;
	char k[20];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(k);
	fp=fopen(k,"wt");
	if(fp==NULL)
	   printf("Loi mo flie!");
	else
	    {
		xuatmang(a,n,fp);
	    } 
	kiemtrandvatinhtong(a,n,fp);
	fclose(fp);
	
}
