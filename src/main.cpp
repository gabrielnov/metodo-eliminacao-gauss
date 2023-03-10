#include <iostream>

int main(){
	int size, **matriz;
	size = sizeInput();

	return 0;
}

int sizeInput(){
	int ordem;

	std::cout << "Informe a ordem da matriz: ";
	std::cin >> ordem;
	return ordem;
}

void matrixInput(int **matriz, int size){
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++){
			std::cout << "informe o valor da posição " << i << " x " << j << std::endl;
			std::cin >> matriz[i][j];
		}
}

void solve(int **matriz){
	
}