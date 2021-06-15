#include <stdio.h>

void	print_array(int	array[], int size)
{
	int	counter;

	counter = 0;
	while(counter <= size)
	{
		printf("%d", array[counter]);
		printf(" ");
		counter++;
	}
	printf("\n");
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	increase_counter;
	int	decrease_counter;
	int	aux;

	increase_counter = 0;
	decrease_counter = size;
	while(increase_counter <= (size / 2))
	{
		aux = tab[increase_counter];
		tab[increase_counter] = tab[decrease_counter];
		tab[decrease_counter] = aux;
		increase_counter++;
		decrease_counter--;
	}
}

int	main()
{
	int	array[] = {1, 2, 3, 4, 5};
	print_array(array, 4);
	ft_rev_int_tab(array, 4);
	print_array(array, 4);
}
