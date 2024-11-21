/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:44:15 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/18 18:44:15 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//1
size_t	ft_strlen(const char *var)
{
	size_t	cnt;

	cnt = 0;
	while (var[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

//2
char	*ft_strchr(const char *str, int ch)
{
	while (*str && *str != (char)ch)
		str++;
	if ((char)ch == *str)
		return ((char *)str);
	return (0);
}

//3
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	cnt;

	cnt = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (cnt < (size - 1) && src[cnt])
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[cnt] = '\0';
	return (ft_strlen(src));
}

//4
char	*ft_strjoin(char const *str0, char const *str1)
{
	char	*nwstr;
	size_t	len0;
	size_t	len1;

	len0 = ft_strlen(str0);
	len1 = ft_strlen(str1);
	nwstr = malloc((len0 + len1 + 1) * sizeof(char));
	if (nwstr == NULL)
		return (NULL);
	ft_strlcpy(nwstr, str0, len0 + 1);
	ft_strlcpy(&nwstr[len0], str1, len1 + 1);
	return (nwstr);
}

//5
char	*ft_substr_modified(char const *str, unsigned int start, size_t len)
{
	char	*nwstr;
	size_t	lenstr;

	if (!str)
		return (NULL);
	lenstr = ft_strlen(str);
	if (start >= lenstr)
	{
		nwstr = malloc(1 * sizeof(char));
		if (!nwstr)
			return (NULL);
		nwstr[0] = '\0';
		return (nwstr);
	}
	if (len > lenstr - start)
		len = lenstr - start;
	nwstr = malloc((len + 1) * sizeof(char));
	if (!nwstr)
		return (NULL);
	ft_strlcpy(nwstr, str + start, len + 1);
	return (nwstr);
}
