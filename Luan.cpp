#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct SinhVien{
	char Name[20];
	int Mssv;
};
typedef struct SinhVien SV;
struct Node{
	SV Data;
	Node *pNext;
};
typedef struct Node;

struct List{
	Node *pHead;
	Node *pTail;
};
typedef struct List;
void Khoitaodslk(List &l);
Node *khoitaoNode(char Name[20],int Mssv);
void AddFirst(List &l, Node *newele);
void Output(List l);
int main(){
	SV Data;
	List l;
	Khoitaodslk(l);
	int n;
	printf("\nNhap so phan tu can them vao: ");
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		printf("\nNhap thong tin sinh vien %d: ",i+1);
		fflush(stdin);
		printf("\nNhap ten sv : ");
		gets(Data.Name);
		printf("Nhap Mssv: ");
		scanf("%d",&Data.Mssv);
		fflush(stdin);
		AddFirst(l,khoitaoNode(Data.Name,Data.Mssv));
	}
	Output(l);
}
void Khoitaodslk(List &l){
	l.pHead = NULL;
	l.pTail = NULL;
}

Node *khoitaoNode(char Name[20],int Mssv){
	 Node* newele = (Node*)malloc(sizeof(Node));
    strcpy(newele->Data.Name, Name);
    newele->Data.Mssv = Mssv;
    newele->pNext = NULL;
    return newele;
    free(newele);
}
void AddFirst(List &l, Node *newele){
	if(l.pHead==NULL){
		l.pHead = newele;
		l.pTail = newele;
	}
	else{
		newele->pNext = l.pHead;
			l.pHead = newele;
	}
}
void Output(List l){
    for(Node* k = l.pHead; k != NULL; k = k->pNext){
    	printf("\nName: ");
        puts(k->Data.Name);
        printf("Mssv: %d\n", k->Data.Mssv);
        
    }
}
