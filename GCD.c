#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
    int m,n;
    printf("Enter the numbers whose GCD you want to find ");
    scanf("%d %d",&m,&n);
    printf("%d",gcd(m,n));
}