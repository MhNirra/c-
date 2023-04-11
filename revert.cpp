#include <iostream>

using namespace std;

int reverseNumber(int numb, int total = 0){

    if(numb == 0){
        return total;
    }
    else{
        total = total * 10 + numb % 10;
        return reverseNumber(numb / 10, total);
    }
}

int main(){

    int numb;
    
    cout<< "Ingrese el numero el cual desea invertir: ";
    cin>> numb;

    int total = reverseNumber(numb);

    cout<< "El numero a invertir es: "<< numb;
    cout<< "\nEl numero ya invertido es: "<< total;
    
    return 0;
}
