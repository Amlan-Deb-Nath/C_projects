#include <stdio.h>

int main() {
    char ch;
    double a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &ch);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (ch) {
        case '+':
            result = a + b;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
