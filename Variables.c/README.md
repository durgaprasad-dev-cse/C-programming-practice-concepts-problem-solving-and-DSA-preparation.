# Variables in C

## 📌 Overview

A **variable** in C is a named memory location used to store a value that can change during program execution.

Every variable has:

* **Name** — identifies the variable
* **Data Type** — determines what kind of data it stores
* **Value** — the actual data stored
* **Memory** — space allocated by the computer

### Basic Syntax

```c
data_type variable_name = value;
```

Example:

```c
int age = 19;
float height = 5.8;
char grade = 'A';
```

---

# 1. Declaration

Declaration tells the compiler the **data type and name** of a variable.

```c
int age;
float salary;
char grade;
```

---

# 2. Initialization

Initialization means giving a variable its first value.

```c
int age = 19;
float height = 5.8;
char grade = 'A';
```

---

# 3. Assignment

A variable can receive a new value after it has been declared.

```c
int age = 19;

age = 20;
```

The value of `age` changes from `19` to `20`.

---

# 4. Data Types in C

Data types tell C what kind of data a variable can store.

## Basic Data Types

| Data Type        | Purpose                  | Example    |
| ---------------- | ------------------------ | ---------- |
| `char`           | Character                | `'A'`      |
| `int`            | Integer                  | `100`      |
| `float`          | Decimal number           | `3.14f`    |
| `double`         | More precise decimal     | `3.14159`  |
| `long double`    | Higher precision decimal | `3.14159L` |
| `_Bool` / `bool` | True or false            | `true`     |

---

# 5. Integer Data Types

C provides different integer types.

```c
int age = 19;
short int number = 100;
long int population = 100000L;
long long int bigNumber = 10000000000LL;
```

Unsigned integers store non-negative values.

```c
unsigned int marks = 500;
unsigned short int smallNumber = 200;
unsigned long int largeNumber = 100000UL;
unsigned long long int veryLargeNumber = 10000000000ULL;
```

---

# 6. Character Data Types

A `char` stores a single character.

```c
char grade = 'A';
```

Signed and unsigned character types are also available:

```c
signed char temperature = -10;
unsigned char marks = 250;
```

A character is written using **single quotes**:

```c
'A'
'B'
'1'
'#'
```

---

# 7. Floating-Point Data Types

Floating-point types are used for decimal values.

### float

```c
float height = 5.8f;
```

### double

```c
double percentage = 85.75;
```

### long double

```c
long double value = 123.456789L;
```

---

# 8. Boolean Data Type

C provides `_Bool` as a built-in boolean type.

The `bool`, `true`, and `false` names can be used by including:

```c
#include <stdbool.h>
```

Example:

```c
bool isStudent = true;
```

Boolean values are normally displayed as:

```text
1 → true
0 → false
```

---

# 9. Format Specifiers

A **format specifier** tells `printf()` or `scanf()` how a value should be interpreted.

## Common Format Specifiers

| Data Type            | `printf()` | `scanf()` |
| -------------------- | ---------- | --------- |
| `char`               | `%c`       | `%c`      |
| `int`                | `%d`       | `%d`      |
| `unsigned int`       | `%u`       | `%u`      |
| `short int`          | `%hd`      | `%hd`     |
| `unsigned short`     | `%hu`      | `%hu`     |
| `long int`           | `%ld`      | `%ld`     |
| `unsigned long`      | `%lu`      | `%lu`     |
| `long long int`      | `%lld`     | `%lld`    |
| `unsigned long long` | `%llu`     | `%llu`    |
| `float`              | `%f`       | `%f`      |
| `double`             | `%f`       | `%lf`     |
| `long double`        | `%Lf`      | `%Lf`     |
| `string (`char[]`)`  | `%s`       | `%s`      |
| pointer/address      | `%p`       | `%p`      |
| `bool`               | `%d`       | `%d`      |

### Important

For `double`:

```c
printf("%f", number);
scanf("%lf", &number);
```

For `float`:

```c
printf("%f", number);
scanf("%f", &number);
```

---

# 10. Examples

### Integer

```c
int age = 19;

printf("%d\n", age);
```

Output:

```text
19
```

### Float

```c
float height = 5.8f;

printf("%.2f\n", height);
```

Output:

```text
5.80
```

### Character

```c
char grade = 'A';

printf("%c\n", grade);
```

Output:

```text
A
```

### Double

```c
double percentage = 85.75;

printf("%.2f\n", percentage);
```

Output:

```text
85.75
```

---

# 11. Useful `printf()` Formatting

## Decimal Places

```c
printf("%.2f", 5.6789);
```

Output:

```text
5.68
```

`%.2f` means display **2 digits after the decimal point**.

## Width

```c
printf("%10d", 100);
```

This reserves a field width of 10 characters.

---

# 12. Variable Naming Rules

A variable name:

* Can contain letters
* Can contain digits
* Can contain `_`
* Cannot start with a digit
* Cannot contain spaces
* Cannot use C keywords
* Is case-sensitive

### Valid

```c
age
studentAge
student_age
marks1
_total
```

### Invalid

```c
1age
student age
float
```

---

# 13. Case Sensitivity

C is case-sensitive.

These are different variables:

```c
int age = 19;
int Age = 20;
int AGE = 21;
```

`age`, `Age`, and `AGE` are three different identifiers.

---

# 14. Constants vs Variables

A variable can change:

```c
int age = 19;
age = 20;
```

A constant should not be changed after initialization.

```c
const int DAYS = 7;
```

Trying to modify `DAYS` is not allowed.

---

# 15. Memory Size

The `sizeof` operator can be used to find the size of a data type or variable.

```c
printf("%zu\n", sizeof(int));
```

Example:

```c
printf("Size of int: %zu bytes\n", sizeof(int));
```

The exact sizes of several C types depend on the compiler and system.

---

# 16. Important Note About Strings

C does **not** have a built-in `string` data type.

Strings are stored using arrays of characters.

```c
char name[] = "Durga";
```

To print a string:

```c
printf("%s", name);
```

---

# 17. What This Program Demonstrates

The accompanying `variables.c` program demonstrates:

* Variable declaration
* Variable initialization
* Integer types
* Character types
* Floating-point types
* Boolean values
* Signed and unsigned types
* Format specifiers
* `sizeof()`
* Basic output using `printf()`

---

# 🎯 Key Points to Remember

```text
Variable
   ↓
Named memory location
   ↓
Stores a value
   ↓
Has a data type
   ↓
Can be accessed and modified
```

### Most important format specifiers

```text
char        → %c
int         → %d
unsigned    → %u
float       → %f
double      → %f  (printf)
double      → %lf (scanf)
long        → %ld
long long   → %lld
string      → %s
address     → %p
```

---

## 🚀 Learning Outcome

After completing this topic, I should be able to:

* Understand what variables are
* Declare and initialize variables
* Choose appropriate data types
* Understand signed and unsigned types
* Use `printf()` format specifiers
* Understand basic `scanf()` format specifiers
* Understand variable naming rules
* Use `sizeof()` to inspect memory size
* Write basic C programs using different types of variables
