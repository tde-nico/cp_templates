#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef long long int llint;

char *solve(llint N, llint M, llint *S)
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
		llint M;
		assert(2 == scanf("%lld %lld\n", &N, &M));

		llint *S = (llint *) malloc(N * sizeof(llint));
		assert(S != NULL);

		for(int i=0; i<N; i++) {
			assert(1 == scanf("%lld", &S[i]));
		}

		printf("%s\n", solve(N, M, S));
		free(S);
		--T;
	}
	return (0);
}
