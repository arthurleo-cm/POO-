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

public:
	void setNumero(int n)
	{
		numero = n;
	};

public:
	int getNumero()
	{
		return numero;
	}

public:
	int NumeroDigitos()
	{
		int auxnumero = numero;
		digitos = 0;

		do {
			auxnumero = auxnumero/10;
			digitos++;



		}  while  (auxnumero != 0);


		return digitos;

	}
public:
	int getNumeroDigitos()
	{

		return digitos;

	};




public:
	int SomaDigitos()
	{
		int auxnumero = numero;
		soma = 0;
		do {
			digitos = auxnumero % 10;
			soma = soma + digitos;
			auxnumero = auxnumero / 10;
		} while (auxnumero != 0);

		return soma;
	};
public:
	int getSomaDigitos()
	{

		return soma;

	};
public:
	int ProdutoDigitos()
	{
		int auxnumero = numero;
		produto = 1;

		do
		{
			digitos = auxnumero % 10;
			produto = produto * digitos;
			auxnumero = auxnumero / 10;

		} while(auxnumero != 0);

		return produto;
	}
public:
	int getProdutoDigitos()
	{

		return produto;
	};

public:
	int NumeroDigitosPares()
	{
	    int auxnumero = numero;
		digitopar = 0;
		do{
        digitos = auxnumero % 10;
       
        if(digitos % 2 == 0)
        {
            digitopar++;
        }  
        
        auxnumero = auxnumero / 10;
        
		} while(auxnumero != 0);
		
		
		return digitopar;
    
	};

public:
	int NumeroDigitosImpares()
	{
	    int auxnumero = numero;
    	digitoimpar = 0;
		do{
        digitos = auxnumero% 10;
       
        if(digitos % 2 != 0)
        {
            digitoimpar++;
        }  
        
        auxnumero = auxnumero / 10;
        
	} while(auxnumero != 0);
	
    return digitoimpar;
};

public:
	int getDigitoPar()
	{
		return digitopar;
	}

public:
	int getDigitoImpar()
	{
		return digitoimpar;
	}

};

int main()
{
	INTEIROS vinteiros;
	int n;

	printf("REALIZANDO INTEIROS\n");
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	vinteiros.setNumero(n);
	printf("Numero: %d\n", vinteiros.getNumero());
	printf("Quantidade de digitos: %d\n", vinteiros.NumeroDigitos());
	printf("Soma dos digitos: %d\n", vinteiros.SomaDigitos());
	printf("O Produto dos digitos: %d\n", vinteiros.ProdutoDigitos());
	vinteiros.NumeroDigitosImpares();
	vinteiros.NumeroDigitosPares();
	printf("Quantidade de digitos pares: %d\n", vinteiros.getDigitoPar());
	printf("Quantidade de digitos impares: %d\n", vinteiros.getDigitoImpar());


	return 0;
}
