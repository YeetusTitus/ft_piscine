/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 10:43:29 by jforner           #+#    #+#             */
/*   Updated: 2021/07/29 11:20:44 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_printage(t_list *begin)
{
	while (begin)
	{
		printf("Begin===>%s\n", begin->data);
		begin = begin->next;
	}
}

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_free(void *data)
{
	free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	int	i;
	i = 0;
	ft_printage(begin_list);
	while (i == 0)
	{
		free_fct(ft_list_last(begin_list)->next);
		free_fct(ft_list_last(begin_list)->data);
		ft_list_last(begin_list)->next = NULL;
		i++;
	}	
}

int	main()
{
	t_list 	i;
	t_list 	j;
	t_list 	k;
	t_list 	l;
	t_list 	*b;

	b = &i;
	i.next = &j;
	i.data = "Yeet";
	j.next = &k;
	j.data = "2";
	k.next = &l;
	k.data = "chevre";
	l.next = NULL;
	l.data = "wesh";
	// printf("i===>%s\nj===>%s\nk===>%s\n<======>\n",i.data,j.data,k.data);
	ft_list_clear(b, &ft_free);
	// printf("i===>%s\nj===>%s\nk===>%s\n",i.data,j.data,k.data);
}