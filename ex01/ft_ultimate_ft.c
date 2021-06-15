#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	number;
	int	*pointer01;
	int	**pointer02;
	int	***pointer03;
	int	****pointer04;
	int	*****pointer05;
	int	******pointer06;
	int	*******pointer07;
	int	********pointer08;
	int	*********pointer09;

	number = 50;
	pointer01 = &number;
	pointer02 = &pointer01;
	pointer03 = &pointer02;
	pointer04 = &pointer03;
	pointer05 = &pointer04;
	pointer06 = &pointer05;
	pointer07 = &pointer06;
	pointer08 = &pointer07;
	pointer09 = &pointer08;
	printf("%d\n", number);

	ft_ultimate_ft(pointer09);
	printf("%d\n", number);
}
