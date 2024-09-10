/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:53:44 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/21 20:33:48 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(size_t s_len, unsigned int start, size_t len)
{
	size_t	size;

	size = s_len - start;
	if (s_len >= start)
	{
		if (size >= len)
			return (len);
		return (size);
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;
	size_t	s_len;
	size_t	i;
	size_t	size;

	s_len = ft_strlen(s);
	i = 0;
	size = get_size(s_len, start, len);
	s_sub = (char *)malloc(sizeof(char) * size + 1);
	if (s_sub == NULL)
		return (NULL);
	while (size-- && s[start] != '\0')
	{
		s_sub[i++] = s[start++];
	}
	s_sub[i] = '\0';
	return (s_sub);
}
