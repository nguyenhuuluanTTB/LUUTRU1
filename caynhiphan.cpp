#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Data;
    Node* Left;
    Node* Right;
};

Node* KhoitaoNode(int Data) {
    struct Node* newNode = (Node*)malloc(sizeof(struct Node));
    newNode->Data = Data;
    newNode->Left = NULL;
    newNode->Right = NULL;
    return newNode;
}

Node* Themphantu(Node* root, int Data) {
    if (root == NULL) {
       root = KhoitaoNode(Data);
    }
    else {
        if (Data < root->Data) {
            root->Left = Themphantu(root->Left, Data);
        }
        else {
            root->Right = Themphantu(root->Right, Data);
        }
    }
     //return root;
}

void XuatLNR(Node* Node) {
    if (Node != NULL) {
        XuatLNR(Node->Left);
        printf("%d ", Node->Data);
        XuatLNR(Node->Right);
    }
}

void XuatRNL(Node *Node){
    if (Node != NULL) {
        XuatRNL(Node->Right);
        printf("%d ", Node->Data);
        XuatRNL(Node->Left);
    }
}

void XuatNLR(Node *Node){
    if (Node != NULL) {
    	printf("%d ", Node->Data); 
        XuatNLR(Node->Left);
        XuatNLR(Node->Right);
    }
}
int main() {
    Node *root = NULL;
    int x, i;
    int n;
    printf("\nNhap so phan tu: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
    	printf("\nNhap gia tri %d: ",i+1);
        scanf("%d", &x);
        root = Themphantu(root, x);
    }

    printf("Cay nhi phan sau khi khoi tao la: ");
    printf("\nXuat theo thu tu LNR: ");
    XuatLNR(root);
    printf("\nXuat theo thu tu RNL: ");
    XuatRNL(root);
    printf("\nXuat theo thu tu NLR: ");
    XuatNLR(root);
    return 0;
}

