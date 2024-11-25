/* ************************************************************************** */
/*                                                                            */
/*   ft_substr_modified.c                                                     */
/*   Modified to be used on get_next_line                 :::      ::::::::   */
/*   project, not required by 42 curriculum             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 00:12:44 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/11/21 00:12:44 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

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
