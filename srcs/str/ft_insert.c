/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:43:40 by tclaudel          #+#    #+#             */
/*   Updated: 2020/02/17 13:06:57 by tclaudel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_insert(char *src, char *insered, size_t n, int free_option)
{
	char	*dest;

	dest = ft_strndup(src, n);
	dest = ft_strfjoin(dest, insered, 1);
	dest = ft_strfjoin(dest, src + n, 1);
	if (free_option == 1)
		free(src);
	return (dest);
}
