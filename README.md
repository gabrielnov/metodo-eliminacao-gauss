## Método De Eliminação de Gauss (com pivotamento)

Algoritmo numérico escrito em C++ que tendo como dados de entrada a ordem n da matriz, a matriz A (nxn) e o vetor b(nx1), determina a solução do sistema linear Ax=b pelo método de Método de Eliminação de Gauss com pivotamento.

## Execução

### Linux ou MacOS

1. Compilar arquivo com g++ ou gcc

``` cd src && g++ main.hpp main.cpp -o gauss.out ```

1. Executar o arquivo

``` ./gauss.out```

### Windows

1. Compilar arquivo com g++ ou gcc

``` dir src && g++ main.hpp main.cpp -o gauss.exe ```

1. Executar o arquivo

``` .\gauss.exe```

## Exemplos

### Entrada


| x1  | x2  | x3  | x4  | b |
| :---: | :---: | :---: | :---: | :---: |
| 1   |  4  | -2  | 2  |  8  |
| 2   |  3  |  1  | 3  | 8   |
| 1   |  5  | -5  | 3  |  18 |
| 2   |  4  | -4  | 0  | 12  |
   
 
### Saída

```
   x0 =  4.00
   x1 = -2.00
   x2 = -3.00
   x3 =  3.00
```
