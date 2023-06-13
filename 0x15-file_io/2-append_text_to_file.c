#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int app;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
		;
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	app = write(fd, text_content, length);

	if (app == -1)
		return (-1);

	close(fd);

	return (1);
}
