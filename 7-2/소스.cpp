#include <stdio.h>

int main()
{
	int a, b;

	for (a = 1; a <= 5; a++)
	{
		for (b = 5; b >= 1; b--)
		{
			if (a < b)
				printf(" ");
			else
				printf("%d", b);
		}
		printf("\n");
	}
}