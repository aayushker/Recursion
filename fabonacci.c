#include<stdio.h>
#include<conio.h>

int fab(int n){
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fab(n-1) + fab(n-2);
    } 
}

int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);

    printf("The Fabonacci series up to %d is: ",n);
    for (int i = 0; i<n; i++){
        printf("%d ",fab(i));
    }
    printf("\n");
    return 0;
}