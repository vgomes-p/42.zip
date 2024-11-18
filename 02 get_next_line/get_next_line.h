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

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define ARG_MAX 4096
# define OPEN_MAX 1024 //mudar se necessario

# define READ_OK 1
# define EOF_RCHD 0
# define ERR_HPND -1

# define NO_ENDLINE 0
# define FOUND_ENDLINE 1

int		get_next_line(int fd, char **line);

/* Utils */

size_t	ft_strlen(const char *var);
char	*ft_strdup(const char *str0);

#endif