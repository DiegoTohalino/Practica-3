include <iostream>

using namespace std;

int main  (){
    
    int numero;
    printf ("Ingrese un numero: ");
    scanf ("%i",&numero);
    
    int dividir =0;
    for (int i=1 ; i<numero; i++){
        if (numero % i ==0) dividir +=i;
    }
    if (numero==dividir){
        printf ("El numero es perfecto");
    }
    else {
        printf  ("El numero no es perfecto");
    }
    return 0;
}