#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("========================================\n");
    printf("           SIMPLE CALCULATOR            \n");
    printf("========================================\n");
    printf("Enter two numbers separated by a space: "); 
    scanf("%f %f", &num1, &num2);
    printf("Which operator to use (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {
        result = num1 + num2;
        printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
        } 
        else {
            printf("Error: Division by zero is not allowed!\n");
        }
    } 
    else {
        printf("Error: This operator is not allowed. Please use only +, -, *, /\n");
    }

    return 0;
}