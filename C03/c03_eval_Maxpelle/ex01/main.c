#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char s1[] = "aaaaaaaa";
    char s2[] = "aaaaaaaa";
    char s3[] = "aaaadaaa";
    char s4[] = "aaaaâaaa";
	char s5[] = "daaaaaad";
    int i = 1;
    if (ft_strncmp(s1, s3, 4) != strncmp(s1, s3, 4))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 4\n");
	}
    if (ft_strncmp(s1, s2, 4) != strncmp(s1, s2, 4))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 4\n");
	}
    if (ft_strncmp(s3, s1, 4) != strncmp(s3, s1, 4))
	{
        i = 0;
		printf("\e[0;31m cmp s3, s1 with 4\n");
	}
    if (ft_strncmp(s1, s3, 5) != strncmp(s1, s3, 5))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 5\n");
	}
    if (ft_strncmp(s1, s2, 5) != strncmp(s1, s2, 5))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s2 with 4\n");
	}
    if (ft_strncmp(s3, s1, 5) != strncmp(s3, s1, 5))
	{
        i = 0;
		printf("\e[0;31m cmp s3, s1 with 5\n");
	}
    
    if (ft_strncmp(s1, s3, 12) != strncmp(s1, s3, 12))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 12\n");
	}
    if (ft_strncmp(s1, s2, 12) != strncmp(s1, s2, 12))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s2 with 12\n");
	}
    if (ft_strncmp(s3, s1, 12) != strncmp(s3, s1, 12))
	{
        i = 0;
		printf("\e[0;31m cmp s3, s1 with 12");
	}
    if (ft_strncmp(s4, s1, 12) != strncmp(s4, s1, 12))
	{
        i = 0;
		printf("\e[0;31m cmp s4, s1 with 12");
	}
    if (ft_strncmp(s5, s1, 0) != strncmp(s5, s1, 0))
	{
        i = 0;
		printf("\e[0;31m cmp s5, s1 with 0");
	}
    if (ft_strncmp(s5, s1, -1) != strncmp(s5, s1, -1))
	{
        i = 0;
		printf("\e[0;31m cmp s5, s1 with -1");
	}
    
    if (i == 1)
        printf("\e[0;32mTest Passed\n");
    else
        printf("\e[0;31mTest Failed\n");
    return (0);
}


















