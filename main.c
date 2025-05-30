#include <stdio.h>
int main() {
    int a, b, c, opr;
//declaring the variables,opr is the variable to hold the options and used for switch case//

//getting numeric inputs from the user//
    printf("Enter the value of the first number: ");
    scanf("%d", &a);
    printf("Enter the value of the second number: ");
    scanf("%d", &b);

    //providing the options to select//
    printf("\nSIMPLE CALCULATIONS\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Quotient\n");
    printf("5. Remainder\n");
    //selected operation is stored in the variable opr//
    printf("Select one of the operations (1-5): ");
    scanf("%d", &opr);
    
// switch case conditonals started//
    switch (opr) {
        case 1:
            c = a + b;
            printf("The Sum of %d and %d = %d\n", a, b, c);
            break;
        case 2:
            c = a - b;
            printf("The Difference of %d and %d = %d\n", a, b, c);
            break;
        case 3:
            c = a * b;
            printf("The Product of %d and %d = %d\n", a, b, c);
            break;
        case 4:
            if (b != 0) {
                c = a / b;
                printf("The Quotient of %d and %d = %d\n", a, b, c);
            } else {
                printf("Division by zero is not allowed.\n");//division of zero is being caught by if-else statement thus,avoiding error
            }
            break;
        case 5:
            if (b != 0) {
                c = a % b;
                printf("The Remainder of %d and %d = %d\n", a, b, c);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice\n");//executed when unknown options are given as input by the user
    }

    return 0;
}
