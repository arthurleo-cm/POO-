/******************************************************************************
A  Dra. Panturrylya Hermyonny Potterz, Oficial Maior do Cartório de Rapidópolis,  é a responsável pelo preenchimento de todos os formulários que são registrados.
  De acordo com as novas regras para escrituração, todas as datas devem ser precedidas   do dia da semana, ou seja, sempre que uma data for inserida em um texto,    o dia da semana deve ser escrito, veja o exemplo: quinta feira 20/08/2026 .

Dada uma data DD/MM/AAAA, onde DD indica o dia, MM o mês e AAAA o ano,  para determinar o dia da semana deve-se efetuar os seguintes cálculos:

A = (int)((12-mes) / 10)
B = ano - A
C = mes + (12 * A)
D = (int )(B / 100)
E = (int) (D/4)
F = 2 - D + E
G = (int)(365.25 * B)
H = (int)(30.6001 * (C + 1))
I = (int) ((F+G) + (H + dia) + 5)

# O DIA DA SEMANA É O RESTO DE I / 7
#    onde 0=SÁBADO 1=DOMINGO 2=SEGUNDA FEIRA 3=TERÇA FEIRA
#         4=QUARTA FEIRA 5=QUINTA FEIRA 6=SEXTA FEIRA
diasemana = I % 7

  Você foi escolhido(a) para desenvolver o algoritmo e efetuar a implementação em C++, de um software, utilizando paradigma de orientação a objetos, incorporando, pelo menos,   os seguintes métodos:

  setDiaCorrente(dd) feito
  setMesCorrente(mm) feito
  setAnoCorrente(aaaa) feito
  setDataCorrente(dd,mm,aaaa) feito
  calcularDiaSemana() feito
  calcularDiaSemana(dd,mm,aaaa)   //SEM ATUALIZAR DATA CORRENTE - PROPOR SOLUCAO
  getDiaSemana()  //COM DATA CORRENTE

*******************************************************************************/
#include <stdio.h>

class DIASEMANA
{
private:
	int dia,mes,ano,diasemana;
	
public: void setDiaCorrente(int d)
{
    dia = d;
}
public: void setMesCorrente(int m)
{
    mes = m;
}	
public: void setAnoCorrente(int a)
{
    ano = a;
}	
	
//METODO CONSTRUTOR
public: DIASEMANA()
{
    dia = -1;
    mes = -1;
    ano = -1;
    diasemana = -1;
}

public:
	void setDataCorrente(int d,int m,int a)
	{
		dia=d;
		mes=m;
		ano=a;
		diasemana=-1;
	};
public:
	int calcularDiaSemana()
	{
		int A,B,C,D,E,F,G,H,I;

		A = (int)((12-mes) / 10);
		B = ano - A;
		C = mes + (12 * A);
		D = (int )(B / 100);
		E = (int) (D/4);
		F = 2 - D + E;
		G = (int)(365.25 * B);
		H = (int)(30.6001 * (C + 1));
		I = (int) ((F+G) + (H + dia) + 5);

		diasemana = I % 7;

		return diasemana;
	};
public: int getDiaSemana()
{
    return diasemana;
}


};
int main()
{
	int dd,mm,aa;
	int ds;
	DIASEMANA diasemana;


	printf("\nDigite o dia\n");
	scanf("%d",&dd);
	printf("\nDigite o mes\n");
	scanf("%d",&mm);
	printf("\nDigite o ano\n");
	scanf("%d",&aa);

	// diasemana.setDataCorrente(dd,mm,aa);
	// diasemana.calcularDiaSemana();
	 ds=diasemana.getDiaSemana();
	printf("\n\nDATA: %02d/%02d/%04d - %d ", dd,mm,aa,ds);
	switch(ds)
	{
	case 0:
		printf("SABADO");
		break;
	case 1:
		printf("DOMINGO");
		break;
	case 2:
		printf("SEGUNDA-FEIRA");
		break;
	case 3:
		printf("TERÇA-FEIRA");
		break;
	case 4:
		printf("QUARTA-FEIRA");
		break;
	case 5:
		printf("QUINTA-FEIRA");
		break;
	case 6:
		printf("SEXTA-FEIRA");
		break;
	default:
		printf("ERRO DE CLASSE");
		break;
	}

	return 0;
}
