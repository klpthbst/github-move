/* Write a program that computes the volume of a sphere with a 10-meter radius,
 * using the formula v = 4/3(pi)r^3.
 *
 * Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
 * Hint: C doesn't have an exponentiation operator, so you'll need to
 * multiply r by itself twice to compute (r to the power of 3).
 */

#include <stdio.h>

#define VOLUME ( 4.0f / 3.0f )
#define PI 3.14159

int     main(){

    float r;
    scanf("%f", &r);
    printf("%f\n", VOLUME * PI * r * r * r);
    return 0;
}