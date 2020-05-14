#include <iostream>
using namespace std;

int factorial(int i){
    int n;
    int fact = 1;
    if(i<0) fact =0;
    else if(i==0) fact=1;
    else{
      for(n = 1; n <= i; n++){
        fact *= n;
    }}
    return fact;
}

int main(){
    cout << "¡Hola, mundo! \n ¿De qué numero quieres saber el factorial?" << endl;
    int numero;
    cin>>numero;
    
    cout << "El factorial es " <<factorial(numero)<< endl;
}