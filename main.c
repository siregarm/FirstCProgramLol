// First C program yea yea doo doo poo poo
#include "babel.h"
#define SECRET "secret123"

int main() {
    char name[64];
    unsigned int age;
    printf("What is your name? ");
    scanf("%s", &name);
    printf("Hello, %s!", name);
    printf("\nWhat is your age? ");
    scanf("%i", &age);

    if(age >= 60) {
        printf("You are an elder!");
    } else if(age >= 21) {
        printf("You are an adult!");
    } else if(age >= 17) {
        printf("You are an adolescent!");
    } else if(age >= 14) {
        printf("You are a teen!");
    } else if(age >= 6) {
        printf("You are a child!");
    } else if(age >= 0) {
        printf("You are a baby!");
    } else {
        printf("You don't exist!");
    }

    printf("\nAGE MEM_ADDRESS: %x\n", &age);
    printf("NAME MEM_ADDRESS: %x\n", &name);
    return 0;
}