#include <stdio.h>
#include "lists.h"

/** 
 * print_list - prints all the elements of a linked list 
 * @h: pointer to the list_t of  list to print
 *
 * Return: The number of the nodes printed
 * size_t print_list(const list_t *h)
{
 size_t s = 1;
 if (!h->str)
 printf("[1] (nil)\n")
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 s++;
 }

 return (s);
 }
