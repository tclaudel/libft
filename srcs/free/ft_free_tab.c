/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coscialp <coscialp@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:45:15 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/09 15:43:30 by coscialp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_free_tab(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		ft_strdel(&strs[i]);
		i++;
	}
	free(strs);
	return (0);
}
