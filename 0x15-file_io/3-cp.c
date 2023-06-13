#include "main.h"
#include <stdlib.h>

/**
* main - copy info from file_from to file_to.
* @ac: argument count
* @av: argument vector
* Return: Always 0.
*/

int main(int ac, char **av)
{
	int f_from, f_to;
	ssize_t  l_read = 1024, l_write, close_file;
	char content[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp f_from f_to\n");
		exit(97);
	}
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);
	}
	f_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (l_read == 1024)
	{
		l_read = read(f_from, content, 1024);
		if (l_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		l_write = write(f_to, content, l_read);
		if (l_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close_file = close(f_from);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", f_from);
		exit(100);
	}
	close_file = close(f_to);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", f_to);
		exit(100);
	}
return (0);
}
