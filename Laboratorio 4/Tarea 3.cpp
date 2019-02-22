#include <iostream>
#include <math.h>
using namespace std;

float productoEscalar(const float* x, const float* y, const int dims){
	float cuenta;
	for(int i; i<dims; i++){
		cuenta += (x[i] * y[i]);
	}
	cuenta = roundf(cuenta * 100) / 100;
	return cuenta;
}

bool sonOrtogonales(const float* x, const float* y, const int dims){
	if(productoEscalar(x,y,dims) == 0){
		return true;
	} else {
		return false;
	}
}

int main(){
	int dimension;
    cout<<"Ingrese la dimension de los vectores"<<endl;
    cin>> dimension;
    float v1[dimension], v2[dimension];
    for(int i; i < dimension; i++){
    	cout<<"Ingrese el valor "<< i+1 <<" del vector 1" <<endl;
    	cin>>v1[i];
    	cout<<"Ingrese el valor "<< i+1 <<" del vector 2" <<endl;
    	cin>>v2[i];
    }
    cout<< "Es ortogonal? >> " << sonOrtogonales(v1, v2, dimension) <<endl;
}
