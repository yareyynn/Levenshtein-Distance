#include "levenshtein.h"

int	levenshtein_distance(const char *str1, const char *str2, int matrix_flag)
{
	int	**matrix;
	int	row = strlen(str1);
	int	col = strlen(str2);
	int	i, j, result;

	/* (row + 1) x (col + 1) boyutunda bir tablo olusturuyoruz. */
	matrix = (int **)malloc((row + 1) * sizeof(int *));
	for (i = 0; i <= row; i++)
		matrix[i] = (int *)malloc((col + 1) * sizeof(int));

    /* Tabloyu dolduralim ve yazdiralim. i = 0 ve j = 0 baslangic degerleri kendi
	degerlerini alir. */
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			if (i == 0 || j == 0)
				matrix[i][j] = i + j;
			else if (str1[i - 1] == str2[j - 1])
				matrix[i][j] = matrix[i - 1][j - 1];			/* Eslesme */
			else
			{
				if (matrix[i][j - 1] <= matrix[i - 1][j] && matrix[i][j - 1] <= matrix[i - 1][j - 1])
					matrix[i][j] = matrix[i][j - 1] + 1;		/* Soldan geldi -> Ekleme */
				else if (matrix[i - 1][j] <= matrix[i][j - 1] && matrix[i - 1][j] <= matrix[i -1][j - 1])
					matrix[i][j] = matrix[i - 1][j] + 1;		/* Üstten geldi -> Silme */
				else
					matrix[i][j] = matrix[i - 1][j - 1] + 1;	/* Sol üstten geldi -> Değiştirme */
			}
		}
	}
	result = matrix[row][col];

	/* Istege gore matrisi yazdiralim. */
	if (matrix_flag == 1)
		print_matrix(matrix, row, col);

	/* Bellekten tabloyu temizleyelim. */
	for (int i = 0; i <= row; i++)
		free(matrix[i]);
	free(matrix);

	return (result);
}
