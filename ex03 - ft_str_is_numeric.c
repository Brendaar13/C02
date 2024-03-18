/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 48 && str[c] <= 57))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*int main() {
    char str1[] = "12345";
    char str2[] = "abc123";
    char str3[] = "987xyz";

    printf("%s -> %s\n", str1, ft_str_is_numeric(str1) ? "1" : "0");
    printf("%s -> %s\n", str2, ft_str_is_numeric(str2) ? "1" : "0");
    printf("%s -> %s\n", str3, ft_str_is_numeric(str3) ? "1" : "0");

    return 0;
}*/
