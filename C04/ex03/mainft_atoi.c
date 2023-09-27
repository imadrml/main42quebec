/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:05:01 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/26 12:53:39 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

int ft_atoi(char *str);

#include <stdio.h>
int main(void)
{
	char	*s = "    ---+--+1234ab567";

	printf("%d\n",ft_atoi(s));
	char *s2 = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s2));    
}
