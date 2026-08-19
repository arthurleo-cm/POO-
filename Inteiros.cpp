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
    private: int digitos,resultado,numero,digitopar,digitoimpar,soma,produto;
    
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
        digitos = 0;
        
       do {
            numero = numero/10;
            digitos++;
            
            
            
        }  while  (numero != 0);
        
        
       return digitos;
       
    }
    public: int getNumeroDigitos()
    {
        
        return digitos;
        
    };
  
    


public: int SomaDigitos(int numero)
{
    digitopar = 0;
    digitoimpar = 0;
    soma = 0;
    do{
        digitos = numero % 10;
        soma = soma + digitos;
        
        if(digitos % 2 == 0)
        {
            printf("O numero %d é par\n",digitos);
            digitopar++;
        }
        else
        {
            printf("O numero %d é impar\n",digitos);
            digitoimpar++;
        }
        numero = numero / 10;
    }while (numero != 0);
    
    return soma;
};
 public: int getSomaDigitos()
    {
        
        return soma;
        
    };
public: int ProdutoDigitos(int numero)
{
    produto = 1;
    
    do
    {
        digitos = numero % 10;
        produto = produto * digitos;
        numero = numero / 10;
        
    }while(numero != 0);
    
    return produto;
}
 public: int getProdutoDigitos()
    {
        
        return produto;
    };
    
    
public: int getDigitoPar()
{
    return digitopar;
}

public: int getDigitoImpar()
{
    return digitoimpar;
}



};

int main()
{
    INTEIROS obj;

    obj.setNumero(24680);

    printf("Numero: %d\n", obj.getNumero());
    printf("Quantidade de digitos: %d\n", obj.NumeroDigitos(obj.getNumero()));
    printf("Soma dos digitos: %d\n", obj.SomaDigitos(obj.getNumero()));
    printf("O Produto dos digitos: %d\n", obj.ProdutoDigitos(obj.getNumero()));
    printf("Quantidade de digitos pares: %d\n", obj.getDigitoPar());
    printf("Quantidade de digitos impares: %d\n", obj.getDigitoImpar());
    

    return 0;
}
