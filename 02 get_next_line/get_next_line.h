/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:19:27 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/29 11:19:27 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* INCLUDES */
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* DEFINE -- NOT NEEDED */
// # define BUFFER_SIZE 42;

/* FUNCTIONS ON GET_NEXT_LINE.C */
char	*get_next_line(int fd);

/* FUNCTIONS ON GET_NEXT_LINE_UTILS.C */
size_t	ft_strlen(const char *var);
char	*ft_strchr_mod(const char *str, int ch);;
char	*ft_strjoin_mod(char *str0, char *str1);
char	*ft_substr_mod(char const *str, unsigned int start, size_t len);
int		ft_endl(char	*ch);

/* ADDITIONAL FUNCTIONS ON GET_NEXT_LINE.C */
char	*ft_read(int fd, char *store);
char	*ft_currline(char *store);
char	*ft_addline(char *store);

#endif
