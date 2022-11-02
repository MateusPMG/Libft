/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:41:23 by marvin            #+#    #+#             */
/*   Updated: 2022/10/27 09:41:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	s = src;
	d = dest;
	if (s <= d)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (dest);
}
