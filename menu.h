//menu
#include<iostream>
using namespace std;
int menu(){
    int menU;
    cout<<"1.- Perímetro del triángulo escaleno"<<endl;
    cout<<"2.- Perimetro del circulo"<<endl;
    cout<<"3.- Perimetro de poligono regular (triángulo equilátero)"<<endl;
    cout<<"4.- Area del triangulo (isósceles)"<<endl;
    cout<<"5.- Area del circulo"<<endl;
    cout<<"6.- Salir"<<endl;
    cout<<"» ";
    cin>>menU;
    return menU;
}
