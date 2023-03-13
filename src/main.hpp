#ifndef __MAIN_H__
#define __MAIN_H__

int sizeInput();
void matrixInput(float **m, int size);
void vectorInput(float *vetor, int size);
void printMatrix(float **m, int size);
void concatenateMatrix(float **m, float *vetor, int size);
void solve(float **m, int size);
void updateRow(float **m, int row, float factor, int size, int iteration);
int main();

struct fraction {
    int num;
    int denom;
    bool positive;
};

#endif