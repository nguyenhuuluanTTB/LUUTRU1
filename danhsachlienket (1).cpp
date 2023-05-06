#include<stdio.h>
#include<malloc.h>
struct Node{
	int Data;
	Node* pNext; //neu khong co typedef struct thi phai ghi struct Node *pNext
};
typedef struct Node;

struct List{
	Node* pHead;
	Node* pTail;
};
typedef struct List;

void Khoitao(List &l){
	l.pHead = NULL;
	l.pTail = NULL;
}

Node* khoitaoNode(int x){
	Node *new_ele = (Node*)malloc(sizeof(Node));// ,mot mang new_ele kieu Node duoc cap phat bo nho dong, no se chua data va pNext
	    	new_ele -> Data=x;
			new_ele -> pNext = NULL; 
	return new_ele; // tra ve mot cai new_ele gom Data|pNext(dia chi cua Node tiep theo la NULL)
}
void AddFirst(List &l, Node *new_ele)
{

	if(l.pHead==NULL){
		l.pHead =  new_ele;
		l.pTail = new_ele;
	}
	else{
		new_ele -> pNext = l.pHead;
		l.pHead = new_ele;
	}
	  
}
void Output(List l)
{
	for(Node* k= l.pHead; k!=NULL ; k = k->pNext)
	   {
	   	   printf(" %d ",k->Data);
	   }
}
int main(){
	int a[1000],n;
	List l; //khai bao bien l kieu List
	Khoitao(l); //Khoi tao mot danh sach lien ket rong
    printf("\nNHap so luong can them: ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
    	int x;
    	printf("\nNhap gia tri them: ");
    	scanf("%d",&x); 
        AddFirst(l, khoitaoNode(x));
	}
	printf("\nGia tri cac phan tu cua mang : ");
	Output(l);
	return 0;
}

