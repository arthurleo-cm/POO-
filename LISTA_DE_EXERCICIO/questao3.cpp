/*
QUESTÃO 003. Desenvolver uma aplicação de software, utilizando o paradigma de
orientação a objetos, para efetuar a conversão de unidades de temperatura:
•De graus Celsius(C) para graus Fahrenheit(F):F=(9×C/5)+32)
•De graus Fahrenheit(F) para graus Celsius(C):C=(F−32)×+5/9
•De graus Celsius(C) para graus Kelvin(K):K=C+273.15
•De graus Kelvin(K) para graus Celsius(C):C=K−273.15
•De graus Celsius(C) para graus Réaumur(Re):Re=C∗4/5
•De graus Réaumur(Re) para graus Celsius(C):C=Re∗5/4
•De graus Kelvin(K) para graus Rankine(R):R=K∗1.8
•De graus Rankine(R) para graus Kelvin(K):K=R/1.8
Desenvolver, pelo menos, uma classe e os métodos pertinentes para atender aos
requisitos apresentados. Obrigatoriamente incorporar construtor, polimorfismo,
métodos get e set, e sobreposição de classe: toString [retorno: DEFINIR
PADRÃO] .
*/
#include <string>
#include <cstdio>
using namespace std;

class TEMPERATURA
{
private:
    float temperatura;

public:


    TEMPERATURA(float t = 0)
    {
        temperatura = t;
    }


    public: void setTemperatura(float t)
    {
        temperatura = t;
    }

    public: float getTemperatura()
    {
        return temperatura;
    }

    public: float CelsiusParaFahrenheit()
    {
        return (9 * temperatura / 5) + 32;
    }

   
    public: float FahrenheitParaCelsius()
    {
        return (temperatura - 32) * 5 / 9;
    }

    public: float CelsiusParaKelvin()
    {
        return temperatura + 273.15;
    }

  
    public: float KelvinParaCelsius()
    {
        return temperatura - 273.15;
    }


    public: float CelsiusParaReaumur()
    {
        return temperatura * 4 / 5;
    }

    
    public: float ReaumurParaCelsius()
    {
        return temperatura * 5 / 4;
    }

    
    public: float KelvinParaRankine()
    {
        return temperatura * 1.8;
    }

   
    public: float RankineParaKelvin()
    {
        return temperatura / 1.8;
    }

  
    public: virtual string toString()
    {
        return "Temperatura = " + to_string(temperatura);
    }
};



class TEMPERATURACELSIUS : public TEMPERATURA
{
public:

    TEMPERATURACELSIUS(float t = 0) : TEMPERATURA(t)
    {
    }

    public: string toString() override
    {
        return "Temperatura em Celsius = " + to_string(getTemperatura()) + " C";
    }
};


int main()
{
    float temperatura;

    TEMPERATURACELSIUS vtemperatura;

    printf("\nCONVERSAO DE UNIDADES DE TEMPERATURA");

    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    vtemperatura.setTemperatura(temperatura);

    printf("\nTEMPERATURA INFORMADA = %7.2f C",
           vtemperatura.getTemperatura());

    printf("\nCELSIUS PARA FAHRENHEIT = %7.2f F",
           vtemperatura.CelsiusParaFahrenheit());

    printf("\nCELSIUS PARA KELVIN = %7.2f K",
           vtemperatura.CelsiusParaKelvin());

    printf("\nCELSIUS PARA REAUMUR = %7.2f Re",
           vtemperatura.CelsiusParaReaumur());

    printf("\n");

    return 0;
}
