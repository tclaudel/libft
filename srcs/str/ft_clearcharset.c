/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearcharset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coscialp <coscialp@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:19:06 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/09 15:12:08 by coscialp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_clearcharset(char *str, char *charset)
{
	size_t	lmalloc;
	size_t	i;
	size_t	j;
	char	*ret;

	lmalloc = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_strchr(charset, str[i]))
			lmalloc++;
		i++;
	}
	ret = malloc((sizeof(char) * lmalloc + 1));
	i = 0;
	while (str[i])
	{
		if (!ft_strchr(charset, str[i]))
			ret[j++] = str[i];
		i++;
	}
	ft_strdel(&str);
	ret[lmalloc] = 0;
	return (ret);
}
