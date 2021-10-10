#include <stdio.h>
int main()
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int cents;
    printf("Enter number of cents: \n");
    scanf("%d", &cents);
    quarters = (cents / 25);
    dimes = ((cents % 25) / 10);
    nickels = ((cents % 10) / 5);
    pennies = (cents % 5);
    printf(" %d quarters, %d dimes, %d nickels, %d pennies\n", quarters, dimes, nickels, pennies); 
    return 0;
}
   
