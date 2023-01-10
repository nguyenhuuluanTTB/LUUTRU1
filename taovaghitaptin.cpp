#include<stdio.h>
int main()
{
	FILE *fp;
	char a[50];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(a);
	fp=fopen(a,"wt");
	if(fp==NULL)
	  printf("Loi mo file!");
	else 
	   {
	   	  fprintf(fp,"Nguyen Huu Luan dep trai");
	   	  fclose(fp);
	   }
}
