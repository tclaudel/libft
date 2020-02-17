/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_change_value.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coscialp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:56:41 by coscialp          #+#    #+#             */
/*   Updated: 2020/02/14 10:56:47 by coscialp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hash_change_value(t_hash *hash, char *key, void *value, char *type)
{
	t_hash	*add;
	t_hash	*top;

	top = hash->top;
	while (hash)
	{
		if (!ft_strcmp(hash->key, key))
		{
			ft_memdel((void *)&hash->value);
			hash->value = value;
			return ;
		}
		hash = hash->next;
	}
	add = ft_hashnew(key, value, type);
	hash = top;
	hash->add_back(&hash, add);
}
