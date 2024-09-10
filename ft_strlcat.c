/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:29:27 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/21 20:32:26 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	end;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	end = dst_len;
	i = 0;
	if (dstsize < dst_len)
		return (src_len + dstsize);
	while (src[i] != '\0' && ((dst_len + i + 1) < dstsize))
	{
		dst[end++] = src[i++];
	}
	dst[end] = '\0';
	return (dst_len + src_len);
}
