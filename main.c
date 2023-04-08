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
    struct person p = {"Montagné", "Gilbert", 42};

    // Display person's information
    printf("Name: %s\n", p.name);
    printf("Surname: %s\n", p.surname);
    printf("Age: %d\n", p.age);

    // Array example
    int myArray[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // Call the printArray function to print the contents of myArray
    printf("\nPrinting myArray:\n");
    printArray(myArray, size);

    // Call the sumArray function to calculate the sum of myArray
    int sum = sumArray(myArray, size);
    printf("\nSum of myArray is %d\n", sum);

    // Call the reverseArray function to reverse the contents of myArray
    reverseArray(myArray, size);
    printf("\nReversed myArray:\n");
    printArray(myArray, size);

    return 0;
}

// Function to print the contents of an integer array
void printArray(int arr[], int size) {
    int i;

    for(i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
}

// Function to calculate the sum of an integer array
int sumArray(int arr[], int size) {
    int i;
    int sum = 0;

    for(i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

// Function to reverse the contents of an integer array
void reverseArray(int arr[], int size) {
    int i, temp;

    for(i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}
