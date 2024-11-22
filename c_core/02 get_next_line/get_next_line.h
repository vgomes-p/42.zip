/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:44:33 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/18 18:44:33 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* ******** */
/* INCLUDES */
/* ******** */
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* ******** */
/* INCLUDES */
/* ******** */
// # define BUFFER_SIZE 42;

/* **************************** */
/* FUNCTIONS ON GET_NEXT_LINE.C */
/* **************************** */
char	get_next_line(int fd);

/* ********************************** */
/* FUNCTIONS ON GET_NEXT_LINE_UTILS.C */
/* ********************************** */
size_t	ft_strlen(const char *var);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strjoin(char const *str0, char const *str1);
char	*ft_substr_modified(char const *str, unsigned int start, size_t len);

/* *************************************** */
/* ADDITIONAL FUNCTIONS ON GET_NEXT_LINE.C */
/* ************************************** */
int		ft_endl(char	*ch);
char	*ft_read(int fd, char *store);
char	*ft_currline(char *store);
char	*ft_addline(char *store);

#endif