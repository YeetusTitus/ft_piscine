/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:54:44 by jforner           #+#    #+#             */
/*   Updated: 2021/07/29 10:41:44 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elementn;

	elementn = malloc(sizeof(t_list));
	elementn->data = data;
	elementn->next = NULL;
	return (elementn);
}

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin;
	t_list	*str_list;
	int		i;

	i = size;
	while (--i >= 0)
	{
		str_list = ft_create_elem(strs[i]);
		if (i == size - 1)
			begin = str_list;
		else
			ft_list_last(begin)->next = str_list;
	}
	ft_printage(begin);
	return (begin);
}
