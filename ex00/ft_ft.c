#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	number;

	number = 65;
	printf("%d\n", number);
	ft_ft(&number);
	printf("%d\n", number);
}
