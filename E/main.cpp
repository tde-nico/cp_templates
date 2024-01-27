#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

typedef long long int llint;

llint solve(llint a, llint b, llint c, llint d, llint e, vector<vector<llint>> &strade, vector<vector<llint>> &voli)
{
	// SCRIVI QUA IL TUO CODICE
	return (0);
}

int main()
{
	llint a;
	llint b;
	llint c;
	llint d;
	llint e;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;

	vector<vector<llint>> strade(b, vector<llint>(3));
	vector<vector<llint>> voli(c, vector<llint>(2));

	for(int i=0; i<b; i++) {
		for(int j=0; j<3; j++) {
			cin >> strade[i][j];
		}
	}
	for(int i=0; i<c; i++) {
		for(int j=0; j<2; j++) {
			cin >> voli[i][j];
		}
	}

	cout << solve(a, b, c, d, e, strade, voli) << endl;

	return (0);
}
