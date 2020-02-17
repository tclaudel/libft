/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearcharset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:19:06 by tclaudel          #+#    #+#             */
/*   Updated: 2020/02/17 13:06:49 by tclaudel         ###   ########lyon.fr   */
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
	ret[lmalloc] = 0;
	return (ret);
}
