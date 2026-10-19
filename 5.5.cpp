#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void gen(int V1, int V2, int n, int i, int a, int b, int c, int m, int level, int &depth)
{
	if (level > depth)
		depth = level;
	int V = (a * V1 + b * V2 + c) % m;
	cout << "level = " << level << endl;
	cout << "V" << i << " = " << V << endl;

	if (i < n)
		gen(V, V1, n, i + 1, a, b, c, m, level + 1, depth);
}

int main()
{
	srand((unsigned)time(NULL));
	int a = 48271, b = 16807, c = 12345, m = 2147483647, n;
	cout << "n = "; cin >> n;
	int V1 = rand() % m;
	int V2 = rand() % m;
	cout << "V1 = " << V1 << endl;
	cout << "V2 = " << V2 << endl;

	int depth = 0;
	gen(V1, V2, n, 3, a, b, c, m, 1, depth);
	cout << "depth = " << depth << endl;
	return 0;
}