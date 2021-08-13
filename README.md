Изначально всё написано для определенного Технического Задания. Код приведён в соответствиие с правилами norminette. Возможны доработки и дополнения.

Description: Write a function which returns a line read from a file descriptor, without the newline.

Parameters: #1. file descriptor for reading, #2. The value of what has been read

Return value: 1 : A line has been read, 0 : EOF has been reached, -1 : An error happened

External functs.: read, malloc, free

The program will be compiled in this way: gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
