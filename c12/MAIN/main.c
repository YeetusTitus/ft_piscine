/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:08:19 by jforner           #+#    #+#             */
/*   Updated: 2021/07/28 16:09:28 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_printage(t_list *begin)
{
	while (begin)
	{
		printf("Begin===>%s\n", begin->data);
		begin = begin->next;
	}
}

int main()
{
	t_list 	i;
	t_list 	j;
	t_list 	k;
	int	*l;
	t_list 	*b;

	b = &i;
	l = 2;
	i.next = &j;
	i.data = "Yeet";
	j.next = &k;
	j.data = l;
	k.next = NULL;
	k.data = "chevre";
	printf("i===>%s\nj===>%s\nk===>%s\n<======>\n",i.data,j.data,k.data);
	ft_list_push_front(&b, "Slt les bros, c'est LRB");
	// printf("i===>%s\nj===>%s\nk===>%s\n",i.data,j.data,k.data);
}