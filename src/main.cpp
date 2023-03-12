#include "main.hpp"
#include <iostream>
#include <iomanip> 
#include <cmath>

int main(){
	int size;
	double **m, *vetor;
	
	// size = sizeInput();
	size = 3;

	m = new double * [size];
	for (int i = 0; i < size; i++)
		m[i] = new double[size+1];
	
	vetor = new double [size];

	// matrixInput(m, size);
	// vectorInput(vetor, size);
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;

	m[0][0] = 3;
	m[0][1] = 2;
	m[0][2] = 4;
	
	m[1][0] = 1;
	m[1][1] = 1;
	m[1][2] = 2;
	
	m[2][0] = 4;
	m[2][1] = 3;
	m[2][2] = -2;

	concatenateMatrix(m, vetor, size);
	printMatrix(m, size);
	solve(m, size);
	printMatrix(m, size);

	for (int i = 0; i < size; i++)
		delete[] m[i];
	delete[] m;
	
	delete[] vetor;

	return 0;
}

int sizeInput(){
	int ordem;

	std::cout << "Informe a ordem da matriz: ";
	std::cin >> ordem;
	return ordem;
}

void matrixInput(double **m, int size){
	std::cout << "Entrada de valores - matriz" << std::endl;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++){
			std::cout << "informe o valor da posição " << i << " x " << j << std::endl;
			std::cin >> m[i][j];
		}
}

void vectorInput(double *vetor, int size){
	std::cout << "Entrada de valores - vetor" << std::endl;
	for (int i = 0; i < size; i++){
			std::cout << "informe o valor da posição " << i << std::endl;
			std::cin >> vetor[i];
	}
}

void concatenateMatrix(double **m, double *vetor, int size){
	for (int i = 0; i < size; i++){
		m[i][size] = vetor[i];
	}
		
}

void printMatrix(double **m, int size){
	std::cout << "\n";
	for (int i = 0; i < size; i++){
		for (int j = 0; j <= size; j++){
			std::cout << std::setfill(' ') << std::setw(8) << std::fixed <<  std::setprecision(2) << m[i][j] ;
		}
		std::cout << "\n";
	}
	std::cout << "\n";
		
}

void solve(double **m, int size){
	double f;

	for (int i = 1; i < size; i++){
		for (int j = 0; j < i; j++){
			f = m[i][j] / m[j][j];
			updateRow(m, i, f, size, j);
		}
	}
}

void updateRow(double **m, int row, double factor, int size, int iteration){
	for(int i = 0; i <= size; i++){
		m[row][i] = m[row][i] - factor * m[iteration][i];
	}
}