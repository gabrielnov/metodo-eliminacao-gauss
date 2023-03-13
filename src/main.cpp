#include "main.hpp"
#include <iostream>
#include <iomanip> 
#include <cmath>

int main(){
	int size;
	float **m, *vetor;
	
	// size = sizeInput();
	size = 3;

	m = new float * [size];
	for (int i = 0; i < size; i++)
		m[i] = new float[size+1];
	
	vetor = new float [size];

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
	isolate(m, size);

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

void matrixInput(float **m, int size){
	std::cout << "Entrada de valores - matriz" << std::endl;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++){
			std::cout << "informe o valor da posição " << i << " x " << j << std::endl;
			std::cin >> m[i][j];
		}
}

void vectorInput(float *vetor, int size){
	std::cout << "Entrada de valores - vetor" << std::endl;
	for (int i = 0; i < size; i++){
			std::cout << "informe o valor da posição " << i << std::endl;
			std::cin >> vetor[i];
	}
}

void concatenateMatrix(float **m, float *vetor, int size){
	for (int i = 0; i < size; i++){
		m[i][size] = vetor[i];
	}
		
}

void printMatrix(float **m, int size){
	std::cout << std::endl;
	for (int i = 0; i < size; i++){
		for (int j = 0; j <= size; j++){
			std::cout << std::setfill(' ') << std::setw(8) << std::fixed <<  std::setprecision(2) << m[i][j] ;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
		
}

void solve(float **m, int size){
	float f;

	for (int i = 1; i < size; i++){
		for (int j = 0; j < i; j++){
			f = m[i][j] / m[j][j];
			updateRow(m, i, f, size, j);
		}
	}
}

void updateRow(float **m, int row, float factor, int size, int iteration){
	for(int i = 0; i <= size; i++){
		m[row][i] = m[row][i] - factor * m[iteration][i];
	}
}

void isolate(float **m, int size){
	float *v;
	v = new float[size];

	for (int i = size-1; i >= 0; i--){
		for(int j = size-1; j >= 0; j--){
			
			if (j == i){
				v[i] = m[i][size] / m[i][j];
				break;
			} else
				m[i][size] -= m[i][j] * v[j];
		}	
	}

	std::cout << std::endl;

	for (int i = 0; i < size; i++){
		std::cout << std::setfill(' ') << std::setw(4) 
		<< "x" << i << " = " 
		<< std::setfill(' ') 
		<< std::setw(5) << v[i] 
		<< std::endl;
	}

	std::cout << std::endl;

	delete[] v;
}