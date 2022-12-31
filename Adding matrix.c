#include <stdio.h>
#include <stdlib.h>

int main() {
  int m, n; // dimensions of the matrices
  int i, j; // loop variables

  // read in the dimensions of the matrices
  printf("Enter the number of rows and columns of the matrices: ");
  scanf("%d%d", &m, &n);

  // allocate memory for the matrices
  int **A = (int **)malloc(m * sizeof(int *));
  int **B = (int **)malloc(m * sizeof(int *));
  int **C = (int **)malloc(m * sizeof(int *));
  for (i = 0; i < m; i++) {
    A[i] = (int *)malloc(n * sizeof(int));
    B[i] = (int *)malloc(n * sizeof(int));
    C[i] = (int *)malloc(n * sizeof(int));
  }

  // read in the matrices
  printf("Enter matrix A: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  printf("Enter matrix B: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  // perform matrix addition
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  // print the result
  printf("Resulting matrix C: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  // free the allocated memory
  for (i = 0; i < m; i++) {
    free(A[i]);
    free(B[i]);
    free(C[i]);
  }
  free(A);
  free(B);
  free(C);

  return 0;
}
