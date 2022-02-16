# 0x1B. C - Sorting algorithms & Big O


[![Sorting algorithms](https://embed-ssl.wistia.com/deliveries/70d6f4e10e2badb5ef394f00c17ad2bc1c14f6e7.jpg "Sorting algorithms")](https://www.google.com/url?sa=i&url=https%3A%2F%2Fbrilliant.org%2Fwiki%2Fsorting-algorithms%2F&psig=AOvVaw0a9MvRncyPY29Vo9XzDni6&ust=1645131404269000&source=images&cd=vfe&ved=0CAgQjRxqFwoTCICD7pyOhfYCFQAAAAAdAAAAABAD "Sorting algorithms")
[![Big O](https://miro.medium.com/max/1400/1*dwCxeqLXgUsNuX0De8T9CQ.png "Big O")](https://www.google.com/url?sa=i&url=https%3A%2F%2Fmedium.com%2F%40cmlavin7%2Flets-sort-this-out-mergesort-algorithm-6019e570cc25&psig=AOvVaw2fyQjolmoedU4l4iIcUZtM&ust=1645131509027000&source=images&cd=vfe&ved=0CAgQjRxqFwoTCPCo282OhfYCFQAAAAAdAAAAABAJ "Big O")


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
## Files:
|  file |  Descriptions |
| ------------ | ------------ |
|  0-bubble_sort.c |  Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm.|
|  0-O | big O notations. |
| 1-insertion_sort_list.c  | Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm. |
| 1-O  |big O notations.  |
|2-selection_sort.c   |  Write a function that sorts an array of integers in ascending order using the Selection sort algorithm.|
| 2-O  |  big O notations.|
| 3-quick_sort.c  |  Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.|
|3-O |  big O notations.

------------


## Big O Notation:
---

Big O notation is one of the most fundamental tools for computer scientists to analyze the cost of an algorithm.

“Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation.”

------------
## Growth rates


[![Big O Notation](https://cdn-images-1.medium.com/max/650/1*6mpaXFsrRPFXSKXK5Qgm8w.png "Big O Notation")](https://www.google.com/url?sa=i&url=https%3A%2F%2Ftowardsai.net%2Fp%2Fl%2Fbig-o-notation-what-is-it&psig=AOvVaw2lhN2mloH29oqofnE9are_&ust=1645129794856000&source=images&cd=vfe&ved=0CAgQjRxqFwoTCIiszZ2IhfYCFQAAAAAdAAAAABAD "Big O Notation")

------------
## Main orders of complexity
|Order   |  Name |
| ------------ | ------------ |
| O(1)  |  constant |
|  O(log n) |  logarithmic |
|  O(n) |  Linear  |
| O(n log n)| nearly linear  |
| O(n²) |  quadratic  |
| O(n³)  |  O(n³) |
|  O(a^n) |exponential   |

---
## Tasks
---
0. Bubble sort
1. Insertion sort
2. Selection sort
3. Quick sort

------------
## Documentation
- [Análisis de la complejidad de los algoritmos](https://www.cs.us.es/~jalonso/cursos/i1m-19/temas/tema-28.html "Análisis de la complejidad de los algoritmos")
- [Apuntes sobre el calculo de la eficiencia de los algoritmos](http://webdiis.unizar.es/asignaturas/AB/material/varios/eficiencia.pdf "Apuntes sobre el c´alculo de la eficiencia de los algoritmos")
- [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation "Big O notation")
- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm "Sorting algorithm")
- [Bubble-sort with Hungarian ("Csángó") folk dance](https://www.youtube.com/watch?v=lyZQPjUT5B4 "Bubble-sort with Hungarian ("Csángó") folk dance")
- [Insert-sort with Romanian folk dance](https://www.youtube.com/watch?v=ROalU379l3U "Insert-sort with Romanian folk dance")
- [Select-sort with Gypsy folk dance](https://www.youtube.com/watch?v=Ns4TPTC8whw "Select-sort with Gypsy folk dance")
- [Quick-sort with Hungarian (Küküllőmenti legényes) folk dance](https://www.youtube.com/watch?v=ywWBy6J5gz8 "Quick-sort with Hungarian (Küküllőmenti legényes) folk dance")
------------



# Authors:
##   Carlos Andres Pardo

- github:  [ANDRES3021](https://github.com/ANDRES3021) 
- Twitter: [@CarlosA54648157](https://twitter.com/CarlosA54648157:// "@CarlosA54648157")
- Linkedin: [Carlos Andres Pardo Rodriguez](https://www.linkedin.com/in/carlos-andres-pardo-rodriguez-8bbb90202/ "Carlos Andres Pardo Rodriguez")
------------
## Carolina Espitia
 - github: [caritoespicaita](https://github.com/caritoespicaita)
 - Twitter: [@karolitablue](https://twitter.com/karolitablue "@karolitablue")

------------