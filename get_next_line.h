/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgarrid <adgarrid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 11:53:09 by adgarrid          #+#    #+#             */
/*   Updated: 2025/05/30 15:38:05 by adgarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*next_line(int fd, char *leftover);
char	*ft_read_line(int fd, char *leftover);
char	*make_line(char *leftover);

/*get next line utils*/

char	*ft_strchr(char *str, char c);
void	*ft_calloc(size_t n, size_t size);
size_t	ft_strlen(const char *c);
char	*ft_strjoin(const char *s1, const char *s2);

#endif