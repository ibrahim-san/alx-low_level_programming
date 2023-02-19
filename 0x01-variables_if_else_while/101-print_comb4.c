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
int k;
for (k = j + 1; k < 10; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 6 || j != 8 || k != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
