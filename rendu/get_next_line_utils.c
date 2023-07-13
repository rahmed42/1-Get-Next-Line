/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:11:36 by rahmed            #+#    #+#             */
/*   Updated: 2021/11/02 16:08:27 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_strchr_nl(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str)
		return (NULL);
	while (i < len_s1)
		str[i++] = s1[j++];
	j = 0;
	while (i < (len_s1 + len_s2))
		str[i++] = s2[j++];
	str[len_s1 + len_s2] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	unsigned long	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*tab;
	int		i;
	int		lensrc;

	i = 0;
	lensrc = ft_strlen(s1);
	tab = (char *)malloc((lensrc + 1) * sizeof(*tab));
	if (!tab)
		return (NULL);
	while (i < lensrc)
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	len_s;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		len = 0;
	else if (len > len_s - start)
		len = len_s - start;
	subs = (char *)malloc((len + 1) * sizeof(*subs));
	if (!subs)
		return (NULL);
	while ((i < len) && ((start + i) < len_s))
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
