#include <string>
using namespace std;

class IMC
{
    private: float peso,altura,vIMC;
    
    public: void setValores(float p,float a)
    {
        peso = p;
        altura = a;
    };
    public: float calcular()
    {
        vIMC = (peso / (altura * altura));
        return vIMC;
    };
    public: float getIMC()
    {
      return vIMC;  
    };
     public: float getPeso()
    {
        return peso;
    }
    public: float getAltura()
    {
        return altura;
    }
};
int main()
{
    float p,a,imc;
    
    IMC vimc;
    printf("\nFAZENDO CALCULO DE IMC");
    printf("\nDigite o seu peso:  ");
    scanf("%f",&p);
    printf("\nDigite a sua altura:  ");
    scanf("%f",&a);
    vimc.setValores(p,a);
    vimc.calcular();
    printf("\nO IMC É = %7.2f",vimc.getIMC());
    
    if(vimc.getIMC() < 18.5)
    {
        printf("\nVocê está abaixo do peso");
    }
    else if(vimc.getIMC() >= 18.5 && vimc.getIMC() <= 24.9)
    {
        printf("\nVocê está com o seu peso normal");
    }
    else if(vimc.getIMC() >= 25 && vimc.getIMC() <= 29.9)
    {
        printf("\nVocê está com sobrepeso");
    }
    else
    {
        printf("\nVocê está com Obesidade");
    }
    
    
}
