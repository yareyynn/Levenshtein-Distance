#include "levenshtein.h"

/* Matrisi ekrana yazdirmamizi saglayan fonksiyon. */
void	print_matrix(int **matrix, int row, int col)
{
	int	i, j;

	printf("\nMatrix:\n\n");
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
			printf("%-2d ", matrix[i][j]);
		printf("\n");
	}
}
