/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:28:25 by jforner           #+#    #+#             */
/*   Updated: 2021/07/28 16:44:20 by jforner          ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*listn;
	int		i;

	i = 0;
	listn = ft_create_elem(data);
	listn->next = *begin_list;
}
