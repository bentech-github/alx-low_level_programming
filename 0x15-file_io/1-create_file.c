#include "main.h"
/**
 * create_file - Entry Point to createa file
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file = 0;
	int a = 0;
	ssize_t wr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[a] != '\0')
			a++;
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file < 0)
{
	return (-1);
}
wr = write(file, text_content, a);
if (wr < 0)
	return (-1);
close(file);
return (1);
}
