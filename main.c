#include <stdio.h>
#include "get_next_line.h"
# include <fcntl.h>

int 	main(void)
{
	char *line;
	int fd;

	fd = open("text.txt", O_RDONLY);
	while (get_next_line(fd, &line))
		printf("%s\n", line);
	printf("%s\n", line);
	return (0);
}
