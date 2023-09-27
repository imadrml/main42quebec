/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:21:51 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/24 06:29:33 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	test1[] = "\t\n\v\f\r  --+--+ab";
	char	test2[] = "\t\n\v\f\r  ---+--+1234ab567";
	int		a = -1234;
	char	test3[] = "  --+--+123445z67-";
	int		b = 1193029;
	char	test4[] = "  --+--+62532ab567-";
	int		c = 62532;
	char	test5[] = "  --+---+999999b567-";
	int		e = -999999;
	char	test6[] = "  --+---+b-";
	char	test7[] = "  --+---+12053b567-";
	int		f = -5163;
	char	test8[] = "  --+--+abcdz67-";
	int		g = 43981;
	char	test9[] = "";
	char	test10[] = "  -- +--+abcdz67-";
	int 	retval;
	int		d;

	d = 0;
	retval = ft_atoi_base(test1, "0123456789");
	if (retval != 0)
	{
		d++;
		printf("\e[0;31mTest 1 failed: %d should be 0\n", retval);
	}
	retval = ft_atoi_base(test2, "0123456789");
	if (retval != a)
	{
		d++;
		printf("\e[0;31mTest 2 failed: %d should be %d\n", retval, a);
	}
	retval = ft_atoi_base(test3, "0123456789abcdef");
	if (retval != b)
	{
		d++;
		printf("\e[0;31mTest 3 hex failed: %d should be %d\n", retval, b);
	}
	retval = ft_atoi_base(test4, "0123456789");
	if (retval != c)
	{
		d++;
		printf("\e[0;31mTest 4: dec normal neg  failed: %d should be %d\n", retval, c);
	}
	retval = ft_atoi_base(test5, "0123456789");
	if (retval != e)
	{
		d++;
		printf("\e[0;31mTest 5: decimal big failed: %d should be %d\n", retval, d);
	}
	retval = ft_atoi_base(test6, "0123456789");
	if (retval != 0)
	{
		d++;
		printf("\e[0;31mTest 6 : no number failed: %d should be 0\n", retval);
	}
	retval = ft_atoi_base(test7, "01234567");
	if (retval != f)
	{
		d++;
		printf("\e[0;31mTest 7: octal failed: %d should be %d\n", retval, g);
	}
	retval = ft_atoi_base(test8, "0123456789abcdef");
	if (retval != g)
	{
		d++;
		printf("\e[0;31mTest 8: hex failed: %d should be %d\n", retval, g);
	}
	retval = ft_atoi_base(test9, "0123456789abcdf");
	if (retval != 0)
	{
		d++;
		printf("\e[0;31mTest 8: empty str failed: %d should be 0\n", retval);
	}
	retval = ft_atoi_base(test10, "0123456789abcdf");
	if (retval != 0)
	{
		d++;
		printf("\e[0;31mTest 8: empty str failed: %d should be 0\n", retval);
	}
	if (d == 0)
		printf("\e[0;32mTest passed\n");
    // Test error in str
    printf("Start of error check, should have 5 empty lines\n-");
    ft_atoi_base("-123124", "");
    printf("\n-");
    ft_atoi_base("-123124", "a");
    printf("\n-");
    ft_atoi_base("-123124", "adsfzr+");
    printf("\n-");
    ft_atoi_base("-123124", "-abcde-");
    printf("\n-");
    ft_atoi_base("-123124", "abcedfjklb123");
    printf("\n-");
    ft_atoi_base("-123124", "abce dfjklb123");
    printf("\n-");
    ft_atoi_base("-123124", "abce\tdfjklb123");
    printf("\n-");
    ft_atoi_base("-123124", "abce\rdfjklb123");
    printf("\n-");
    ft_atoi_base("-123124", "abce\ndfjklb123");
    printf("\n-");
    ft_atoi_base("-123124", "abce\vdfjklb123");
    printf("\n-");
    ft_atoi_base("-123124", "abce\vdfjklb123");
    printf("\n-");
    ft_atoi_base("-123124", "abce\fdfjklb123");
    printf("\n-");
    printf("End of those test\n");
	return (0);
}
