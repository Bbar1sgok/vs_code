#include "stdio.h"
void calculaterFunction(void) 
{
    float num1, num2;
    char op;
    printf("Please enter an operator  :  \n");
    scanf_s("%c", &op);
    printf("Please enter the first number :   \n");
    scanf_s("%f", &num1);
    printf("Please enter the second number :   \n");
    scanf_s("%f", &num2);
    switch (op) {
    case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case '/':
        if (num2 != 0)
            printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        else
            printf("Undefined");

        break;
    case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);

        break;
    default:
        printf("You chose the wrong operator.");


    }


}
int TOPLAMA(int x, int y)
{
    int z=0;
    z = x + y;
    return z;
}
