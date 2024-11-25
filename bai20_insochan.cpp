#include <iostream>
using namespace std;
int main()
{
	int n, sochan, sole;
	cout << " nhap so:"; 
	cin >> n;
	
	cout << "cac so chan tu 1 den 100 ";
	///duyet tu 1 den n va in ra cac so chan 
	for (int i =2; i <= n; i +=2)
	{
		cout << i << " ";
	}
	return 0;
} 