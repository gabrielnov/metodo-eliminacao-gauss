#ifndef __MAIN_H__
#define __MAIN_H__

int sizeInput();
void matrixInput(float **m, int size);
void vectorInput(float *vetor, int size);
void printMatrix(float **m, int size);
void concatenateMatrix(float **m, float *vetor, int size);
void solve(float **m, int size);
int main();
#endif