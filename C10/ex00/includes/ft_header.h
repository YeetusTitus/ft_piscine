/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:56:02 by jforner           #+#    #+#             */
/*   Updated: 2021/07/22 18:08:16 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

int		ft_error_args(int argv);
int		ft_read_file(char *file);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);

#endif
