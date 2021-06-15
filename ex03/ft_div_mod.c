#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 10;
	y = 3;
	div = 0;
	mod = 0;
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);
	ft_div_mod(x, y, &div, &mod);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);
}
