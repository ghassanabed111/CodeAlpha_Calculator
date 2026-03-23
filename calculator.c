#include <stdio.h>

int main () {
     double num1, num2;
     char op,choice;

     do{
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch(op) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;

            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;

            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;

            case '/':
                if(num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;

            default:
                printf("Invalid operator!\n");
        }

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

     } while(choice == 'y' || choice == 'Y');

        return 0;

}