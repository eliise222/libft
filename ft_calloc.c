/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:58:08 by elise             #+#    #+#             */
/*   Updated: 2025/08/28 16:38:42 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t			t;
	void			*ptr;
	size_t			i;
	unsigned char	*sptr;

	t = n * size;
	ptr = malloc(t);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	sptr = (unsigned char *) ptr;
	while (i < t)
		sptr[i++] = 0;
	return (ptr);
}
