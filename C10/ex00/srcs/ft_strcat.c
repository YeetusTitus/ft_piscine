/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:12:45 by jforner           #+#    #+#             */
/*   Updated: 2021/07/13 19:37:13 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*dest != '\0' )
	{
		dest++;
		count++;
	}
	while (*src != '\0' )
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	dest -= count;
	return (dest);
}
