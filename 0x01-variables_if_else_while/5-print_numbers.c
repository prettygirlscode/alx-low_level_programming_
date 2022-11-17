#include <stdio.h>
int main(void)
{
	int i = 'z';
	
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
