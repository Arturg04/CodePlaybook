# Memory Management in C Playbook

## Overview

This playbook delves into the principles and practices of **memory management** in C, one of the core areas of expertise for C programmers. It covers topics like memory allocation, deallocation, common pitfalls, and debugging memory-related issues.

---

## Table of Contents

1. [Introduction to Memory Management](#1-introduction-to-memory-management)  
2. [Memory Layout in C](#2-memory-layout-in-c)  
3. [Dynamic Memory Allocation](#3-dynamic-memory-allocation)  
4. [Common Memory Issues](#4-common-memory-issues)  
5. [Debugging Memory Errors](#5-debugging-memory-errors)  
6. [Best Practices](#6-best-practices)  

---

## 1. Introduction to Memory Management

### Why Memory Management Matters  
In C, developers have direct control over memory, which allows for high efficiency but also introduces challenges like memory leaks and segmentation faults.  

### Key Concepts:  
- **Static Memory:** Allocated at compile time.  
- **Dynamic Memory:** Allocated during runtime using functions like `malloc`.  

---

## 2. Memory Layout in C

### Overview of Memory Layout  
A C program’s memory is divided into:  
1. **Code Segment:** Contains executable instructions.  
2. **Data Segment:** Stores global and static variables.  
3. **Heap:** For dynamic memory allocation.  
4. **Stack:** For function calls and local variables.  

### Diagram  
```
|------------------|  
|      Stack       |  <- High memory address
|------------------|
|       Heap       |  
|------------------|
|   Data Segment   |
|------------------|
|   Code Segment   |  <- Low memory address
|------------------|
```

---

## 3. Dynamic Memory Allocation

### Functions in `<stdlib.h>`  
1. `malloc`: Allocates uninitialized memory.  
   ```c
   int *ptr = (int *)malloc(10 * sizeof(int));
   ```
2. `calloc`: Allocates and initializes memory to zero.  
   ```c
   int *ptr = (int *)calloc(10, sizeof(int));
   ```
3. `realloc`: Resizes previously allocated memory.  
   ```c
   ptr = (int *)realloc(ptr, 20 * sizeof(int));
   ```
4. `free`: Deallocates memory.  
   ```c
   free(ptr);
   ```

### Example  
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) arr[i] = i + 1;

    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);

    free(arr);
    return 0;
}
```

---

## 4. Common Memory Issues

### Memory Leaks  
Failing to deallocate dynamically allocated memory.  

**Example:**  
```c
int *ptr = (int *)malloc(sizeof(int));
ptr = NULL; // Memory leak: lost the pointer to allocated memory.
```

### Dangling Pointers  
Accessing memory that has already been deallocated.  

**Example:**  
```c
int *ptr = (int *)malloc(sizeof(int));
free(ptr);
printf("%d", *ptr); // Undefined behavior.
```

### Buffer Overflow  
Writing outside the allocated memory bounds.  

**Example:**  
```c
int arr[5];
arr[10] = 42; // Accessing out of bounds.
```

---

## 5. Debugging Memory Errors

### Tools for Debugging  
1. **Valgrind** (Linux): Detects memory leaks and errors.  
   ```bash
   valgrind ./program
   ```
2. **AddressSanitizer** (GCC/Clang): Catches memory-related issues.  
   ```bash
   gcc -fsanitize=address -g program.c -o program
   ./program
   ```

### Example: Debugging with Valgrind  
If a program leaks memory, Valgrind will report:  
```
HEAP SUMMARY:
    definitely lost: 4 bytes in 1 blocks
```

---

## 6. Best Practices

- **Always Initialize Pointers:** Avoid uninitialized memory access.  
  ```c
  int *ptr = NULL;
  ```
- **Pair `malloc` with `free`**: Every allocation should have a corresponding deallocation.  
- **Check for NULL Pointers**: Always verify if memory allocation was successful.
  ```c
  int *ptr = (int *)malloc(sizeof(int));
  if (ptr == NULL) {
      printf("Memory allocation failed\n");
      return 1;
  }
  // Proceed with using ptr
  ```
- **Use `calloc` for Zero Initialization**: Prefer `calloc` when initializing arrays.  
- **Avoid Memory Mismanagement**: Regularly test with tools like Valgrind.
- **Prefer Stack Allocation**: Use stack memory when possible to avoid dynamic allocation overhead.
- **Free Memory in Correct Order**: Avoid freeing memory before it is no longer needed.
- **Assing NULL After Freeing**: Prevents dangling pointers and double frees.
    ```c
    free(ptr);
    ptr = NULL;
    ```
