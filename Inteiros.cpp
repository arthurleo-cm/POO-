#include <stdio.h>
/*

Exercício de inteiros

1)  Informar o número  de dígitos
2) somar todos os valores  dos dígitos
3)  multiplicar todos os valores dos dígitos
4)  indicar o numero de dígitos pares e o número de dígitos impares

*/


class INTEIROS
{
    private: int digitos,resultado,numero;
    
    public: void setNumero(int n)
    {
        numero = n;
        
        
    };
    
    public: int getNumero()
    {
     
        return numero;
    }
    
    public: int NumeroDigitos(int numero)
    {
       int contador = 0;
        
       do {
            numero = numero/10;
            contador++;
            
            
            
        }  while  (contador != 0);
        
        
       return contador;
       
    }
    public: int getNumeroDigitos()
    {
        
        return digitos;
        
    };
  
    
};

int main()
{
    printf("Hello World");

    return 0;
}
