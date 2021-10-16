#ifndef _SPARSE_MATRIX_H_
#define _SPARSE_MATRIX_H_

#include "matrix.h"

typedef struct
{
    int non_zero;
    double *elements;
    int *columns;
    int *row_pointers;
} sparse_matrix_t;

double *sm_allocate(sparse_matrix_t *sparse_matrix, matrix_t *matrix);
void sm_fill(sparse_matrix_t *sparse_matrix, matrix_t *matrix);
void sm_multiply(sparse_matrix_t *sparse_matrix, matrix_t *vector,
    matrix_t *result);

#endif // _SPARSE_MATRIX_H_
