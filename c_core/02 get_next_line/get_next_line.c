/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:44:25 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/18 18:44:25 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//1
int	ft_endl(char	*ch)
{
	size_t	cnt;

	cnt = 0;
	while (ch[cnt] != '\n' && ch[cnt] != '\0')
		cnt++;
	if (ch[cnt] == '\n')
		return (1);
	return (0);
}

//2
char	*ft_read(int fd, char *store)
{
	char	*temp;
	int		readby;

	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	readby = 1;
	while (!ft_strchr(store, '\n') && readby != 0)
	{
		readby = read(fd, temp, BUFFER_SIZE);
		if (readby < 0)
		{
			free(store);
			free(temp);
			return (NULL);
		}
		temp[readby] = '\0';
		store = ft_strjoin(store, temp);
	}
	free (temp);
	return (store);
}

//3
char	*ft_currline(char *store)
{
	int		cnt;
	char	*str;

	cnt = 0;
	if (!store[cnt])
		return (NULL);
	while (store[cnt] && store[cnt] != '\n')
		cnt++;
	str = ft_substr_modified(store, 0, cnt + ft_endl(store));
	if (!str)
	{
		free (str);
		return (NULL);
	}
	return (str);
}

//4
char	*ft_addline(char *store)
{
	char	*str;
	int		cnt0;
	int		cnt1;

	cnt0 = 0;
	cnt1 = 0;
	while (store[cnt0] && store[cnt0] != '\n')
		cnt0++;
	if (!store[cnt0])
	{
		free(store);
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlen(store) - cnt0 + 1));
	if (!str)
		return (NULL);
	cnt0++;
	while (store[cnt0])
		str[cnt1++] = store[cnt0++];
	str[cnt1] = '\0';
	free (store);
	return (str);
}

//5
char	get_next_line(int fd)
{
	char		*line;
	static char	*store;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	store = ft_read(fd, store);
	if (!store)
		return (0);
	line = ft_currline(store);
	store = ft_addline(store);
	return (*line);
}
