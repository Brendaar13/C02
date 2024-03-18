#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	b;

	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
/*int main() {
    char source[] = "papitas, nuggets, hamburguesa";
    char destination[25];
    unsigned int n = 24;

    ft_strncpy(destination, source, n);

    printf("%s\n", source);
    printf("%s\n", destination);
    return 0;
}*/
