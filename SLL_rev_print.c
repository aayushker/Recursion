#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}Node;

Node *start, *ptr;

Node *getnode(int ele){
    Node *new = (Node *)malloc(sizeof( Node));
    new->data = ele;
    new->link = NULL;
    return new;
}

void endingI(int ele){
    Node *new = getnode (ele);

    if (start == NULL){
        start = new;
    }
    else{
        ptr = start;

        while (ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link = new;
        new->link = NULL;
    }
}

int rev(Node *start){
    if (start->link == NULL){
        printf("%d ",start->data);
        return 1;
    }
    else{
        rev(start->link);
        printf("%d ",start->data);
    }
    return 1;
}

int main(){
    int ele,n;
    printf("Enter how many ele you want to enter ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    while (n--){
        scanf("%d",&ele);
        endingI(ele);
    }
    printf("Linked list after reversal:\n");
    rev(start);
    return 0;
}