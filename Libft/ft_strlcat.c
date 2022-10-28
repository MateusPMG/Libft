/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:26 by mpatrao           #+#    #+#             */
/*   Updated: 2022/10/28 12:17:09 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dest, const char *src, size_t n)
{
	int	i;
	int	j;
	int	k;
	int	m;

	k = n;
	i = 0;
	while (k-- && dest[i] != '\0')
		i++;
	j = n - i;
	if (j == 0)
		return (i + ft_strlen(src));
	m = 0;
	while (src[m] != 0)
	{
		if (j != 1)
		{
			dest[i] = src[m];
			j--;
		}
		m++;
		i++;
	}
	dest[i] = '\0';
	return (i + ft_strlen(src));
}
