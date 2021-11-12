/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:56:02 by jforner           #+#    #+#             */
/*   Updated: 2021/07/23 09:25:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

int		ft_error_args(int argv);
int		ft_read_file(char *file);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_write_stdin(void);

#endif
