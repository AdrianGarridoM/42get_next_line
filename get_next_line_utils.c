/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgarrid <adgarrid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:50:10 by adgarrid          #+#    #+#             */
/*   Updated: 2025/05/30 15:35:53 by adgarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return (str);
	return (NULL);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*ret;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ret = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!ret)
		return (NULL);
	dst = ret;
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (ret);
}

void	*ft_calloc(size_t times, size_t size)
{
	size_t			tsize;
	void			*pt;
	unsigned char	*ptc;

	tsize = times * size;
	pt = malloc (tsize);
	if (pt == NULL)
		return (NULL);
	ptc = (unsigned char *) pt;
	while (tsize--)
	{
		*ptc++ = '\0';
	}
}
