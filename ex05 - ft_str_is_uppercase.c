/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	d;

	d = 0;
	while (str[d] != '\0')
	{
		if (!(str[d] >= 'A' && str[d] <= 'Z'))
		{
			return (0);
		}
		d++;
	}
	return (1);
}
/*int main() {
    char str1[] = "PATO";
    char str2[] = "GANSO333";
    char str3[] = "PaTaTa";

    printf("%s -> %s\n", str1, ft_str_is_uppercase(str1) ? "1" : "0");
    printf("%s -> %s\n", str2, ft_str_is_uppercase(str2) ? "1" : "0");
    printf("%s -> %s\n", str3, ft_str_is_uppercase(str3) ? "1" : "0");

    return 0;
}*/
