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
for (j = 0; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 9 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
