/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/04 15:00:06 by tclaudel     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/04 15:00:09 by tclaudel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_count_whitespaces(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_strchr(WHITESPACES, str[i]))
		i++;
	return (i);
}
