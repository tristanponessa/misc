#include <stdio.h>


int		tutu(int a, char *b)
{
	asm(".intel_syntax;"
		"mov qword ptr [rbp - 16], rdx");


	printf("%d %p\n", a, b);
	return (42);
}

typedef      int  (*same_t)(int, char*);

typedef      int  (*same_size_t)(int, int*);

typedef      int  (*different_size_t)(int, int);

typedef      int  (*less_args_t)(int);

typedef      int  (*more_args_t)(int, int*, void*);

int		main()
{
	more_args_t		tata;

	tata = tutu;

	int a;

	tata(42, &a, &main);
}
