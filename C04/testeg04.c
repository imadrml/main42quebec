/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:21:51 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/20 09:25:34 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base); 

int	main(void)
{
	int		a[] = {0, 1, -1, 2147483647, -2147483648, 54321, -432412};
	int		i;

	i = 0;
	while (i < 7)
	{
		ft_putnbr_base(a[i], "0123456789");
		write(1, &" ",1);
		i++;
	}
	printf("\n");
	printf("%i %i %i %i %i %i %i\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
	printf("\n");
	i = 0;
	while (i < 7)
	{
		ft_putnbr_base(a[i], "0123456789abcdef");
		write(1, &", ",2);
		i++;
	}
	printf("\n");
	printf("0, 1, -1, 7FFFFFFF, -80000000, D431, -6991C\n");
	printf("\n");
	i = 0;
	while (i < 7)
	{
		ft_putnbr_base(a[i], "01234567");
		write(1, &" ",1);
		i++;
	}
	printf("\n");
	printf("%o %o -1 %o -%o %o -1514434\n", a[0], a[1], a[3], a[4], a[5]);
	printf("Fun base:\n");
	i = 0;
	while (i < 7)
	{
		ft_putnbr_base(a[i], "poneyvif");
		write(1, &" ",1);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 7)
	{
		ft_putnbr_base(a[i], "éb9yv0123p4i67â");
		write(1, &" ,",2);
		i++;
	}
	printf("\n");
	// Test error in str
	printf("Start of error check, should have 5 empty lines\n-");
	ft_putnbr_base(a[i], "");
	printf("\n-");
	ft_putnbr_base(a[i], "a");
	printf("\n-");
	ft_putnbr_base(a[i], "adsfzr+");
	printf("\n-");
	ft_putnbr_base(a[i], "-abcde-");
	printf("\n-");
	ft_putnbr_base(a[i], "abcedfjklb123");
	printf("\n");
	printf("End of those test\n");
	return (0);
}

