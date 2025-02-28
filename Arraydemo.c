#include<stdio.h>
int main()
{
    int a;
    char c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of c: ");
    scanf(" %c", &c);
    printf("%d\n", a);
    printf("%c\n", c);
    return 0;
}