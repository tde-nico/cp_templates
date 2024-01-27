#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef long long int llint;

void	solve(llint N, llint *X, llint *Y, llint out[2] /* inserire in questa variabile l'output */)
{
	// SCRIVI QUA IL TUO CODICE
	out[0] = 0;
	out[1] = 0;
}

int main(void)
{
	llint N;
	assert(1 == scanf("%lld\n", &N));

	llint *X = (llint *) malloc(N * sizeof(llint));
	assert(X != NULL);
	llint *Y = (llint *) malloc(N * sizeof(llint));
	assert(Y != NULL);

	for(int i=0; i<N; i++) {
		assert(1 == scanf("%lld", &X[i]));
	}
	for(int i=0; i<N; i++) {
		assert(1 == scanf("%lld", &Y[i]));
	}

	llint *out = (llint *) malloc(2 * sizeof(llint));
	assert(X != NULL);
	solve(N, X, Y, out);
	printf("%lld %lld\n", out[0], out[1]);

	free(Y);
	free(X);

	return (0);
}
