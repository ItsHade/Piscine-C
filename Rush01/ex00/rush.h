/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:04:57 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/15 19:57:01 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>

int		ft_is_solvable(char *str);

int		ft_checkformat(char *str);

int		ft_checkbase(char *str);

int		ft_max(char *str);

int		ft_total_digit(char *str);

int		ft_solve(int **matrix, int x, int y);

void	ft_display_matrix(int **matrix);

int		**ft_create_matrix(char *settings);

int		ft_legal_up(int **matrix, int x);

int		ft_legal_down(int **matrix, int x);

int		ft_legal_left(int **matrix, int y);

int		ft_legal_right(int **matrix, int y);

int		ft_check_legal(int **matrix);

int		ft_norm(int **matrix, int x, int y, int i);

#endif
