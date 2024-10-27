#include <stdio.h>
#include <string.h>

int main() {
    char pet[10];

    // Ask the user if they have a cat or a dog
    printf("Do you have a cat or a dog? ");
    scanf("%s", pet);

    // Use if statements to determine the sound the pet makes
    if (strcmp(pet, "cat") == 0) {
        printf("Meow!\n");
    } else if (strcmp(pet, "dog") == 0) {
        printf("Woof!\n");
    } else {
        printf("I don't know what sound that pet makes.\n");
    }

    return 0;
}

