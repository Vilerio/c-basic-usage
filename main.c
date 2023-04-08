#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function prototypes
void displayMessage(void);
void printArray(int arr[], int size);
int sumArray(int arr[], int size);
void reverseArray(int arr[], int size);
void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
int factorial(int n);
int fibonacci(int n);
int binarySearch(int arr[], int l, int r, int x);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

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

    // Sorting example
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\nSorting array using bubble sort:\n");
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    // Factorial example
    int num = 5;
    printf("\nFactorial of %d is %d\n", num, factorial(num));

    // Fibonacci example
    int fibNum = 6;
    printf("\nFibonacci number at position %d is %d\n", fibNum, fibonacci(fibNum));

    // Binary search example
    int sortedArr[] = {2, 3, 4, 10, 40};
    int searchElement = 10;
    int arrSize = sizeof(sortedArr)/sizeof(sortedArr[0]);
    int result = binarySearch(sortedArr, 0, arrSize-1, searchElement);
    (result == -1) ? printf("\nElement not found\n") : printf("\nElement found at index %d\n", result);

    // Merge sort example
    int arrToSort[] = {12, 11, 13, 5, 6, 7};
    int arrToSortSize = sizeof(arrToSort)/sizeof(arrToSort[0]);
    printf("\nSorting array using merge sort:\n");
    mergeSort(arrToSort, 0, arrToSortSize - 1);
    printf("Sorted array: \n");
    printArray(arrTo
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

    // Class example
    Person person1("John", 25);
    Person person2("Jane", 30);
    printf("\n%s is %d years old\n", person1.getName().c_str(), person1.getAge());
    printf("%s is %d years old\n", person2.getName().c_str(), person2.getAge());

    // Pointer example
    int x = 10;
    int *ptr = &x;
    printf("\nValue of x is %d\n", *ptr);

    // Array example
    int arr[] = {10, 20, 30, 40, 50};
    printf("\nThird element of the array is %d\n", arr[2]);

    // Conditional statement example
    int num1 = 10, num2 = 20;
    if (num1 > num2) {
        printf("\n%d is greater than %d\n", num1, num2);
    } else {
        printf("\n%d is greater than %d\n", num2, num1);
    }

    // Loop example
    printf("\nNumbers from 1 to 10: ");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // File input/output example
    FILE *fp;
    fp = fopen("example.txt", "w");
    fputs("This is an example file.", fp);
    fclose(fp);
    fp = fopen("example.txt", "r");
    char str[50];
    fgets(str, 50, fp);
    printf("\nFile contents: %s", str);
    fclose(fp);

    return 0;
 }
