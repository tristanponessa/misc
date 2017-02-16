/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eight_queens.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrumbac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 18:47:53 by agrumbac          #+#    #+#             */
/*   Updated: 2017/02/16 18:48:10 by agrumbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef int		chess[8][8];

void	printboard(chess board)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 8)
			printf("-%d", board[i][j]);
		printf("-\n");
	}
	printf("\n");
}

int		check(chess board, int row, int col)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 8)
	{
		if (board[row][i] != 0 || board[i][col] != 0)
			return (0);
	}
	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 8)
			if (board[i][j] != 0)
				if (abs(row - i) == abs(col - j))
					return (0);
	}
	return (1);
}

int		find(chess board, int row, int col)
{
	printboard(board);
	//system("sleep 0.1");
	system("clear");
	printf(" eight queen %i-%i \n", row, col);
	if (row > 7)
		return (1);
	if (col > 7)
		return (-1);
	if (!(check(board, row, col)))
		return (find(board, row, col + 1));
	board[row][col] = 1;
	if (find(board, row + 1, 0) == -1)
	{
		board[row][col] = 0;
		return (find(board, row, col + 1));
	}
	return (1);
}

int		queens(void)
{
	chess	board;
	int	i;
	int	j;

	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 8)
			board[i][j] = 0;
	}
	find(board, 0, 0);
	printboard(board);
	return (0);
}
