#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char duongdan[50],ch[50];
	printf("\nNhap link: ");
	gets(duongdan);
	if((fp=fopen(duongdan,"w"))==NULL)  // w de mo va ghi 
	  {
	  	  printf("\nKhong ton tai duong dan vua nhap!");
	  	  exit(1);  // thoat vong lap voi loi
	  }
	else    
	    {
	    	char x[50];
	    	printf("Nhap vao file: ");
	    	gets(x);
	    	fprintf(fp,"%s",x);
		}
	fclose(fp);
	return 0;
}
