#include<stdio.h>
#include<stdlib.h>

int fact(int n){
    if (n != 0 && n != 1){
        return n*fact(n-1);
    }
}

int main(){
    int n,f;
    printf("Enter the number for calculating ");
    scanf("%d",&n);
    f = fact(n);
    printf("The factorial of %d is %d ",n,f);
    return 0;
}