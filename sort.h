#ifndef "SORT_H"
#define "SORT_H"

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - function pointer for printing an array
 * @array: The array to be printed
 * @size: The number of elements in the array
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif /* SORT_H */
