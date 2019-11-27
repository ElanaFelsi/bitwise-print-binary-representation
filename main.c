#include <stdio.h>
#include <string.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int i = sizeof(int) *8 -1;

    for (; i >= 0; i--)
    {
        if ((num >> i) & 1)
            printf("1");
        else
            printf("0");
    }



    return 0;
}