#include <iostream>

int main(){
    int valor1 = 1;
    int valor2 = 1;

    int resultado = ++valor1 + valor2++; //El resultado es 3 ya que ++valor aumenta despues de realizada la accion y valor++ aumenta antes.
    //es decir que esta sumando 1(que luego sera 2) + 2

    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
}
