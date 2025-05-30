/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgarrid <adgarrid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:49:36 by adgarrid          #+#    #+#             */
/*   Updated: 2025/05/30 14:12:28 by adgarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*make_line(char *leftover)
{
	return (void);
}

char	*read_line(int fd, char *line)
{
	return (void);
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
	line = make_line(leftover);
	leftover = scrap(leftover);
	return (line);
}
