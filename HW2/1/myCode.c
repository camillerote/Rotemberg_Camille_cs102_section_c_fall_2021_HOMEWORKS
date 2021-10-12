#include <stdio.h>

int main()
{
    int perimeter, height, width;
    printf("Enter a whole number integer for length:\n");
    scanf("%d", &height);
    printf("Enter a whole number integer for width:\n");
    scanf("%d", &width);
    printf("You entered %d and %d\n", height, width);
    perimeter = (height + width ) * 2;
    printf("perimeter: %d\n", perimeter);
    return 0;
}


