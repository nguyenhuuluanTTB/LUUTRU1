#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
struct SinhVien 
{
	char  Masv[10];
	char  Hotensv[30];
	char  Phai[5];
	float Diemtoan;
	float Diemvan;
	float DiemAV;
    float KQHT;
	char  Xeploai[10];	
	
};
typedef struct SinhVien SINHVIEN;
void Input(SINHVIEN *a,int n);
void Nhapsv(SINHVIEN *x);
void Output(SINHVIEN *a,int n);
void Xuatsv(SINHVIEN *x);
void Sapxep(SINHVIEN *a,int n);
int main()
{   int n;
	SINHVIEN *a;
   a=(SINHVIEN*)malloc(sizeof(SINHVIEN)*n);
	printf("NHAP SO LUONG SINH VIEN: ");
	scanf("%d",&n);
	Input(a,n);
	Output(a,n);
	Sapxep(a,n);
	printf("\nbang sau khi sap:");
	Output(a,n);
	free(a);
}
void Nhapsv(SINHVIEN *x)
{
	fflush(stdin);
	printf("\nNhap ma so sinh vien: ");
	gets(x->Masv);
	fflush(stdin);
	printf("\nNhap ho ten sinh vien: ");
	gets(x->Hotensv);
	printf("\nGioi tinh: ");
	gets(x->Phai);
	printf("\nNhap diem toan: ");
	scanf("%f",&x->Diemtoan);
	printf("\nNhap diem van: ");
	scanf("%f",&x->Diemvan);
	printf("\nNhap diem AV: ");
	scanf("%f",&x->DiemAV);
    x->KQHT=(x->Diemtoan*2+x->Diemvan*2+x->DiemAV)/5;
	if(x->KQHT<1.5)
	  {strcpy(x->Xeploai,"Yeu");}
	else if(x->KQHT<2.5)
	       {strcpy(x->Xeploai,"Trung binh");}
	       else if(x->KQHT<3.7)
	              {strcpy(x->Xeploai,"Kha");}
	              else if(x->KQHT<3.7)
	                     {strcpy(x->Xeploai,"Gioi");}
	                     else {strcpy(x->Xeploai,"Xuat sac");}
	       
	
}
void Input(SINHVIEN *a,int n)
{
	for(int i=0;i<n;i++)
	   {
	   	   printf("\nNhap thong tin sinh vien %d: ",i+1);
	   	   Nhapsv(a+i);
	   }
}
void Output(SINHVIEN *a,int n)
{
	printf("-------------------------------------------------------------------------------\n");
	printf("|Ma so sv|Ho ten sinh vien|Gioi tinh|Diem toan|Diem van|Diem Av|KQHT|Xep loai|\n");
	printf("------------------------------------------------------------------------------");
	for(int i=0;i<n;i++)
	   {
	   	  Xuatsv(a+i);
	   	  printf("------------------------------------------------------------------------------");
	   }
}
void Xuatsv(SINHVIEN *x)
{
	printf("\n|%8s|%-16s|%9s|%9.1f|%8.1f|%7.1f|%4.1f|%-8s|\n",x->Masv,x->Hotensv,x->Phai,x->Diemtoan,x->Diemvan,x->DiemAV,x->KQHT,x->Xeploai);
}
void Sapxep(SINHVIEN *a,int n)
{
	SINHVIEN tmp;
	for (int i=0;i <n;++i)
	{
		for (int j=i+1;j<n;++j)
		{
			if ((a+i)->KQHT > (a+j)->KQHT)
				{
				tmp = *(a+i);
				*(a+i) = *(a+j);
		        *(a+j) = tmp;
				}
		}
	}
}
