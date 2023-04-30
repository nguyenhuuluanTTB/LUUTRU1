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
	Node *newNode = (Node*)malloc(sizeof(Node));// ,mot mang newNode kieu Node duoc cap phat bo nho dong, no se chua data va pNext
	    	newNode -> Data=x;
			newNode -> pNext = NULL; 
	return newNode; // tra ve mot cai newNode gom Data|pNext(dia chi cua Node tiep theo la NULL)
}
void AddFirst(List &l, Node *newNode)
{

	if(l.pHead==NULL){
		l.pHead =  newNode;
		l.pTail = newNode;
	}
	else{
		newNode -> pNext = l.pHead;
		l.pHead = newNode;
	}
	  
}
void Output(List l)
{
	for(Node *k= l.pHead; k!=NULL ; k = k->pNext)
	   {
	   	   printf(" %d ",k->Data);
	   }
}
int main(){
	int n;
	List l; //khai bao bien l kieu List
	Khoitao(l); //Khoi tao mot danh sach lien ket rong
    printf("\nNHap so luong can them: ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
    	int x;
    	printf("\nNhap gia tri them: ");
    	scanf("%d",&x); 
    	Node* newNode = khoitaoNode(x); //Khoi tao newNode -> gan gia tri cho con tro newNode 
    	AddFirst(l,newNode);
	}
	printf("\nGia tri cac phan tu cua mang : ");
	Output(l);
	return 0;
}

