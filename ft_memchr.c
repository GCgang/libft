/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:26:01 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/21 20:29:20 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*u_p;

	u_p = (unsigned char *)s;
	while (n--)
	{
		if (*u_p != (unsigned char)c)
			u_p++;
		else
			return ((void *)u_p);
	}
	return (0);
}
