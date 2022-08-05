#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multiplicationBetweenTwoIntegers() {
    int n, m, result;

    printf("Insert a number: ");
    scanf("%d",&n);
    printf("Insert another number: ");
    scanf("%d",&m);

    result = n * m;

    return result;
}

float multiplicationBetweenTwoFloatingPoints() {
    float n, m, result;

    printf("Insert a number: ");
    scanf("%f",&n);
    printf("Insert another number: ");
    scanf("%f",&m);

    printf("\n");

    result = n * m;

    return result;
}

float multiplicationBetweenAnIntegerAndAFloatingPoint() {
    int n;
    float m, result;

    printf("Insert the integer number: ");
    scanf("%d",&n);
    printf("Insert the floating point number: ");
    scanf("%f",&m);

    result = n * m;

    return result;
}

int main() {
    int user_choice;

    printf("Select which type of multiplication you want to perform:");
    printf("\n1. Multiplication between two integers");
    printf("\n2. Multiplication between two floating points");
    printf("\n3. Multiplication between an integer and a floating point\n");
    scanf("%d",&user_choice);

    while (user_choice < 1 || user_choice > 3) {
        printf("The chosen number is not correct. Choose again:");
        scanf("%d",&user_choice);
    }

    switch (user_choice) {
    case 1:
        printf("The result is: %d",multiplicationBetweenTwoIntegers());
        break;

    case 2:
        printf("The result is: %f",multiplicationBetweenTwoFloatingPoints());
        break;
    
    case 3:
        printf("The result is: %f",multiplicationBetweenAnIntegerAndAFloatingPoint());
        break;
    
    default:
        break;
    }

    return 0;
}