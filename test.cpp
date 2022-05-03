

#include <stdio.h>
#include <math.h>
#define N 6
int main()
{
	int a, b, i, c[N],d,flag;
	for (a = 0; a < 6; a++)
		scanf_s("%d", &c[a]);
	for (b = 1; b <= N - 1; b++)
	{
		flag = 0;
		for (i = 0; i < N - b; i++)
		{
			if (c[i] > c[i + 1])
			{
				d = c[i];
				c[i] = c[i + 1];
				c[i + 1] = d;
				flag = 1;
			}
		}
		if (flag == 0)
			printf("%d", flag);
	}
		for (a = 0; a < 6; a++)
		printf("%4d", c[a]);

	
}



