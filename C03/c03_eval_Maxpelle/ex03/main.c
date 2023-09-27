#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

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
	retval = ft_strncat(dest, src, 3);
	retval_check = strncat(dest_check, src, 3);

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
