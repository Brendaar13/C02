/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main() {
    char str1[] = "pato";
    char str2[] = "GANSO333";
    char str3[] = "PaTaTa";

    printf("%s -> %s\n", str1, ft_str_is_lowercase(str1) ? "1" : "0");
    printf("%s -> %s\n", str2, ft_str_is_lowercase(str2) ? "1" : "0");
    printf("%s -> %s\n", str3, ft_str_is_lowercase(str3) ? "1" : "0");

    return 0;
}*/
