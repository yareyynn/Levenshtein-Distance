#ifndef LEVENSHTEIN_H
# define LEVENSHTEIN_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		levenshtein_distance(const char *str1, const char *str2, int matrix_flag);
void	print_matrix(int **matrix, int row, int col);

#endif