#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: filename
 * @letters: letters
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd;
	ssize_t frd, fwr;
	char *buff;

	if (filename)
		fd = open(filename, O_RDONLY);
	else
		return (0);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));

	if (buff)
	{
		frd = read(fd, buff, letters);
		fwr = write(STDOUT_FILENO, buff, frd);
	}
	else
		return (0);

	close(fd);

	free(buff);
	return (fwr);
}
