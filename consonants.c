#include<stdio.h>
int main() {
    char name[15];
    int i;

    printf("Enter your name : \n");
    scanf("%[^\n]%*c", name);

    for(int i = 0; i < 15; i++) {

        if (name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' || name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' || name[i] == 'u' || name[i] == 'U') {
            continue;
        }
        
        else {
            printf("%c", name[i]);
        }
    }
    return 0;
}