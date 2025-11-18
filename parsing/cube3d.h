/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:49:44 by tony              #+#    #+#             */
/*   Updated: 2025/11/18 15:22:40 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
#define CUB3D_H

#include "../utils/header/ft_printf.h"
#include "../utils/header/get_next_line.h"
#include "../utils/header/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void    check_fd(int fd);
int 	check_file(char *argv);
int 	count_lines(char *argv);
void    print_map(char **argv);
int 	check_space(char *str);
int		check_big_len(char **map);
char	**map_all(char **map, char *argv);
void	ft_error(char *str, char **map);
void	free_map(char **map);
int		check_nums(char *str);


#endif
