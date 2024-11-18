# Data Structures in C Playbook

## Overview

This playbook is designed to help you master **data structures** in C. It includes theoretical explanations, practical examples, and exercises to ensure you understand both the implementation and application of data structures.

---

## Table of Contents

1. [Introduction to Data Structures](#1-introduction-to-data-structures)  
2. [Arrays](#2-arrays)  
3. [Linked Lists](#3-linked-lists)  
4. [Stacks](#4-stacks)  
5. [Queues](#5-queues)  
6. [Trees](#6-trees)  
7. [Graphs](#7-graphs)  
8. [Hash Tables](#8-hash-tables)  
9. [Best Practices](#9-best-practices)  

---

## 1. Introduction to Data Structures

### What Are Structures?

#### Overview
Structures in C are user-defined data types that allow you to combine different data types under a single name. They are used to represent a record, such as a student or employee, with multiple attributes.

#### Syntax

- Structure Declaration and Initialization:
```c
struct StructureName {
    dataType1 member1;
    dataType2 member2;
    ...
};

struct StructureName variableName;
```

- Structure Variable Declaration and Initialization:
```c
struct StructureName {
    dataType1 member1;
    dataType2 member2;
    ...
} structureVariable;

structureVariable variableName = {value1, value2, ...};
```


- Accessing Structure Members:
```c
variableName.memberName
```

- Aceessing Structure Members using Pointer:
```c
pointer->memberName
```

#### Example
```c
#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1;
    strcpy(s1.name, "Alice");
    s1.age = 20;
    printf("Name: %s, Age: %d\n", s1.name, s1.age);
    return 0;
}
```


### What Are Data Structures?  
Data structures are ways of organizing and storing data to enable efficient operations like searching, inserting, and deleting.  

### Types of Data Structures:
- Linear: Arrays, Linked Lists, Stacks, Queues  
- Non-linear: Trees, Graphs, Hash Tables

---

## 2. Arrays

### Overview  
- Fixed-size, contiguous block of memory.
- Suitable for random access but expensive for insertions and deletions.

### Example  
```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

---

## 3. Linked Lists

### Overview  
- Dynamic size, elements (nodes) linked via pointers.  
- Efficient for insertions and deletions.  

### Example: Singly Linked List  
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1; head->next = second;
    second->data = 2; second->next = third;
    third->data = 3; third->next = NULL;

    printList(head);
    return 0;
}
```

---

## 4. Stacks

### Overview  
- Last In, First Out (LIFO).  
- Operations: `push()`, `pop()`, `peek()`.  

### Example  
```c
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

int pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        return stack[top--];
}

int main() {
    push(10);
    push(20);
    printf("Popped: %d\n", pop());
    return 0;
}
```

---

## 5. Queues

### Overview  
- First In, First Out (FIFO).  
- Operations: `enqueue()`, `dequeue()`.  

### Example  
```c
#include <stdio.h>
#define MAX 100

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
        queue[++rear] = value;
    if (front == -1) front = 0;
}

int dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
        return queue[front++];
}

int main() {
    enqueue(10);
    enqueue(20);
    printf("Dequeued: %d\n", dequeue());
    return 0;
}
```

---

## 6. Trees

### Overview  
- Hierarchical data structure.  
- Common types: Binary Tree, Binary Search Tree (BST), AVL Tree.  

### Example: Binary Tree Traversal  
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->data = 1;
    root->left = (struct Node*)malloc(sizeof(struct Node));
    root->right = (struct Node*)malloc(sizeof(struct Node));
    root->left->data = 2; root->left->left = root->left->right = NULL;
    root->right->data = 3; root->right->left = root->right->right = NULL;

    printf("Inorder traversal: ");
    inorder(root);
    return 0;
}
```

---

## 7. Graphs

### Overview  
- Nodes connected by edges.  
- Representations: Adjacency Matrix, Adjacency List.  

---

## 8. Hash Tables

### Overview  
- Key-value pair storage.  
- Fast lookup using hash functions. 

---

## 9. Best Practices

- Choose data structures based on your use case.  
- Use meaningful variable names for readability.  
- Always free dynamically allocated memory.  
