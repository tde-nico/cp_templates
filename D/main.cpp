#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

typedef long long int llint;

void solve(llint N, vector<llint> &A, vector<llint> &B, vector<llint> &out /* inserire in questa variabile l'output */)
{
	// SCRIVI QUA IL TUO CODICE
	out.assign(0, 0);
	out.assign(1, 0);
}

int main()
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

	vector<llint> out(2);
	solve(N, A, B, out);
	cout << out[0] << " " << out[1] << endl;
	return (0);
}
