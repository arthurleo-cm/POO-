#include <string>
using namespace std;

class APOSENTADORIA
{
    //Definir os atributos/variaveis
private: float valorinicial, valormensal, totalAplicado;
private: float taxaMensal;
private: int totalMeses;
       //Cadastrar os valores
public: void setValores(float vlIncial, float vlMensal, float vlTXMensal, int vlTMensal)
{
    valorinicial = vlIncial;
    valormensal = vlMensal;
    taxaMensal = vlTXMensal;
    totalMeses = vlTMensal;

};
      //Implementar um metodo para calcular o valor da aplicação após N meses

public: float calcularAplicacao()
{
    totalAplicado = valorinicial;

    printf("\n Mes[%d] saldo aplicado: R$ %.2f", 0 ,totalAplicado);

    for (int cont = 1;cont <= totalMeses;cont++)
    {
        totalAplicado = totalAplicado + totalAplicado * taxaMensal / 100 + valormensal;
        printf("\nMES[%d] SALDO APLICACAO: R$ %.2f", cont, totalAplicado);
    }

    return totalAplicado;
};
      //Recuperação de valores
public: float getSaldo()
{
    return totalAplicado;
}



};
int main()
{
    APOSENTADORIA vaposentadoria;
    float vlInicial, vlMensal, vlTXMensal, totalAplicado;
    int vltMensal;
    printf("\n FAZENDO CALCULO DE APOSENTADORIA:");
    printf("\n Digite o valor inicial:  ");
    scanf_s("%f", &vlInicial);
    printf(" Digite o Valor do Aporte:  ");
    scanf_s("%f",&vlMensal);
    printf(" Digite a Taxa Mensal: ");
    scanf_s("%f", &vlTXMensal);
    printf(" Digite os Meses: ");
    scanf_s("%i",&vltMensal);
    vaposentadoria.setValores(vlInicial, vlMensal, vlTXMensal, vltMensal);
    vaposentadoria.calcularAplicacao();
    totalAplicado = vaposentadoria.getSaldo();
    





    return 0;
}
