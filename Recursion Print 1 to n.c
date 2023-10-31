#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pr(int n) {
    if (n <= 0) {
        return;
    }
    pr(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter the number till you want to print the number ");
    scanf("%d",&n);
    printf("The series is:\n");
    pr(n);
   
    return 0;
}

