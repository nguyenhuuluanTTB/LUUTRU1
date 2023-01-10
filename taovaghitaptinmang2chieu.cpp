#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m=3;
	FILE *fp;
	char k[50];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(k);
	fp=fopen(k,"wt");
	if(fp==NULL)
	  printf("Loi mo file!");
	else 
	   {
	   	   fprintf(fp,"so dong va so cot cua mang la: ");
	   	   fprintf(fp,"%d\n",m);
	   	   for(int i=0;i<m;i++)
	   	      {
	   	      	 for(int j=0;j<m;j++)
	   	      	    {
	   	      	    	
	   	      	    	fprintf(fp,"%d",a[i][j]);
	   	      	    }
	   	      	fprintf(fp,"\n");
	   	      }
	   	  fclose(fp);
	   }
}
