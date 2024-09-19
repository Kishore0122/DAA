#include<stdio.h>
int main() {
    int n, i, j;
    printf("Enter a number (for the pyramid height):\n");
    scanf("%d", &n);
    if(n > 0) {
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n - i; j++) {
                printf(" ");
            }
            for(j = 1; j <= i; j++) {
                printf("%d ", i);
            }
            printf("\n");
        }
    } 
    return 0;
}