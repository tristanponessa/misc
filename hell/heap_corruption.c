# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		main(void)
{
	char	*str  = malloc(64);	
	char	*str2 = malloc(64);
	
	memset(str, 'A', 63); str[63] = '\0';
	memset(str2, 'B', 63); str2[63] = '\0';

	printf("addresses          [%p][%p]\n", str, str2);

	printf("before overflow -> [%s]\n"
		   "                   [%s]\n", str, str2);

	//overflow
	memset(str, 'C', 100);

	printf("after overflow  -> [%s]\n"
		   "                   [%s]\n", str, str2);

	return (0);
}
