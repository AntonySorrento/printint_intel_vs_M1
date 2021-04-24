# include <stdio.h>
# include <stdarg.h>

void onebyone(va_list args, int i)
{
	int value;
	
	value = va_arg(args, int);
	printf ("%d : %d\n", i, value);
}

void print_ints(int num, ...)
{
	va_list args;
	int i;

	va_start(args, num);

	for (i = 0; i < num; i++)
	{
		onebyone(args, i);
	}
	va_end(args);
}
int main()
{
	print_ints(3, 24, 26, 312);
	print_ints(2, 256, 512);
	print_ints(7, 1, 2, 3, 4, 5, 6, 7);
}
