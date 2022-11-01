/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:49:16 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/01 16:35:52 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nelem, size_t elsize)
{
	void	*p;

	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = nelem;
	}
	p = (void *)malloc(nelem * elsize);
	if (p)
		ft_bzero(p, nelem * elsize);
	return (p);
}
