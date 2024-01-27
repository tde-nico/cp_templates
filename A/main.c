#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef long long int llint;

llint solve(llint A, llint B)
{
	// SCRIVI QUA IL TUO CODICE
	return (0);
}

int main(void)
{
	llint	T;
	assert(1 == scanf("%lld\n", &T));

	while (T > 0)
	{
		llint A;
		llint B;
		assert(2 == scanf("%lld %lld\n", &A, &B));

		printf("%lld\n", solve(A, B));
		--T;
	}
	return (0);
}
