#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)
{
int count = 1;
int second = 2;
int next;

printf("%d, %d, ", first, second);
for (int i = 2; i < 98; i++)
{
next = first + second;
printf("%d", next);
if (i < 97)
{
printf(", ");
}
first = second;
second = next;
}
printf("\n");
return (0);
}

