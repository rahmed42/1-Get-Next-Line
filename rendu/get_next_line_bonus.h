/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:11:06 by rahmed            #+#    #+#             */
/*   Updated: 2021/11/02 18:48:41 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	1000
# endif
# ifndef MAX_FD
#  define MAX_FD	65536
# endif

char	*get_next_line(int fd);
char	*free_ptr(char *ptr);
size_t	read_buffer(int fd, char **rest, char **buffer);
char	*set_lines(char **rest, char **line);
char	*get_next_line(int fd);
char	*ft_strchr_nl(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
