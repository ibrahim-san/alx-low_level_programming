#include <stdio.h>
/**
 *main - entry point
 *Return: integer 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
int j;
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
