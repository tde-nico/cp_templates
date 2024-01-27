#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef long long int llint;

char *solve(llint N, llint *A, llint *B)
{
	// SCRIVI QUA IL TUO CODICE
	return ("Yes");
}

int main(void)
{
	llint	T;
	assert(1 == scanf("%lld\n", &T));

	while (T > 0)
	{
		llint N;
		assert(1 == scanf("%lld\n", &N));

		llint *A = (llint *) malloc(N * sizeof(llint));
		assert(A != NULL);
		llint *B = (llint *) malloc(N * sizeof(llint));
		assert(B != NULL);

		for(int i=0; i<N; i++) {
			assert(1 == scanf("%lld", &A[i]));
		}
		for(int i=0; i<N; i++) {
			assert(1 == scanf("%lld", &B[i]));
		}

		printf("%s\n", solve(N, A, B));
		free(B);
		free(A);
		--T;
	}
	return (0);
}
