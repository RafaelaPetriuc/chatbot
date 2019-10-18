#include <stdio.h>

int main() {
    printf("Let's chat\n");
    char userInput[20];
    gets(userInput);
    printf("%s to you too. I am Hal. What's your name?", userInput);
    char name[20];
    scanf("%s", name);
    printf("Oh, hi, %s! What's your age? \n", name);
    int age;
    scanf("%d", &age);
    printf("Wow! %d is quite something. \n", age);
    gets(userInput);
    gets(userInput);
    printf( "Sorry, not sure what this \"%s\" means. Gotta go. Bye!", userInput );
    return 0;
}