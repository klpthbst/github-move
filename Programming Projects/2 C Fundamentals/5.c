/* Write a program that asks the user to enter a value for x and then displays
 * the value of the following polynomial: (3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6)
 */

#include <stdio.h>

// only for pow >= 0
int ft_pow(int number, int pow){
    int result = 1;
    for (int i = 0; i < pow; i++){
        result *= number;
    }
    return result;
}

int main(void){
    int number;
    int result;
    scanf("%d", &number);
    result = 3 * ft_pow(number, 5) + 2 * ft_pow(number, 4) - 5 * ft_pow(number, 3) - ft_pow(number, 2) + 7 * number - 6;
    printf("%d", result);
    return 0;
}