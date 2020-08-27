#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n, x, y, max=0, t[21][21];
void find(int x, int i, int j);
int main()
{
	scanf("%d %d %d", &n, &x, &y);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &t[i][j]);
		}
	}
	max = t[y][x];
	find(max, y, x);
	printf("%d", max);
}
void find(int x, int i, int j)
{
	if (t[i + 1][j]>x && i+1 <= n && t[i + 1][j]<100)find(t[i + 1][j], i + 1, j);
	if (t[i - 1][j]>x && i-1 > 0 && t[i - 1][j] < 100)find(t[i - 1][j], i - 1, j);
	if (t[i][j + 1]>x && j+1 <= n && t[i][j+1] < 100)find(t[i][j + 1], i, j + 1);
	if (t[i][j - 1]>x && j-1 > 0 && t[i][j-1] < 100)find(t[i][j - 1], i, j - 1);
	if (x > max)max = x;
}