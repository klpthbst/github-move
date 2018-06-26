/* Write a program that asks the user to enter a U.S. dollar amount
 * and then shows how to pay that amount using the smallest number of
 * $20, $10, $5, and $1 dollar bills
 */
 #include <stdio.h>

 #define TWENTY 20
 #define TEN 10
 #define FIVE 5
 #define ONE 1

 int        main(void){
    int amount;

    printf("Enter a dollar amount:");
    scanf("%d", &amount);
    printf("$20 bills: %d\n", amount / TWENTY);
    amount = amount % TWENTY;
    printf("$10 bills: %d\n", amount / TEN);
    amount = amount % TEN;
    printf(" $5 bills: %d\n", amount / FIVE);
    amount = amount % FIVE;
    printf(" $1 bills: %d\n", amount / ONE);
    return 0;
 }