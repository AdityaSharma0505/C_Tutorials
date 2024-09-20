#include <stdio.h>
int main() {
    int a[5][5], r, c, i, j, rsum, csum;
    // clrscr();

    printf("Enter Row and Column within 5: ");
    scanf("%d %d", &r, &c);
    printf("\n Enter %d number for matrix: ", r*c);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n The Matrix is coming : ");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // getch();
    return 0;
}