/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fevunge <fevunge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:22:49 by fevunge           #+#    #+#             */
/*   Updated: 2025/07/17 17:58:42 by fevunge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_file(int fd, char *remain)
{
	char	*buffer;
	ssize_t	bytes_read;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(remain, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= -1)
		{
			free(buffer);
			return (free(remain), NULL);
		}
		buffer[bytes_read] = '\0';
		remain = ft_strjoin(remain, buffer);
		if (!remain)
		{
			free(buffer);
			return (free(remain), NULL);
		}
	}
	free(buffer);
	return (remain);
}

static char	*extract_line(char *remain)
{
	char	*line;
	size_t	in;

	if (!remain || !*remain)
		return (NULL);
	in = 0;
	while (remain[in] && remain[in] != '\n')
		in++;
	if (remain[in] == '\n')
		in++;
	line = ft_substr(remain, 0, in);
	return (line);
}

static char	*exclude_line(char *remain)
{
	char	*new_remain;
	size_t	in;

	if (!remain)
		return (NULL);
	in = 0;
	while (remain[in] && remain[in] != '\n')
		in++;
	if (remain[in] == '\n')
		in++;
	if (!remain[in])
	{
		free(remain);
		return (NULL);
	}
	new_remain = ft_substr(remain, in, ft_strlen(remain) - in);
	free(remain);
	return (new_remain);
}

char	*get_next_line(int fd)
{
	static char	*remain = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	remain = read_file(fd, remain);
	if (!remain)
		return (NULL);
	line = extract_line(remain);
	remain = exclude_line(remain);
	return (line);
}
