// PRIMEIRO PROGRAMA EM C++
#include <string>
using namespace std;

class MEDIA
{
    private: float nota1,nota2,vlMedia;
    
    public: void setValores(float n1,float n2)
    {
      nota1=n1;
      nota2=n2;
    };
    
    public: float calcular()
    {
      vlMedia=(nota1+nota2)/2;  
      return vlMedia;
    };
    
    public: float getMedia()
    {
      return vlMedia;  
    };
    public: float getNota1()
    {
        return nota1;
    }
    public: float getNota2()
    {
        return nota2;
    }
};

int main()
{
    float n1,n2,media;
    
    MEDIA vmedia;
    
    
    printf("\nREALIZANDO O CALCULO DA MEDIA");
    printf("\nDigite a nota 1:  ");
    scanf("%f",&n1);
    printf("\nDigite a nota 2:  ");
    scanf("%f",&n2);
    vmedia.setValores(n1,n2);
    vmedia.calcular();
    printf("\nNOTA1 É = %7.2f",vmedia.getNota1());
    printf("\nNOTA2 É = %7.2f",vmedia.getNota2());
    printf("\nMEDIA É = %7.2f",vmedia.getMedia());
    
    return 0;
}
