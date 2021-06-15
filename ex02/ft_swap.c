#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int	x;
	int	y;

	x = 100;
	y = 200;
	printf("X: %d\n", x);
	printf("Y: %d\n", y);
	ft_swap(&x, &y);
	printf("X: %d\n", x);
	printf("Y: %d\n", y);
}
