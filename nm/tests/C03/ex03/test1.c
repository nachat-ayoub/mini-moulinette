#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../../../ex03/ft_strncat.c"

#define GREEN "\033[38;5;84m"
#define RED "\033[31m"
#define GREY "\033[38;5;8m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"

int test1(void)
{
	char src[] = "Network";
	char dest[] = "42 ";

	if (strcmp(ft_strncat(dest, src, 7), "42 Network") != 0)
	{
		printf("    " RED "[1] ft_strncat(dest, src, 7) output %s\n" DEFAULT, ft_strncat(dest, src, 7));
		return (-1);
	}
	else
		printf("  " GREEN CHECKMARK GREY " [1] ft_strncat(dest, src, 7) output %s\n" DEFAULT, ft_strncat(dest, src, 7));
	return (0);
}

int main(void)
{
	if (test1() != 0)
		return (-1);
	return (0);
}