#include<stdio.h>
#include<stdlib.h>
#define Max 255
int main()
{
	FILE *fp;
	char duongdan[50];
	printf("Nhap link: ");
	gets(duongdan);
	if((fp=fopen(duongdan,"r"))==NULL)
	  {
	  	printf("\nKhong ton tai duong dan vua nhap");
	    exit(1);
	  }
	else 
	    {
	    	char x[50];
	    	printf("\nNoi dung file vua nhap: ");
	    	while(feof(fp)==0)
	    	     {
	    	     	if(fgets(x,Max,fp)!=NULL)
	    	     	  {
	    	     	  	   printf("%s",x);
					  }
				 }
		}
	fclose(fp);
	return 0;
}
