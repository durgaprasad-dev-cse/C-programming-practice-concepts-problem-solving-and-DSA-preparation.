#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ==============================
    // 1. INTEGER TYPES
    // ==============================

    int age = 19;
    short int smallNumber = 100;
    long int population = 100000L;
    long long int bigNumber = 10000000000LL;

    unsigned int positiveNumber = 500;
    unsigned short int smallPositive = 200;
    unsigned long int largePositive = 100000UL;
    unsigned long long int veryLargePositive = 10000000000ULL;


    // ==============================
    // 2. CHARACTER TYPES
    // ==============================

    char grade = 'A';
    signed char temperature = -10;
    unsigned char marks = 250;


    // ==============================
    // 3. FLOATING-POINT TYPES
    // ==============================

    float height = 5.8f;
    double percentage = 85.75;
    long double preciseValue = 123.456789L;


    // ==============================
    // 4. BOOLEAN TYPE
    // ==============================

    bool isStudent = true;


    // ==============================
    // 5. DISPLAY VALUES
    // ==============================

    printf("========== INTEGER TYPES ==========\n");

    printf("Age: %d\n", age);
    printf("Short Integer: %hd\n", smallNumber);
    printf("Long Integer: %ld\n", population);
    printf("Long Long Integer: %lld\n", bigNumber);

    printf("Unsigned Integer: %u\n", positiveNumber);
    printf("Unsigned Short: %hu\n", smallPositive);
    printf("Unsigned Long: %lu\n", largePositive);
    printf("Unsigned Long Long: %llu\n", veryLargePositive);


    printf("\n========== CHARACTER TYPES ==========\n");

    printf("Grade: %c\n", grade);
    printf("Signed Char: %hhd\n", temperature);
    printf("Unsigned Char: %hhu\n", marks);


    printf("\n========== FLOATING-POINT TYPES ==========\n");

    printf("Height: %.2f\n", height);
    printf("Percentage: %.2f\n", percentage);
    printf("Long Double: %.6Lf\n", preciseValue);


    printf("\n========== BOOLEAN TYPE ==========\n");

    printf("Is Student: %d\n", isStudent);


    printf("\n========== SIZE OF DATA TYPES ==========\n");

    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of short int: %zu byte(s)\n", sizeof(short int));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));
    printf("Size of bool: %zu byte(s)\n", sizeof(bool));


    return 0;
}