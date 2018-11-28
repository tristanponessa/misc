/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrumbac <agrumbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 20:05:56 by agrumbac          #+#    #+#             */
/*   Updated: 2017/03/09 08:54:37 by agrumbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include "get_next_line.h"

# define BLACK "\x1B[30m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define WHITE "\x1B[37m"
# define CRESET "\x1B[0m"

int	main(int ac, char **av)
{
	char	*line;
	int		fd[5];
	int		i;
	int		j;
	int		status;

	j = 1;
	i = 1;
	status = 1;
	printf(YELLOW"===========================================================\n"CRESET);
	printf(YELLOW"=            ----> "RED"BADASS "YELLOW"GNL CHECKER !! <----            =\n"CRESET);
	printf(YELLOW"===========================================================\n"CRESET);
	printf(RED"error test = %d\n"CRESET, get_next_line(13, &line));
	printf(RED"error test = %d\n"CRESET, get_next_line(-2, &line));
	printf(RED"error test = %d\n"CRESET, get_next_line(1, NULL));
	if (ac > 1)
	{
		while (i <= ac)
		{
			fd[i - 1] = open(av[i], O_RDONLY);
			i++;
		}
		i = 1;
		for (int j = 0; j < 10; j++)
		{
			i = 1;
			while (i < ac)
			{
				status = get_next_line(fd[i  - 1], &line);
				printf(CYAN"L%dGNL(%d):	%s fd[%d]		%sline{%s}\n"CRESET, j, status, fd[i - 1] % 3 ? (fd[i - 1] % 3 == 1 ? GREEN : YELLOW) : WHITE, fd[i - 1],line ? BLUE : RED , line);
				free(line);
				line = NULL;
				i++;
			}
		}
	}
	printf(YELLOW"===========================================================\n"CRESET);
	printf(YELLOW"=        ----> END OF "RED"BADASS "YELLOW"GNL CHECKER !! <----         =\n"CRESET);
	printf(YELLOW"===========================================================\n"CRESET);
	return (0);
}

/*
** int	main(int ac, char **av)
** {
** 	char	*line;
** 	int		fd;
**.
** 	fd = 0;
** 	if (ac == 2)
** 	{
** 		fd = open(av[1], O_RDONLY);
** 		if (fd == -1)
** 		{
** 			write(2, "open() error\n", 11);
** 			return (0);
** 		}
** 	}
** 	while (get_next_line(fd, &line))
** 	{
** 		printf("%s\n", line);
** 		free(line);
** 		line = NULL;
** 	}
** 	printf("=!=[%s]=!=\n", line);
** 	if (line)
** 		free(line);
** 	return (0);
** }
*/
