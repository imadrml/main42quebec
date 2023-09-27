#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char *m = malloc(0);
	for(int i = 0; i < 1000000; i++)
	{
		*m = 50;
		m++;
	}

	char src[] = "World!";
	char temp[] = "Hell ";
	char	*dest;
	char	*dest_check;	
	unsigned int	retval;
	unsigned int	retval_check;
	int	result = 1;
	unsigned int	i;
	unsigned int buff;

	dest = (char *) malloc(strlen(src) + strlen(temp));
	dest_check = (char *) malloc(strlen(src) + strlen(temp));
	strcpy(dest, temp);
	strcpy(dest_check, temp);
	retval = ft_strlcat(dest, src, (strlen(src) + strlen(temp)));
	retval_check = strlcat(dest_check, src, (strlen(src) + strlen(temp)));

	buff = 12;
	i = 0;
	while (i < buff)
	{
		if (dest[i] != dest_check[i])
			result = 0;
		i++;
	}
	if (retval != retval_check)
		result = 0;

	if (result == 1)
		printf("\e[0;32mTest 1 passed\n");
	else
		printf("\e[0;31mTest 1 failed\n");

	result = 1;
	buff = 11;
	char *dest2 = (char *) malloc(buff);
	char *dest_check2 = (char *) malloc(buff);
	strcpy(dest2, temp);
	strcpy(dest_check2, temp);
	unsigned int retval2 = ft_strlcat(dest2, src, buff);
	unsigned int retval_check2 = strlcat(dest_check2, src, buff);

	i = 0;
	while (i < buff)
	{
		if (dest2[i] != dest_check2[i])
			result = 0;
		i++;
	}
	if (retval2 != retval_check2)
		result = 0;

	if (result == 1)
		printf("\e[0;32mTest 2 passed\n");
	else
		printf("\e[0;31mTest 2 failed\n");
	
	result = 1;
	buff = 18;
	char *dest3 = (char *) malloc(buff);
	char *dest_check3 = (char *) malloc(buff);
	strcpy(dest3, temp);
	strcpy(dest_check3, temp);
	unsigned int retval3 = ft_strlcat(dest3, src, 18);
	unsigned int retval_check3 = strlcat(dest_check3, src, 18);

	i = 0;
	while (i < buff)
	{
		if (dest3[i] != dest_check3[i])
			result = 0;
		i++;
	}
	if (retval3 != retval_check3)
		result = 0;

	if (result == 1)
		printf("\e[0;32mTest 3 passed\n");
	else
		printf("\e[0;31mTest 3 failed\n");
	
	result = 1;
	buff = 2;
	char *dest4 = (char *) malloc(buff);
	char *dest_check4 = (char *) malloc(buff);
	strcpy(dest4, temp);
	strcpy(dest_check4, temp);
	unsigned int retval4 = ft_strlcat(dest4, src, buff);
	unsigned int retval_check4 = strlcat(dest_check4, src, buff);

	i = 0;
	while (i < buff + 1)
	{
		if (dest4[i] != dest_check4[i])
			result = 0;
		i++;
	}
	if (retval4 != retval_check4)
		result = 0;

	if (result == 1)
		printf("\e[0;32mTest 4 passed\n");
	else
		printf("\e[0;31mTest 4 failed\n");
		
	result = 1;
	buff = 1;
	char *dest5 = (char *) malloc(buff);
	char *dest_check5 = (char *) malloc(buff);
	strcpy(dest5, temp);
	strcpy(dest_check5, temp);
	unsigned int retval5 = ft_strlcat(dest5, src, buff - 1);
	unsigned int retval_check5 = strlcat(dest_check5, src, buff - 1);

	i = 0;
	while (i < buff + 1)
	{
		if (dest5[i] != dest_check5[i])
			result = 0;
		i++;
	}
	if (retval5 != retval_check5)
		result = 0;

	if (result == 1)
		printf("\e[0;32mTest 5 passed\n");
	else
		printf("\e[0;31mTest 5 failed\n");
	
	return (0);
}
