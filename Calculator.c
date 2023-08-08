#include <stdio.h>
#include <conio.h>

int main() {
    float a, b, result;
    char ch;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    // Consume the newline character left in the buffer from the previous input
    while ((getchar()) != '\n');

    printf("Enter mathematical function among them (*, /, +, -): ");
    scanf("%c", &ch);

    if (ch == '+') {
        result = a + b;
        printf("Result: %.2f\n", result);
    } else if (ch == '-') {
        result = a - b;
        printf("Result: %.2f\n", result);
    } else if (ch == '*') {
        result = a * b;
        printf("Result: %.2f\n", result);
    } else if (ch == '/') {               //Condition applied to avoid invalid answer 
        if (b != 0) {
            result = a / b;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    getch();
    return 0;
}
