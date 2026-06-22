// WAP to find character of given ASCII value 
#include<stdio.h>

int main(){
    int asciiValue;
    char ch;

    printf("Enter an ASCII value :- ");
    scanf("%d", &asciiValue);

    ch = asciiValue;   // assigning int value to char automatically converts it

    printf("The character for ASCII value %d is %c\n", asciiValue, ch);

    return 0;
}
