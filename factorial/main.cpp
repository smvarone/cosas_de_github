#include <iostream>
using namespace std;

int factorial(int i){
    if(i<0) return 0;
    else if(i==0) return 1;
    else 
        return i*factorial(i-1);
}

int main(){
    cout << "¡Hola, mundo! \n ¿De qué numero quieres saber el factorial?" << endl;
    int numero;
    cin>>numero;
    
    cout << "El factorial es " <<factorial(numero)<< endl;
}
