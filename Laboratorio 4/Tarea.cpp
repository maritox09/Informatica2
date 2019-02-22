void porValor(int valor){
    valor = 42;
}

void porReferencia(int& valor){
    valor = 42;
}

int main(){
    int valor1 = 0;
    int valor2 = 0;

    porValor(valor1);
    porReferencia(valor2);

    printf("El resultado por valor es %i\n", valor1);
    printf("El resultado por referencia es %i\n", valor2);
}
// El Valor 1 es 42 ya que se paso la variable y no la referencia, lo cual permite modificar el valor de la variable
// El Valor 2 permanece como 0 ya que al dar una referencia no es posible modificar la variable
