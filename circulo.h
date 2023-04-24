//Circulos
#include<iostream>
using namespace std;
float perimetroCirculo(){
    float radio, perimetroC;
    cout<<"Dame el radio del circulo"<<endl;
    cin>>radio;
    perimetroC = 2 * radio * 3.1416;
    return perimetroC;
}
float areaC(){
     float radio, areaC;
    cout<<"Dame el radio del circulo"<<endl;
    cin>>radio;
    areaC = radio * radio * 3.1416;
    return areaC;
}