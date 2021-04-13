#include <iostream>
using namespace std;

int main  (){
    
    //EJERCICIO 1//


    int numero;
    printf ("Ingrese un numero: ");
    scanf ("%i",&numero);
    
    
    for (int i=2 ; i<=numero; i++){
        int nprimos =0;
        for (int j=2 ; j<=i/2; j++){
            if (i % j==0){
                nprimos++;
                
            }     
        }
      if (nprimos<1){
          cout<<i<<" ";  
      }
    }




    //EJERCICIO 2//
    

    int numero2;
    printf ("\nIngrese un numero: \n");
    scanf ("%i",&numero2);
    
    int dividir =0;
    for (int i=1 ; i<numero2; i++){
        if (numero2 % i ==0) dividir +=i;
    }
    if (numero2==dividir){
        printf ("El numero SI es perfecto");
    }
    else {
        printf  ("El numero no es perfecto");
    }




    //EJERCICIO 3//


    int main() {
    int numero3;
    printf ("\nIngrese un numero: \n");
    scanf ("%i",&numero3);
    
    int a=0,b=1,c=1;
    cout<<"1 ";
    for(int i=1; i<numero3;i++){
        c= a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
   
   return 0;
}