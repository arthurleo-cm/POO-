#include <string>
using namespace std;

class PARCELAMENTO
{
private: float valorCompra, percentual, valorFinal, valorParcela;
private: int nparcelas;

public: void setValores(float valor, int parcelas)
{
    valorCompra = valor;
    nparcelas = parcelas;
};

public: float calcular()
{
    // Pagamento à vista
    if (nparcelas == 1)
    {
        percentual = -20;
    }
    // 2 ou 3 parcelas
    else if (nparcelas >= 2 && nparcelas <= 3)
    {
        percentual = 5;
    }
    // 4 a 7 parcelas
    else if (nparcelas >= 4 && nparcelas <= 7)
    {
        percentual = 10;
    }
    // 8 ou 9 parcelas
    else if (nparcelas >= 8 && nparcelas <= 9)
    {
        percentual = 15;
    }
    // 10 ou 11 parcelas
    else if (nparcelas >= 10 && nparcelas <= 11)
    {
        percentual = 20;
    }
    // 12 a 19 parcelas
    else if (nparcelas >= 12 && nparcelas <= 19)
    {
        percentual = 25;
    }
    // 20 parcelas
    else if (nparcelas == 20)
    {
        percentual = 30;
    }

    valorFinal = valorCompra + (valorCompra * percentual / 100);

    valorParcela = valorFinal / nparcelas;

    return valorParcela;
};

public: float getValorCompra()
{
    return valorCompra;
}

public: int getNparcelas()
{
    return nparcelas;
}

public: float getPercentual()
{
    return percentual;
}

public: float getValorFinal()
{
    return valorFinal;
}

public: float getValorParcela()
{
    return valorParcela;
}

};

int main()
{
    float valor, parcela;
    int nparcelas;

    PARCELAMENTO compra;

    printf("\nFAZENDO CALCULO DO PARCELAMENTO");

    printf("\nDigite o valor da compra: R$ ");
    scanf("%f", &valor);

    printf("\nDigite o numero de parcelas: ");
    scanf("%d", &nparcelas);

    compra.setValores(valor, nparcelas);

    parcela = compra.calcular();

    printf("\nValor da compra = R$ %7.2f", compra.getValorCompra());
    printf("\nNumero de parcelas = %d", compra.getNparcelas());
    printf("\nPercentual aplicado = %7.2f%%", compra.getPercentual());
    printf("\nValor final = R$ %7.2f", compra.getValorFinal());
    printf("\nValor de cada parcela = R$ %7.2f", parcela);

    return 0;
}
