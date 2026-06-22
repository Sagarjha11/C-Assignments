#include<stdio.h>
// WAP to calculate Addition Subtraction  Multiplication Division Remainder
int main(){
    int a, b, sum, sub, mul, div, rem;

    printf("Enter the Number A :- \n");
    scanf("%d", &a);

    printf("Enter the Number B :- \n");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    div = a/b;
    mul = a * b;
    rem = a%b;


    printf("Addition of %d and %d is %d\n", a, b, sum);
    printf("Subtraction of %d and %d is %d\n", a, b, sub);
    printf("Multiplication of %d and %d is %d\n", a, b, mul);
    printf("Division of %d and %d is %d\n", a, b, div);
    printf("Remainder of %d and %d is %d\n", a, b, rem);

    return 0;
}
