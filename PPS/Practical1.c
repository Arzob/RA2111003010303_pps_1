#include <stdio.h>
int main()
{
    int bill_amount,amount_given,quotient,remainder;
    printf("Enter bill_amount and amount_given respectively");
    scanf("%d %d", &bill_amount, &amount_given);
    quotient = bill_amount/amount_given;
    remainder = bill_amount%amount_given;
    printf("quotient: %d \n",quotient);
    printf("remainder: %d", remainder);
    return 0;
}