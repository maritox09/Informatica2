#include <iostream>
using namespace std;

int main(){
    int empleados = 5,x;
    float salario = 110.5f;
    float sueldoTotal, totalImpuesto;
    float tasaImpuesto = 0.1f
    
    sueldoTotal = empleados*salario;
    totalImpuesto = sueldoTotal*tasaImpuesto;
    
    cout<<"No de Empleados: " << empleados << endl;
    cout<<"Sueldo total: " << sueldoTotal << endl;
    cout<<"Impuestos a pagar: " << totalImpuesto << endl;
    
    empleados =+ 3;
    
    sueldoTotal = empleados*salario;
    totalImpuesto = sueldoTotal*tasaImpuesto;
    
    cout<<"No de Empleados: " << empleados << endl;
    cout<<"Sueldo total: " << sueldoTotal << endl;
    cout<<"Impuestos a pagar: " << totalImpuesto << endl;
    
    cin>>x;
    }
