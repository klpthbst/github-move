/* Write a program that asks the user to enter a dollars-and-cents amount, then
 * displays the amount with 5% tax added
 */

#include <stdio.h>

#define TAX 1.05f

int     main(void){
    float amount;
    scanf("%f", &amount);
    printf("%.2f\n", amount * TAX);
    return 0;
}