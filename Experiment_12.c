#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter value of N: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i++;
    }

    printf("Sum = %d", sum);
    return 0;
}