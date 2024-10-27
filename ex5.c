#include <stdio.h>

void sayHello(char name[]);

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    sayHello(name);

    return 0;
}

void sayHello(char name[]) {
    printf("Hello, %s!\n", name);
}
