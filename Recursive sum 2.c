#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int pr(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + pr(n - 1);
    }
}

int main() {
    int n,a;
    printf("Enter the number whose sum you want to find ");
    scanf("%d",&n);
    a = pr(n);
    printf("%d",a);  
    return 0;
}
