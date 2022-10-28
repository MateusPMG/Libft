/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:26 by mpatrao           #+#    #+#             */
/*   Updated: 2022/10/28 15:53:48 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	int		i;
	int		j;
	int		k;

	i = 0;
	n = size;
	while (dest[i] != '\0' && size-- != 0)
		i++;
	size = n - i;
	if (size == 0)
		return (i + strlen(src));
	j = 0;
	k = i;
	while (src[j] != '\0')
	{
		if (size != 1)
		{
			dest[k++] = src[j];
			size--;
		}
		j++;
	}
	dest[k] = '\0';
	return (i + j);
}
