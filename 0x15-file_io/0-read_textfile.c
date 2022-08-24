#include "main.h"
/**
 * read_textfile - Read the text file
 * @filename: nameof the file
 * @letters: size of the letter to read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	char *buffer;
	ssize_t rd = 0, wr = 0;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	rd = read(file, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		close(file);
		return (0);
	}
	wr = write(1, buffer, rd);
	if (wr < 0)
		return (0);

	free(buffer);
	close(file);

	return (wr);
}
