#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

typedef long long int llint;

string solve(llint N, vector<llint> &A, vector<llint> &B)
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
		cin >> N;

		vector<llint> A(N);
		vector<llint> B(N);

		for(int i=0; i<N; i++) {
			cin >> A[i];
		}
		for(int i=0; i<N; i++) {
			cin >> B[i];
		}

		cout << solve(N, A, B) << endl;
		--T;
	}
	return (0);
}
