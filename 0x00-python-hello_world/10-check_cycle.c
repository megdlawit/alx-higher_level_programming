#include "lists.h"
/**
 * check_cycle - cycle tortoise and hare
 * @list: pointer to head
 * Return: 1 on success, 0 otherwise.
 */
int check_cycle(listint_t *list)
{
	listint_t *tortoise;
	listint_t *hare;

	if (list == NULL)
		return (0);
	tortoise = list;
	hare = list;
	while (hare->next != NULL && hare->next->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = list;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (1);
		}
	}
	return (0);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
10-check_cycle.c [unix] (02:59 01/01/1970)                             0,0-1 All
"10-check_cycle.c" [New]

