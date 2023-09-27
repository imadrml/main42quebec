/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:21:51 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/20 09:31:46 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	test1[] = "\t\n\v\f\r  --+--+ab";
	char	test2[] = "\t\n\v\f\r  ---+--+1234ab567";
	int		a = -1234;
	char	test3[] = "  --+--+1234ab567-";
	int		b = 1234;
	char	test4[] = "  --+--+62532ab567-";
	int		c = 62532;
	char	test5[] = "  --+---+9999999b567-";
	int		e = -9999999;
	char	test6[] = "";
	int		f = 0;
	int 	retval;
	int		d;

	d = 0;
	retval = ft_atoi(test1);
	if (retval != 0)
	{
		d++;
		printf("\e[0;31mTest 1 failed: %d should be 0\n", retval);
	}
	retval = ft_atoi(test2);
	if (retval != a)
	{
		d++;
		printf("\e[0;31mTest 2 failed: %d should be %d\n", retval, a);
	}
	retval = ft_atoi(test3);
	if (retval != b)
	{
		d++;
		printf("\e[0;31mTest 3 failed: %d should be %d\n", retval, b);
	}
	retval = ft_atoi(test4);
	if (retval != c)
	{
		d++;
		printf("\e[0;31mTest 3 failed: %d should be %d\n", retval, c);
	}
	retval = ft_atoi(test5);
	if (retval != e)
	{
		d++;
		printf("\e[0;31mTest 3 failed: %d should be %d\n", retval, d);
	}
	retval = ft_atoi(test6);
	if (retval != f)
	{
		d++;
		printf("\e[0;31mTest 3 failed: %d should be %d\n", retval, d);
	}
	if (d == 0)
		printf("\e[0;32mTest passed\n");
	return (0);
}
