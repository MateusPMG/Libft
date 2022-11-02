/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:20:22 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/02 12:05:35 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	k;

	k = (unsigned char) c;
	while (*s++ && n--)
		if (*s == k)
			return (s);
	return (NULL);

}
