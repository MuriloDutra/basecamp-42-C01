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

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	sub_counter;
	int	aux;

	counter = 0;
	while(counter <= size)
	{
		sub_counter = 0;
		while(sub_counter <= size)
		{
			if(counter != sub_counter && tab[counter] < tab[sub_counter])
			{
				aux = tab[counter];
				tab[counter] = tab[sub_counter];
				tab[sub_counter] = aux;
			}
			sub_counter++;
		}
		counter++;
	}
}

int	main(void)
{
	int	array[] = {2, 4, 3, 2, 1};
	print_array(array, 4);
	ft_sort_int_tab(array, 4);
	print_array(array, 4);
}
