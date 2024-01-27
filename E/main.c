#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef long long int llint;

llint	solve(llint a, llint b, llint c, llint d, llint e, llint **strade, llint **voli)
{
	// SCRIVI QUA IL TUO CODICE
	return (0);
}

void	free_llint_matrix(llint **ptr)
{
	int	i;

	if (ptr == NULL)
		return ;
	i = -1;
	while (ptr[++i] != NULL)
	{
		free(ptr[i]);
		ptr[i] = NULL;
	}
	free(ptr);
	ptr = NULL;
}

llint	**alloc_llint_matrix(llint w, llint h)
{
	llint	**matrix;
	int	i;

	matrix = (llint **) malloc((h + 1) * sizeof(llint *));
	assert(matrix != NULL);
	i = -1;
	while (++i < h)
	{
		matrix[i] = (llint *) malloc(w * sizeof(llint *));
		assert(matrix[i] != NULL);
	}
	matrix[h] = NULL;
	return (matrix);
}

llint	**scan_llint_matrix(llint w, llint h)
{
	llint	**matrix;

	matrix = alloc_llint_matrix(w, h);
	for(int i=0; i<h; i++) {
		for(int j=0; j<w; j++) {
			assert(1 == scanf("%lld", &matrix[i][j]));
		}
	}
	return (matrix);
}

int main(void)
{
	llint a;
	llint b;
	llint c;
	llint d;
	llint e;
	assert(1 == scanf("%lld\n", &a));
	assert(1 == scanf("%lld\n", &b));
	assert(1 == scanf("%lld\n", &c));
	assert(1 == scanf("%lld\n", &d));
	assert(1 == scanf("%lld\n", &e));

	llint	**strade = scan_llint_matrix(3, b);
	llint	**voli = scan_llint_matrix(2, c);

	printf("%lld\n", solve(a, b, c, d, e, strade, voli));

	free_llint_matrix(voli);
	free_llint_matrix(strade);

	return (0);
}
