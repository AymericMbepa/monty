#include "monty.h"

/**
 * main - execute code
 * @argc: number of arguments passed to the programm
 * @argv: arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (file = open(argv[1], O_RDONLY) < 0)
	{
		fprintf(2, "Error: Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
