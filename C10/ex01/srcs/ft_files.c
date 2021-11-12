/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:15:37 by jforner           #+#    #+#             */
/*   Updated: 2021/07/27 19:44:39 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int	ft_read_file(char *file)
{
	int		ofile;
	char	buf[1];
	int		error;
	int		i;

	ofile = open(file, O_RDWR);
	if (ofile == -1)
		return (1);
	error = write (1, buf, 1);
	i = 0;
	while (i < sizeof(buf))
	{
		error = read(ofile, buf + i, sizeof(buf) - i);
		if (error == -1)
			return (1);
		if (error == 0)
			break ;
		error = write (1, buf + i, sizeof(buf) - i);
		if (error == -1)
			return (1);
		i += error;
	}
	error = close (ofile);
	return (0);
}

void	ft_write_stdin(char **argv)
{
	char	buf[1];
	int		i;
	int		error;

	while (1)
	{
		error = read(STDIN_FILENO, buf + i, sizeof(buf) - i);
		if (error == -1)
			return ;
		if (error == 0)
			break ;
		error = write(STDOUT_FILENO, buf + i, sizeof(buf) - i);
		if (error == -1)
			return ;
		i += error;
	}
	// error = read(STDIN_FILENO, buf, 30000);
	// error = write(STDOUT_FILENO, buf, strlen(buf));
	// if (error == -1)
	// {
	// 	ft_puterror(strerror(errno));
	// 	return ;
	// }

}
