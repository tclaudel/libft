/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coscialp <coscialp@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:37:39 by coscialp          #+#    #+#             */
/*   Updated: 2020/02/18 09:13:44 by coscialp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		change_top(t_hash **hash)
{
	t_hash	*top;

	top = *hash;
	while (*hash)
	{
		(*hash)->top = top;
		(*hash) = (*hash)->next;
	}
	(*hash) = top;
}

void			ft_hashdel(t_hash **hash, t_hash *before, t_hash *next)
{
	if (hash && before)
	{
		ft_memdel((void *)&(*hash)->key);
		ft_memdel((void *)&(*hash)->value);
		free(*hash);
		*hash = before;
		(*hash)->next = next;
		*hash = (*hash)->top;
	}
	else if (hash && next)
	{
		ft_memdel((void *)&(*hash)->key);
		ft_memdel((void *)&(*hash)->value);
		free(*hash);
		*hash = next;
		(*hash)->before = before;
		change_top(hash);
	}
	else if (!next && !before && hash)
	{
		ft_memdel((void *)&(*hash)->key);
		ft_memdel((void *)&(*hash)->value);
		free(*hash);
		*hash = NULL;
	}
}
