#include <stdio.h> //comentar si no se usará el main
int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A' && str[a] <= 'Z')
			|| (str [a] >= 'a' && str [a] <= 'z'))
			a++;
		else
			return (0);
	}
	return (1);
}
/*int main() {
    char input1[] = "M";
    char input2[] = "a";
    char input3[] = "5";
    char input4[] = "B";

    int result1 = ft_str_is_alpha(input1);
    int result2 = ft_str_is_alpha(input2);
    int result3 = ft_str_is_alpha(input3);
    int result4 = ft_str_is_alpha(input4);

    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result4);

    return 0;
}*/
