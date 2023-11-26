#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void LietKe(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n, c;
	Nhap(a, m, n, c);
	LietKe(a, m, n, c);
	return 0;
}

void Nhap(int a[][100], int& m, int& n, int& c)
{
	cin >> m >> n >> c;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void LietKe(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n, c);
	if (a[m-1][c] % 2 == 0)
		cout << setw(4) << a[m-1][c];
}