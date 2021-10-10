#include <stdio.h>

int main()
{
    int perimeter, length, width;
    printf("Enter a whole number integer for length:\n");
    scanf("%d", &length);
    printf("Enter a whole number integer for width:\n");
    scanf("%d", &width);
    printf("You entered %d and %d\n", length, width);
    perimeter = (length + width ) * 2;
    printf("perimeter: %d\n", perimeter);
    return 0;
}


