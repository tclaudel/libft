/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_s_converter.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 10:38:30 by tclaudel     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 11:42:47 by tclaudel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_s_converter(char *str, size_t accu, char *flags)
{
	if (ft_char_in_string('.', flags) && accu == 0)
		return (ft_strdup(""));
	if (!str)
		str = "(null)";
	if (ft_char_in_string('.', flags) && accu < ft_strlen(str))
		return (ft_strndup(str, accu));
	return (ft_strdup(str));
}
