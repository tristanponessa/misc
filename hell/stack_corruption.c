# include <stdio.h>
# include <string.h>

int		main(void)
{
	struct
	{
		int		before;
		char	buffer[8];
		int		after;
	}			data;

	memcpy(data.buffer, "~hello~", 8);
	data.before = 42;
	data.after = 42;

	printf("addresses          [%p][%p][%p]\n", &data.before, data.buffer, &data.after);

	printf("before overflow -> [%d][%s][%d]\n", data.before, data.buffer, data.after);
	printf("memory             [%.08x][%s][%.08x]\n", data.before, data.buffer, data.after);

	//overflow
	memcpy(data.buffer, "abcdefghijklmno", 12);

	printf("after overflow  -> [%d][%s][%d]\n", data.before, data.buffer, data.after);
	printf("memory             [%.08x][%s][%.08x]\n", data.before, data.buffer, data.after);

	return (0);
}
