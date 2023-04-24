//main
#include<iostream>
#include "poligono.h"
#include "menu.h"
#include "circulo.h"
using namespace std;
int main()
{
    int meNu;
    float perimetroc, areac, escaleNo, equilateRo, isoselEs;
    meNu = menu();
    do
    {
        switch (meNu)
        {
        case 1:
            escaleNo = escaleno();
            cout<<"El perimetro del tringulo es  "<<escaleNo<<endl;
            meNu = menu();
            break;
        case 2:
            perimetroc = perimetroCirculo();
            cout<<"El perimetro del circulo es  "<<perimetroc<<endl;
            meNu = menu();
            break;
        case 3:
            equilateRo = equilatero();
            cout<<"El perimetro del tringulo es  "<<equilateRo<<endl;
            meNu = menu();
            break;
        case 4:
            isoselEs = isoseles();
            cout<<"El perimetro del tringulo es  "<<isoselEs<<endl;
            meNu = menu();
            break;
        case 5:
            areac = areaC();
            cout<<"El el area del circulo es  "<<areac<<endl;
            meNu = menu();
            break;                    
        default:
            break;
        }
    } while(meNu != 6);
    
    return 0;
}