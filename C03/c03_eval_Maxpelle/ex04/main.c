#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str1 = "bsdxxxabcabcd";
	char	*to_find1 = "abc";
	char	*to_find2 = "";
	char	*to_find3 = "eee";

	char	*ret1;
	char	*ret1_check;
	char	*ret2;
	char	*ret2_check;
	char	*ret3;
	char	*ret3_check;
	
	int		check = 1;

	ret1 = ft_strstr(str1, to_find1);
	ret1_check = strstr(str1, to_find1);
	
	ret2 = ft_strstr(str1, to_find2);
	ret2_check = strstr(str1, to_find2);
	
	ret3 = ft_strstr(str1, to_find3);
	ret3_check = strstr(str1, to_find3);

	if (ret1 != ret1_check)
		check = 0;
	if (ret2 != ret2_check)
		check = 0;
	if (ret3 != ret3_check)
		check = 0;

	if (check == 0)
		printf("\e[0;31mTest failed\n");
	else
		printf("\e[0;32mTest passed\n");
	return (0);
}
