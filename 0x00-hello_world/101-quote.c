#include <unistd.h>
/**
 * main - The execution entry point of the program
 * Return: Integer 0 to indicate the end of the program
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, quote, sizeof(quote) - 1);
return (1);
}
