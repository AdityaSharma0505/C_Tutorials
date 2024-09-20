#include <stdio.h>
void swap(int *x, int *y);
int main() {
    int a = 20, b = 30;
    // clrscr();

    swap(&a, &b);
    printf("\n A after swap %d", a);
    printf("\n B after swap %d", b);

    // getch();
    return 0;
}

void swap(int *x, int *y) {
    int t;
    printf("\n X before swap %d", *x);
    printf("\n Y before swap %d", *y);

    t = *x;
    *x = *y;
    *y = t;

    printf("\n X after swap %d", *x);
    printf("\n Y after swap %d", *y);
}