/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	b = 0;
	if (size != 0)
	{
		while (src[b] != '\0' && b < size -1)
		{
			dest[b] = src[b];
			b++;
		}
		dest[b] = '\0';
	}
	return (i);
}
/*int	main(void)
{
	char d[] = "SOS";
	char x[] = "HAMBRE";

	ft_strlcpy(x, d, 4);
	printf("%s", x);
	return (0);
}*/
