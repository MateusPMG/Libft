/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:23:42 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/09 19:01:06 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	len = length(n);
	string = ft_calloc(len + 1, sizeof(char));
	if (!string)
		return (NULL);
	if (n == 0)
		string[0] = '0';
	if (n < 0)
	{
		string[0] = '-';
		if (n == INT_MIN)
		{
			string[--len] = '8';
			n /= 10;
		}
		n *= -1;
	}
	while (len-- && n != 0)
	{
		string[len] = (n % 10) + '0';
		n /= 10;
	}
	return (string);
}
