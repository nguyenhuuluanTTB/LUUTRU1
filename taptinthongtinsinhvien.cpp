#include<stdio.h>
#include<malloc.h>
struct SINHVIEN
{
	char Maso[5];
	char Hoten[30];
	float Diemso;
};
typedef struct SINHVIEN sv;
int nhapsv(sv &x);
void Nhapsv(sv a[10],int n);
int main()
{
	FILE *fp;
	char k[50];
	sv x,a[10];
	int n;
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
	sv*q=(sv*)malloc(sizeof(sv)*n);
	Nhapsv(a,n);
	printf("Nhap duong dan: ");
	fflush(stdin);
	  gets(k);
	fp=fopen(k,"wb");
	if(fp==NULL)
	  printf("Loi mo file!");
	else
	  {
	  	fwrite(q,sizeof(sv),n,fp);
	  	fclose(fp);
	  }
	  free(q);
}
void Nhapsv(sv a[10],int n)
{
	for(int i=0;i<n;i++)
	   {
	   	printf("Nhap thong tin sinh vien %d\n",i+1);
	   	   nhapsv(a[i]);
	    }
}
int nhapsv(sv &x)
{
	fflush(stdin);
	printf("Nhap ma so: ");
	gets(x.Maso);
	fflush(stdin);
	printf("Nhap ho ten: ");
	gets(x.Hoten);
	printf("Nhap diem so: ");
	scanf("%f",&x.Diemso);
	
}
