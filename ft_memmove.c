/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:49:34 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/21 20:29:43 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;

	u_dst = (unsigned char *)dst;
	u_src = (unsigned char *)src;
	if (dst > src)
	{
		while (len--)
			u_dst[len] = u_src[len];
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
