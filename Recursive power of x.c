#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int po(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * po(x, n - 1);
    }
}

int main() {
    int x,n,a;

    printf("Enter the number and the power you want to calculate");
    scanf("%d %d",&x,&n);

    a = po(x,n);
    printf("%d",a);
    return 0;
}
