#include "main.h"

/**
 *main - entry point into the function
 *Return: 0 on success
 */

int main(void)
{
char name[] = "_putchar\n";
int i;

for (i = 0; name[i] != '\0'; i++)
{
_putchar(name[i]);
}
return (0);
}
