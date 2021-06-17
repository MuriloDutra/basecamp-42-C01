#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	increase_counter;
	int	decrease_counter;
	int	aux;

	increase_counter = 0;
	decrease_counter = size - 1;
	while (increase_counter <= ((size - 1) / 2))
	{
		aux = tab[increase_counter];
		tab[increase_counter] = tab[decrease_counter];
		tab[decrease_counter] = aux;
		increase_counter++;
		decrease_counter--;
	}
}
