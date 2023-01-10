#include<stdio.h>
#include<malloc.h>
int main()
{
	FILE *fp;
	int m,*a;
	char k[20];
	printf("Nhap duong dan: ");
	fflush(stdin);
	  gets(k);
	fp=fopen(k,"rt");
	if(fp==NULL)
	   printf("Loi mo file!");
	else 
	  {
	     fscanf(fp,"%d",&m);
	     a=(int*)malloc(sizeof(int)*m*m);
	     while(feof(fp)==0)
		      {     //hàm fscanf se doc cho den khi nao con tro den cuoi tap tin 
	     		for(int i=0;i<m*m;i++)
	        	   {
	                   fscanf(fp,"%d",a+i);
			       }
		      }
		printf("So dong so cot: %d",m);
	    printf("\nGia tri cac phan tu cua mang la:\n");
		for(int i=0;i<m;i++)
		   {
		   	   for(int j=0;j<m;j++)
		   	      {
		   	      	 printf("%d ",*(a+i*m+j));
				  }
			   printf("\n");
		   }
		fclose(fp);
	  }
}
