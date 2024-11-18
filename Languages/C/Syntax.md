# C Language Syntax

## Overview

C is a powerful programming language known for its simplicity and efficiency. This guide provides an overview of the essential syntax and structure of C programs, including control flow, functions, and arithmetic operations, to help you get started with C programming.

---

## Table of Contents

1. [Basic Structure of a C Program](#1-basic-structure-of-a-c-program)  
2. [Comments](#2-comments)  
3. [Preprocessor Directives](#3-preprocessor-directives)  
4. [Data Types and Variables](#4-data-types-and-variables)  
5. [Arithmetic Operations](#5-arithmetic-operations)  
6. [Control Statements](#6-control-statements)  
7. [Functions](#7-functions)  
8. [Input and Output](#8-input-and-output)  
9. [Syntax Rules and Conventions](#9-syntax-rules-and-conventions)  

---

## 1. Basic Structure of a C Program

A C program generally consists of:  
1. Preprocessor directives  
2. A `main()` function  
3. Variable declarations  
4. Statements and expressions  

### Example  
```c
#include <stdio.h> // Preprocessor directive

int main() { // Entry point of the program
    printf("Hello, World!\n"); // Output statement
    return 0; // Exit the program
}
```

---

## 2. Comments

### Single-line Comments  
Use `//` for single-line comments.  
```c
// This is a single-line comment
```

### Multi-line Comments  
Use `/*` and `*/` for multi-line comments.  
```c
/* This is a
   multi-line comment */
```

---

## 3. Preprocessor Directives

Preprocessor directives are commands processed before compilation.  

### Common Directives  
- **`#include`**: Includes standard or user-defined header files.  
  ```c
  #include <stdio.h>
  ```
- **`#define`**: Defines macros or constants.  
  ```c
  #define PI 3.14
  ```
- **`#ifdef` / `#endif`**: Used for conditional compilation.  

---

## 4. Data Types and Variables

### Variable Declaration  
Syntax:  
```c
data_type variable_name = value;
```

### Example  
```c
int age = 25;         // Integer variable
float salary = 5000.5; // Floating-point variable
char grade = 'A';      // Character variable
```

### Data Types in C  
| Type      | Size       | Example          |
|-----------|------------|------------------|
| `int`     | 4 bytes    | `int x = 10;`    |
| `float`   | 4 bytes    | `float y = 2.5;` |
| `double`  | 8 bytes    | `double z = 3.14;` |
| `char`    | 1 byte     | `char c = 'A';`  |
| `void`    | No size    | Functions with no return value. |

---

## 5. Arithmetic Operations

### Overview  
Arithmetic operations are used to perform mathematical computations like addition, subtraction, multiplication, division, and finding the remainder.  

### List of Arithmetic Operators  

| Operator | Operation          | Example     | Description                                   |
|----------|--------------------|-------------|-----------------------------------------------|
| `+`      | Addition           | `a + b`     | Adds two numbers.                             |
| `-`      | Subtraction        | `a - b`     | Subtracts the second number from the first.   |
| `*`      | Multiplication     | `a * b`     | Multiplies two numbers.                       |
| `/`      | Division           | `a / b`     | Divides the first number by the second.       |
| `%`      | Modulus (Remainder)| `a % b`     | Returns the remainder of the division.        |

### Examples  

1. **Addition and Subtraction**  
   ```c
   int a = 10, b = 5;
   printf("Addition: %d\n", a + b);  // Output: 15
   printf("Subtraction: %d\n", a - b); // Output: 5
   ```

2. **Multiplication and Division**  
   ```c
   int a = 10, b = 5;
   printf("Multiplication: %d\n", a * b);  // Output: 50
   printf("Division: %d\n", a / b);       // Output: 2
   ```

3. **Modulus**  
   ```c
   int a = 10, b = 3;
   printf("Modulus: %d\n", a % b);  // Output: 1
   ```

---

## 6. Relational Operators

### Overview
Relational operators are used to compare two values and return a boolean result (true or false).

### List of Relational Operators

| Operator | Description          | Example     | Result  |
|----------|----------------------|-------------|---------|
| `==`     | Equal to             | `a == b`    | True if `a` is equal to `b`. |
| `!=`     | Not equal to         | `a != b`    | True if `a` is not equal to `b`. |
| `<`      | Less than            | `a < b`     | True if `a` is less than `b`. |
| `>`      | Greater than         | `a > b`     | True if `a` is greater than `b`. |
| `<=`     | Less than or equal to| `a <= b`    | True if `a` is less than or equal to `b`. |
| `>=`     | Greater than or equal to | `a >= b` | True if `a` is greater than or equal to `b`. |

### Examples

1. **Equal to and Not Equal to**  
   ```c
   int a = 5, b = 10;
   if (a == b) {
       printf("A is equal to B\n");
   } else {
       printf("A is not equal to B\n");
   }
   ```

2. **Less than and Greater than**  
   ```c
   int a = 5, b = 10;
   
   if (a < b) {
       printf("A is less than B\n");
   }
   else if (a > b) {
       printf("A is greater than B\n");
   }
   ```

3. **Less than or equal to and Greater than or equal to**  
   ```c
   int a = 5, b = 5;
   
   if (a <= b) {
       printf("A is less than or equal to B\n");
   }
   if (a >= b) {
       printf("A is greater than or equal to B\n");
   }
   ```

## 7. Logical Operators

### Overview
Logical operators are used to combine multiple conditions and return a boolean result.

### List of Logical Operators

| Operator | Description          | Example     | Result  |
|----------|----------------------|-------------|---------|
| `&&`     | Logical AND          | `a && b`    | True if both `a` and `b` are true. |
| `||`     | Logical OR           | `a \|\| b`  | True if either `a` or `b` is true. |
| `!`      | Logical NOT          | `!a`        | True if `a` is false. |

### Examples

1. **Logical AND**  
   ```c
   int a = 5, b = 10;
   if (a > 0 && b > 0) {
       printf("Both A and B are positive\n");
   }
   ```
2. **Logical OR**  
   ```c
   int a = 5, b = -10;
   if (a > 0 || b > 0) {
       printf("At least one of A or B is positive\n");
   }
   ```
3. **Logical NOT**  
   ```c
   int a = 5;
   if (!(a > 0)) {
       printf("A is not positive\n");
   }
   ```

## 8. Assignment Operators

### Overview
Assignment operators are used to assign values to variables.

### List of Assignment Operators

| Operator | Description          | Example     | Equivalent |
|----------|----------------------|-------------|------------|
| `=`      | Assign               | `a = 5`     | `a = 5`    |
| `+=`     | Add and assign       | `a += 5`    | `a = a + 5`|
| `-=`     | Subtract and assign  | `a -= 5`    | `a = a - 5`|
| `*=`     | Multiply and assign  | `a *= 5`    | `a = a * 5`|
| `/=`     | Divide and assign    | `a /= 5`    | `a = a / 5`|
| `%=`     | Modulus and assign   | `a %= 5`    | `a = a % 5`|

### Examples

1. **Add and Assign**  
   ```c
   int a = 5;
   a += 10; // Equivalent to a = a + 10
   printf("Value of A: %d\n", a); // Output: 15
   ```

2. **Subtract and Assign**  
   ```c
   int a = 10;
   a -= 5; // Equivalent to a = a - 5
   printf("Value of A: %d\n", a); // Output: 5
   ```

3. **Multiply and Assign**  
   ```c
   int a = 5;
   a *= 3; // Equivalent to a = a * 3
   printf("Value of A: %d\n", a); // Output: 15
   ```

4. **Divide and Assign**  
   ```c
   int a = 15;
   a /= 5; // Equivalent to a = a / 5
   printf("Value of A: %d\n", a); // Output: 3
   ```

5. **Modulus and Assign**  
   ```c
   int a = 17;
   a %= 5; // Equivalent to a = a % 5
   printf("Value of A: %d\n", a); // Output: 2
   ```

## 9. Bitwise Operators

### Overview
Bitwise operators perform operations on individual bits of integers.

### List of Bitwise Operators

| Operator | Description          | Example     | Result  |
|----------|----------------------|-------------|---------|
| `&`      | Bitwise AND          | `a & b`     | Bitwise AND of `a` and `b`. |
| `\|`     | Bitwise OR           | `a \| b`    | Bitwise OR of `a` and `b`. |
| `^`      | Bitwise XOR          | `a ^ b`     | Bitwise XOR of `a` and `b`. |
| `~`      | Bitwise NOT          | `~a`        | Bitwise NOT of `a`. |
| `<<`     | Left shift           | `a << 2`    | Shifts bits of `a` left by 2 positions. |
| `>>`     | Right shift          | `a >> 2`    | Shifts bits of `a` right by 2 positions. |

### Examples

1. **Bitwise AND**
    00000101 (5 in binary)
    00000011 (3 in binary)
    00000001 (1 in binary)
   ```c
   int a = 5, b = 3;
   printf("Bitwise AND: %d\n", a & b); // Output: 1
   ```

2. **Bitwise OR**
    00000101 (5 in binary)
    00000011 (3 in binary)
    00000111 (7 in binary)
   ```c
   int a = 5, b = 3;
   printf("Bitwise OR: %d\n", a | b); // Output: 7
   ```

3. **Bitwise XOR**
    00000101 (5 in binary)
    00000011 (3 in binary)
    00000110 (6 in binary)
   ```c
   int a = 5, b = 3;
   printf("Bitwise XOR: %d\n", a ^ b); // Output: 6
   ```

4. **Bitwise NOT**
    00000101 (5 in binary)
    11111010 (NOT of 5 in binary)
   ```c
   int a = 5;
   printf("Bitwise NOT: %d\n", ~a); // Output: -6
   ```

5. **Left Shift**
    00000101 (5 in binary)
    00010100 (Left shift by 2 positions)
   ```c
   int a = 5;
   printf("Left Shift: %d\n", a << 2); // Output: 20
   ```

6. **Right Shift**
    00000101 (5 in binary)
    00000001 (Right shift by 2 positions)
   ```c
   int a = 5;
   printf("Right Shift: %d\n", a >> 2); // Output: 1
   ```

## 10. Control Statements

### If-Else  
Used for decision-making in code.  
```c
if (a > b) {
    printf("A is greater than B\n");
} else {
    printf("B is greater than or equal to A\n");
}
```

### Loops  
- **For Loop:** Executes a block of code a fixed number of times.  
  ```c
  for (int i = 0; i < 5; i++) {
      printf("%d ", i);
  }
  ```

- **While Loop:** Repeats as long as the condition is true.  
  ```c
  int i = 0;
  while (i < 5) {
      printf("%d ", i);
      i++;
  }
  ```

---

## 11. Functions

### Syntax  
```c
return_type function_name(parameters) {
    // Function body
}
```

### Example  
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 5);
    printf("Sum: %d\n", result);
    return 0;
}
```

---

## 12. Input and Output

### Standard Input and Output Functions  
- **`printf`**: Outputs data to the screen.  
- **`scanf`**: Inputs data from the user.

### Example  
```c
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); // Reads an integer from the user
    printf("You entered: %d\n", number);
    return 0;
}
```

---

## 13. Syntax Rules and Conventions

### Rules  
1. Each statement must end with a semicolon (`;`).  
2. Code blocks are enclosed in curly braces `{}`.  
3. C is case-sensitive. (`variable` and `Variable` are different.)  
4. Preprocessor directives do not end with a semicolon.

### Conventions  
- Use consistent indentation for better readability.  
- Use meaningful variable names (`total_score` instead of `x`).  
- Avoid "magic numbers"; use constants or macros instead.  
- Add comments to explain non-obvious logic.  