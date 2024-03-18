/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 126))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*int main() {
    char str1[] = "Hakuna Matata";
    char str2[] = "Flow\t2000";
    char str3[] = "\x1F";

    printf("%s -> %s\n", str1, ft_str_is_printable(str1) ? "1" : "0");
    printf("%s -> %s\n", str2, ft_str_is_printable(str2) ? "1" : "0");
    printf("%s -> %s\n", str3, ft_str_is_printable(str3) ? "1" : "0");

    return 0;
}*/
