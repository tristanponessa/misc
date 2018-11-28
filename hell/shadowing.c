












static void	shadowing(int array, char *b)
{
	tu array;

	write(1, b, array);
}



int			main(void)
{
	int		array = 2;
	char	*b = "2a";
	shadowing(array, b);
	return (0);
}
