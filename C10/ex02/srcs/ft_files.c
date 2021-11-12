/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:15:37 by jforner           #+#    #+#             */
/*   Updated: 2021/07/26 21:24:55 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
char	*ft_read_file(char *file)
{
	int		ofile;
	char	buf[30000];
	int		size;
	int		error;

	ofile = open(file, O_RDONLY);
	if (ofile == -1 )
	{
		ft_puterror(strerror(errno));
		return (1);
	}
	size = read(ofile, buf, 30000);
	buf[size] = 0;
	error = close (ofile);
	if (error == -1 || size == -1)
	{
		ft_puterror(strerror(errno));
		return (0);
	}
	return (buf);
}

void	ft_write_stdin(void)
{
	char	buf[30000];
	int		i;
	int		error;

	while (1)
	{
		while (buf[i] != '\0')
		{
			buf[i] = '\0';
			i++;
		}
		error = read(STDIN_FILENO, buf, 30000);
		if (error == -1)
		{
			ft_puterror(strerror(errno));
			return ;
		}
	}
}
