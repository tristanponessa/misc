
#include <stdio.h>

typedef struct			s_optional_args
{
		int					a;
			int					b;
				char				*error;
}						t_optional_args;

void	print(char *s, t_optional_args *args)
{
		if (args->error)
				{
							ft_printf("error %s\n", args->error);
									return ;
										}
			printf("%s: %d and %d\n", s, args->a, args->b);
}

# define print(s, ...)		print(s, &(t_optional_args){__VA_ARGS__})a

int		main(__unused int ac, __unused char **av)
{
		print("hello", .a = 12);
			print("hello", .error = "no numbers");
				print("test");

					socket(PF_INET, SOCK_DGRAM, IPPROTO_ICMP);
						return (0);
}

