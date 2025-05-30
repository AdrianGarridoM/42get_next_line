/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgarrid <adgarrid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:49:36 by adgarrid          #+#    #+#             */
/*   Updated: 2025/05/30 15:30:35 by adgarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*make_line(char *leftover)
{
	int		i;
	char	*line;

	i = 0;
	if (leftover[i] == '\0')
		return (NULL);
	while (leftover[i] != '\0' && leftover[i] != '\n')
		i++;
	line = ft_calloc(sizeof(char), (i + 2));
	i = 0;
	while (leftover[i] != '\0' && leftover != '\n')
	{
		line[i] = leftover[i];
		i++;
	}
	if (leftover[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*ft_freejoin(char *leftover, char *tmp)
{
	char	*dst;

	dst = ft_strjoin(leftover, tmp);
	free(leftover);
	return (dst);
}

char	*ft_read_line(int fd, char *leftover)
{
	size_t	bytes;
	char	*tmp;

	if (!leftover)
		return (NULL);
	tmp = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, tmp, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(tmp);
			free(leftover);
			return (NULL);
		}
		tmp[bytes] = '\0';
		leftover = ft_freejoin(leftover, tmp);
		if (ft_strchr(leftover, '\0'))
			bytes = 0;
	}
	free(tmp);
	return (leftover);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*leftover;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (NULL);
	leftover = read_line(fd, leftover);
	if (!leftover)
	{
		free(leftover);
		leftover = NULL;
		return (NULL);
	}
	line = ft_make_line(leftover);
	leftover = scrap(leftover);
	return (line);
}
