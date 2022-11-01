/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:57:53 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/01 16:41:03 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s)
{
	char	*p;
	int		l;

	l = ft_strlen(s) + 1;
	p = (char *)malloc(l * sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, s, l);
	return (p);
}

