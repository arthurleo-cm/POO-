#include <cstdio>
#include <string>
using namespace std;

class DATA
{
private:
    int dia, mes, ano, diaSemana;

public:
    void setDiaCorrente(int dd)
    {
        dia = dd;
    }

    void setMesCorrente(int mm)
    {
        mes = mm;
    }

    void setAnoCorrente(int aaaa)
    {
        ano = aaaa;
    }

    void setDataCorrente(int dd, int mm, int aaaa)
    {
        dia = dd;
        mes = mm;
        ano = aaaa;
    }

    int calcularDiaSemana()
    {
        diaSemana = calcularDiaSemana(dia, mes, ano);
        return diaSemana;
    }

    int calcularDiaSemana(int dd, int mm, int aaaa)
    {
        int A, B, C, D, E;

        A = (14 - mm) / 12;
        B = aaaa - A;
        C = B % 100;
        D = B / 100;

        E = (dd + (13 * (mm + 12 * A + 1)) / 5
             + C + C / 4 + D / 4 + 5 * D) % 7;

        return E;
    }

    string getDiaSemana()
    {
        int resultado = calcularDiaSemana();
        return nomeDoDia(resultado);
    }

    string nomeDoDia(int n)
    {
        switch(n)
        {
            case 0:
                return "sabado";

            case 1:
                return "domingo";

            case 2:
                return "segunda feira";

            case 3:
                return "terca feira";

            case 4:
                return "quarta feira";

            case 5:
                return "quinta feira";

            case 6:
                return "sexta feira";

            default:
                return "dia invalido";
        }
    }

    int getDia()
    {
        return dia;
    }

    int getMes()
    {
        return mes;
    }

    int getAno()
    {
        return ano;
    }
};

int main()
{
    DATA d;

    d.setDataCorrente(25, 8, 2026);

    printf("Data corrente: %d/%d/%d\n",
           d.getDia(),
           d.getMes(),
           d.getAno());

    printf("Dia da semana: %s\n",
           d.getDiaSemana().c_str());

  
    return 0;
}
