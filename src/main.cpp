#include "main.hpp"
#include <iostream>

int main(){
	int size;
	float **m, *vetor;
	
	size = sizeInput();

	m = new float * [size];
	for (int i = 0; i < size; i++)
		m[i] = new float[size+1];
	
	vetor = new float [size];

	matrixInput(m, size);
	vectorInput(vetor, size);
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
	std::cout << "\n";
	for (int i = 0; i < size; i++){
		for (int j = 0; j <= size; j++){
			std::cout << m[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
		
}

void solve(float **m, int size){
	float **x; 
	*x = new float [size];

	x = new float * [size];
	for (int i = 0; i < size; i++)
		x[i] = new float[size+1];


	delete[] x;
}