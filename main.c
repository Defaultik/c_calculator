#include <stdio.h>

int main() {
    char operator;
    int num_1, num_2;

    printf("(+, -)\nEnter mathematical operation: ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%d", &num_1);

    printf("Enter second number: ");
    scanf("%d", &num_2);

    if (operator == '+') {
        printf("%d\n", num_1 + num_2);
    } else if (operator == '-') {
        printf("%d\n", num_1 - num_2);
    } else {
        printf("Unsupported operator.\n");
    }

    printf("Bye!");
    return 0;
}
