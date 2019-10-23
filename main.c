#include <stdio.h>

int main() {
    printf("Let's chat\n");

    char userInput[20];
    gets(userInput);

    printf("%s to you too. I am Hal. What's your name? \n", userInput);

    char name[20];
    scanf("%s", name);

    printf("Oh, hi, %s! What's your age? \n", name);

    int age;
    scanf("%d", &age);

    printf("Wow! %d is quite something. And what is your current occupation? \n", age);

    char oc[20];
    gets(oc);
    gets(oc);

    printf("What are you studying? \n");

    char study[30];
    gets(study);

    printf("%s is quite hard! Do you like it?\n", study);

    char ans[50];
    gets(ans);

    printf("I am glad for you! How many years will you study?\n");

    int year;
    scanf("%d", &year);

    printf("Wow! %d years. I wish you good luck!\n", year);

    char bye[50];
    gets(bye);
    gets(bye);

    printf("Bye!");

    return 0;
}