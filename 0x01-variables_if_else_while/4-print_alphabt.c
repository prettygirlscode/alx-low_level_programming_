#include <stdio.h>
int main(void)
{
	int i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			continue;
		if (i == 'q')
			continue;

		else
			putchar(i);
	}

	return (0);
}
