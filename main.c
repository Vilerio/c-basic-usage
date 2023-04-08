#include <stdio.h>

// Function example
void displayMessage(void) {
    printf("Hello, welcome to C!\n");
}

// Variable example
int main() {
    int age = 25;
    printf("I am %d years old.\n", age);
    
    // Structure example
    struct person {
        char name[20];
        char surname[20];
        int age;
    };
    
    // Declare and initialize the structure
    struct person p = {"Durand", "Jean", 30};

    // Display person's information
    printf("Name: %s\n", p.name);
    printf("Surname: %s\n", p.surname);
    printf("Age: %d\n", p.age);

    return 0;
}
