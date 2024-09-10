/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:41:41 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/21 17:08:45 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len++] = src[i++];
	}
	dest[dest_len] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strarr;
	size_t	size;
	size_t	i;

	size = ft_strlen(s1) + ft_strlen(s2);
	strarr = (char *)malloc(size + 1);
	if (strarr == NULL)
		return (NULL);
	i = 0;
	strarr[0] = '\0';
	strarr = ft_strcat(strarr, s1);
	strarr = ft_strcat(strarr, s2);
	return (strarr);
}
