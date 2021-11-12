/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:54:39 by jforner           #+#    #+#             */
/*   Updated: 2021/07/28 10:27:42 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"
#include <stdlib.h>
t_list	*ft_create_elem(void *data)
{
	t_list	*elementn;

	elementn->data = malloc(sizeof(t_list));
	elementn->next = NULL;
	return (elementn);
}
