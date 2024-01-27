#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

typedef long long int llint;

string solve(llint N, llint M, vector<llint> &S)
{
	// SCRIVI QUA IL TUO CODICE
	return ("Yes");
}

int main()
{
	llint T;
	cin >> T;

	while (T > 0)
	{
		llint N;
		llint M;
		cin >> N;
		cin >> M;

		vector<llint> S(N);

		for(int i=0; i<N; i++) {
			cin >> S[i];
		}

		cout << solve(N, M, S) << endl;
		--T;
	}
	return (0);
}
