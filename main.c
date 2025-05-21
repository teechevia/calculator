#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter first num: ");
    scanf("%f", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);            //Add a space which means to skip reading any whitespace or new line
    printf("Enter second num: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            printf("Result: %f", num1 + num2);
            break;
        case '-':
            printf("Result: %f", num1 - num2);
            break;
        case '*':
            printf("Result: %f", num1 * num2);
            break;
        case '/':
            if(num2==0){
            printf("Error! Division by 0");
            }
            else{
                printf("Result: %f", num1 / num2);
                break;
            }
            break;
        default:
            printf("Please enter correct operator");
    }

    return 0;
}