#include <stdio.h>

int main() {
    int arr[10][10];
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];   
        }
    }

    printf("\nSum of all elements = %d", sum);

    return 0;
}