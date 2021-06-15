#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

int	main(void)
{
	char *str;
	int	string_lenght;

	str = "Derenga";
	string_lenght = ft_strlen(str);
	printf("%d\n", string_lenght);
}
