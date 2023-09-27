#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char src[] = "World!";
	char temp[] = "Hello ";
	char	*dest;
	char	*dest_check;	
	char	*retval;
	char	*retval_check;
	int	result = 1;

	dest = (char *) malloc(20);
	dest_check = (char *) malloc(20);
	strcpy(dest, temp);
	strcpy(dest_check, temp);
	retval = ft_strcat(dest, src);
	retval_check = strcat(dest_check, src);

	if (strcmp(dest, dest_check) != 0)
		result = 0;	
	if (retval[0] != retval_check[0] || retval[strlen(dest)] != retval_check[strlen(dest_check)])
		result = 0;
	if (result == 1)
		printf("\e[0;32mTest passed\n");
	else
		printf("\e[0;31mTest failed\n");
	
	return (0);
}
