
# C Headers and Libraries Playbook

## Overview

This playbook is your go-to guide for mastering **C headers** and **libraries**. It covers everything from the basics to best practices, ensuring you understand how to write reusable and efficient C code.

---

## Table of Contents

1. [Introduction to Headers](#1-introduction-to-headers)  
2. [Macros in C](#2-macros-in-c)  
3. [Definitions](#3-definitions)  
4. [Includes](#4-includes)  
5. [Working with Libraries](#5-working-with-libraries)  
6. [Best Practices](#6-best-practices)  

---

## 1. Introduction to Headers

### What Are Header Files?  

Header files in C (`.h` files) contain declarations and macros shared across multiple `.c` files.
Basically, they define the interface for functions and variables used in your program.

### Example  
```c
// myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H

void sayHello();

#endif
```

```c
// main.c
#include "myheader.h"

int main() {
    sayHello();
    return 0;
}
```



---

## 2. Macros in C

### Explanation  

Macros are preprocessor directives that define constants or functions for reuse. They're defined using `#define`.
A common use case is defining mathematical operations or constants.

- define a constant: `#define PI 3.14159`
- define a function-like macro: `#define SQUARE(x) ((x) * (x))`
- use a macro: `SQUARE(5)` expands to `(5 * 5)`
- use a constant: `PI` expands to `3.14159`
- use `#undef` to remove a macro definition
- use `#ifdef` to check if a macro is defined
- use `#if` for conditional compilation based on macro values

### Example  
```c
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

#include <stdio.h>

int main() {
    printf("Value of PI: %f\n", PI);
    printf("Square of 5: %d\n", SQUARE(5));
    return 0;
}
```

### Tips  
- Always use parentheses in macros to avoid unintended precedence issues.  
- Prefer `const` variables for readability and type safety in modern code.
- Use macros for simple and repetitive tasks; avoid complex logic.
- Document macros with comments to explain their purpose.
- Avoid redefining standard library functions or constants.

---

## 3. Definitions

### What Are Definitions?  
Definitions allocate storage and define variables or functions declared in headers.  

### Example  
```c
// myheader.h
extern int counter;

// myheader.c
#include "myheader.h"
int counter = 0;
```

```c
// main.c
#include "myheader.h"
#include <stdio.h>

int main() {
    printf("Counter: %d\n", counter);
    return 0;
}
```

### Key Point  
- Use `extern` in headers for global variables to avoid multiple definition errors.
- Define variables in a single source file to allocate storage for them.
- Use `static` for file-scoped variables to limit their scope to the file.
- Avoid global variables whenever possible to improve code maintainability.

---

## 4. Includes

### Explanation  

The `#include` directive inserts the content of another file.  

- Use `< >` for standard library headers.  
- Use `" "` for custom or local headers.  

### Example  
```c
#include <stdio.h> // Standard library header
#include "myheader.h" // Custom header
```

### Header Guards  
```c
#ifndef HEADER_NAME
#define HEADER_NAME
// Header content
#endif
```

Or use `#pragma once` for simplicity:  
```c
#pragma once
// Header content
```

Pragmas are compiler-specific directives that control compilation behavior.
for example, `#pragma once` ensures the header is included only once.

---

## 5. Working with Libraries

### Explanation  
C libraries can be static (`.a`) or dynamic (`.so`/`.dll`).  

### Commands  
- Compile with a static library:  
  ```bash
  gcc main.c -L. -lmylib -o program
  ```
  #### Explanation:
- `gcc`: GNU Compiler Collection
- `-L.:` search for libraries in the current directory
- `-lmylib`: link with the library named libmylib.a
- `-o program`: output executable name

- Compile with a dynamic library:  
  ```bash
  gcc main.c -L. -lmylib -o program
  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
  ./program
  ```

### Example  
Creating a library:  
```bash
gcc -c mylib.c -o mylib.o
ar rcs libmylib.a mylib.o
```
#### Explanation:
- `-c` : compile source files without linking
- `-o mylib.o`: output object file
- `ar rcs`: create a static library archive
- `libmylib.a`: library name
- `mylib.o`: object file to include in the library

---

## 6. Best Practices

- Use meaningful names for macros and header guards to avoid collisions.  
- Group related functions and definitions into specific headers.  
- Keep headers lightweight; avoid including unnecessary headers.  
- Always document your macros, functions, and libraries for clarity.  

---