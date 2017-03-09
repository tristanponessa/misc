

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colleen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrumbac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 05:55:36 by agrumbac          #+#    #+#             */
/*   Updated: 2017/03/09 06:13:00 by agrumbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			main(void)
{
	/*
	 * warning this is a self-replicating program :D
	 */
	char	*start = "\n\
/* ************************************************************************** */\n\
/*                                                                            */\n\
/*                                                        :::      ::::::::   */\n\
/*   Colleen.c                                          :+:      :+:    :+:   */\n\
/*                                                    +:+ +:+         +:+     */\n\
/*   By: agrumbac <marvin@42.fr>                    +#+  +:+       +#+        */\n\
/*                                                +#+#+#+#+#+   +#+           */\n\
/*   Created: 2017/03/09 05:55:36 by agrumbac          #+#    #+#             */\n\
/*   Updated: 2017/03/09 06:03:28 by agrumbac         ###   ########.fr       */\n\
/*                                                                            */\n\
/* ************************************************************************** */\n\
\n\
#include <stdio.h>\n\
\n\
int			main(void)\n\
{\n\
	/*\n\
	 * warning this is a self-replicating program :D\n\
	 */\n\
	char	*start = \"";
	char	*end = "\
	printf(\"%s%s\";\\n	char	*end = \"\\n%s\";%s\", start, start, end, end);\n\
}";	printf("%s%s\";\n	char	*end = \"\n%s\";%s", start, start, end, end);
}
