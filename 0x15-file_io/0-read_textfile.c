#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: is the pointer to the name of the file to read
 * @letters: is the number of letters to read and print.
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	num_read = read(fd, buffer, letters);
	close(fd);
	if (num_read == -1)
	{
		free(buffer);
		return (0);
	}
	num_write = write(STDOUT_FILENO, buffer, num_read);
	free(buffer);
	if (num_read != num_write)
		return (0);
	return (num_write);
}
