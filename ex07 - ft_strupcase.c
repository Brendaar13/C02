/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}
/*int main() {
    char str[] = "Classy!";

    printf("%s\n", str);
    ft_strupcase(str);
    printf("%s\n", str);

    return 0;
}*/
