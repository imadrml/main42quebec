#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "aaa";
	char s2[] = "aaa";
	char s3[] = "aad";
	printf("Mine : %i\n", ft_strcmp(s1, s3));
	printf("Check: %i\n", strcmp(s1, s3));
	printf("Mine : %i\n", ft_strcmp(s1, s2));
	printf("Check: %i\n", strcmp(s1, s2));
	printf("Mine : %i\n", ft_strcmp(s3, s1));
	printf("Check: %i\n", strcmp(s3, s1));
	return (0);
}
