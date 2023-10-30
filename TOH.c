#include<stdio.h>
#include<stdlib.h>

void TOH(int n, char A, char B, char C){
    if (n>0){
        TOH(n-1, A,C,B);
        printf("Disc moved from %c to %c \n", A,C);
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n;
    printf("Enter the no. of disc you want to play with ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}