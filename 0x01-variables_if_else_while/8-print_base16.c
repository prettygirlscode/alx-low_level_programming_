#include <stdio.h>
int main(void)
{
	int i;
	for (i = 48; i<=57; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar(10);
	return (0);
}
