/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tablen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/06 14:21:27 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/06 14:23:09 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tablen(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
