# 0x1B. C - Sorting algorithms & Big O

---
## Learning Objectives
---
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm
---
## Project Data Structure:
---
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
---
## Big O Notation:
---
Big O notation is one of the most fundamental tools for computer scientists to analyze the cost of an algorithm.

“Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation.”
— Wikipedia’s definition of Big O notation
---
## Tasks
---
0. Bubble sort
1. Insertion sort
2. Selection sort
3. Quick sort

# Authors:
  - Carlos Andres Pardo - [ANDRES3021](https://github.com/ANDRES3021) 
  - Carolina Espitia - [caritoespicaita](https://github.com/caritoespicaita) 