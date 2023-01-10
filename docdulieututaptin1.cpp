#include<stdio.h>
#define MAX 255
int main()
{
	FILE *fp;
	char a[50],ketqua[MAX+1];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(a);
	fp=fopen(a,"rt");
	if(fp==NULL)
	  printf("Loi mo file!");
	else 
	  {
	  	while(feof(fp)==0)
	  	  {
	  	  	 if(fgets(ketqua,MAX,fp)!=NULL)
	  	  	   printf("%s",ketqua);
	  	  }
	  	  fclose(fp);
      }
}
