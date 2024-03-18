#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*int main() {
    char source[] = "Hay hambre";
    char destination[11];

    ft_strcpy(destination, source);

    printf("%s\n", source);
    printf("%s\n", destination);

    return 0;
}*/
