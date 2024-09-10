/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:15:25 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/21 20:29:34 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;

	u_dst = (unsigned char *)dst;
	u_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		*u_dst++ = *u_src++;
	}
	return (dst);
}
