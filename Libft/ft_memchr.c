/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:20:22 by mpatrao           #+#    #+#             */
/*   Updated: 2022/10/31 12:55:45 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	k;

	k = (unsigned char) c;
	while (*s++ && n--)
		if (*s == k)
			return (s);
	return (NULL);

}
