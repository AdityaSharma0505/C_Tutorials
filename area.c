#include <stdio.h>
#include <math.h>

void square(float s);
void circle(float c);
void rectangle(float a, float b);

int main() {
    float s, c, a, b;
    char ch;
    printf("Enter 's' for square, 'c' for circle or 'r' for rectangle : \n");
    scanf("%c", &ch);

    if(ch == 's') {
        printf("Enter the side of the square : \n");
        scanf("%f", &s);
        square(s);
    }
    else if (ch == 'c') {
        printf("Enter the radius of the circle : \n");
        scanf("%f", &c);
        circle(c);
    }
    else if(ch == 'r') {
        printf("Enter the value of the first side of the rectangle : \n");
        scanf("%f", &a);
        printf("Enter the value of the second side of the rectangle : \n");
        scanf("%f", &b);
        rectangle(a, b);
    }
    else {
        printf("Invalid input");
    }

    return 0;
}

void square(float s) {
    printf("The value of the area of the square is : %f", pow(s, 2));
}

void circle(float c) {
    printf("The value of the area of the circle is : %f", ( 3.14 * pow(c, 2) ) );
}

void rectangle(float a, float b) {
    printf("The value of the area of the rectangle is : %f", (a * b) );
}