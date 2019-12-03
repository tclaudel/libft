/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pourcent_converter.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 09:36:30 by tclaudel     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 11:42:35 by tclaudel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_pourcent_converter(void)
{
	char *c;

	if (!(c = malloc(sizeof(char) * 2)))
		return (NULL);
	c[0] = '%';
	c[1] = 0;
	return (c);
}
