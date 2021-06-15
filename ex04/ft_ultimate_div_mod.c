#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a / *b;
	aux_b = *a % *b;
	*a = aux_a;
	*b = aux_b;
}

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;
	printf("X: %d\nY: %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("X: %d\nY: %d\n", x, y);
}
