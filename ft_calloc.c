/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:51:40 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/16 15:03:11 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			bytes;
	size_t			i;

	bytes = count * size;
	mem = (unsigned char *)malloc(bytes);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (bytes--)
	{
		mem[i++] = 0;
	}
	return ((void *)mem);
}
