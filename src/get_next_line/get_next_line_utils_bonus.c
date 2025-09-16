/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fevunge <fevunge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 23:39:23 by fevunge           #+#    #+#             */
/*   Updated: 2025/07/17 17:46:48 by fevunge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s || !*s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;

	if (!s1)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s2)
		return (s1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = malloc((len1 + len2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_memmove(join, s1, len1);
	ft_memmove(join + len1, s2, len2 + 1);
	free(s1);
	return (join);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (malloc(1));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dbytes;
	const char	*sbytes;

	dbytes = (char *)dst;
	sbytes = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (dbytes < sbytes)
	{
		while (len--)
			*(dbytes++) = *(sbytes++);
	}
	else
	{
		dbytes += len;
		sbytes += len;
		while (len--)
			*(--dbytes) = *(--sbytes);
	}
	return (dst);
}
