/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:24:23 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/02 13:06:57 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	k;

	if (!little)
		return ((char *)big);
	i = 0;
	while (big[i] && len--)
	{
		j = 0;
		if (big[i] == little[j])
		{
			k = i;
			while (big[k] == little[j])
			{
				k++;
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
