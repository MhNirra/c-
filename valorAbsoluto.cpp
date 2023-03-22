#include <iostream>

using namespace std;

int main(){

    float number; //Aca almacenamos el numero ingresado por el usuario
    cout<< "Ingrese el numero al cual le desea calcular el valor absoluto: ";
    cin>> number;
    cout<<"\nEl numero ingresado es: " << number;
    if(number >= 0){
        cout<<"\nEl valor absoluto del numero ingresado es: " << number; 

    }else{
        cout<<"\nEl valor absoluto del numero ingresado es: " << -number; 
    }
    return 0;
}
