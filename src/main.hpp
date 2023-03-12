#ifndef __MAIN_H__
#define __MAIN_H__

int sizeInput();
void matrixInput(double **m, int size);
void vectorInput(double *vetor, int size);
void printMatrix(double **m, int size);
void concatenateMatrix(double **m, double *vetor, int size);
void solve(double **m, int size);
void updateRow(double **m, int row, double factor, int size, int iteration);
int main();

struct fraction {
    int num;
    int denom;
    bool positive;
};

#endif