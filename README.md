Изначально всё написано для определенного Технического Задания. Код приведён в соответствиие с правилами norminette. Возможны доработки и дополнения.

Description: Write a function which returns a line read from a file descriptor.

Your function should return the line that has just been read. If there is nothing else to read or if an error has occurred it should return NULL.

The program will be compiled in this way: gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c

Important: You should always return the line that has been read followed by a ’\n’ unless you have reach end of file and the is no ’\n’.
