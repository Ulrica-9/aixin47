#include <stdio.h> 
#define M 9
void main()
{
	int i, j, n, aa[M][M];
	printf("请输入一个n来确定数组为几维:");
	scanf_s("%d", &n);
	while (1)
	{
		if (n >= 2 && n <= 9)
		{
			break;
		}
		else
		{
			printf("Plesae enter a number again:");
			scanf_s("%d", &n);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			aa[i][j] = (i + 1) * (j + 1);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%-5d", aa[i][j]);
		}
		printf("\n");
	}
	
}
