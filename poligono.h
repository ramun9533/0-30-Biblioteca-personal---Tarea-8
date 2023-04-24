//Poligono
#include<iostream>
using namespace std;
float escaleno(){
    float lado, lado1, lado2, perimetro;
    cout<<"Dame el lado del triangulo"<<endl;
    cin>>lado;
    cout<<"Dame el lado del triangulo"<<endl;
    cin>>lado1;
    cout<<"Dame el lado del triangulo"<<endl;
    cin>>lado2;
    perimetro = lado + lado1 + lado2;
    return perimetro;

}
float equilatero(){
    float lado, perimetro;
    cout<<"Dame el lado del triangulo"<<endl;
    cin>>lado;
    perimetro = lado * 3;
    return perimetro;

}
float isoseles(){
    float lado, lado1, perimetro;
    cout<<"Dame el lado del triangulo que tiene un par igual"<<endl;
    cin>>lado;
    cout<<"Dame el otro lado del triangulo"<<endl;
    cin>>lado1;
    perimetro = lado * 2 + lado1;
    return perimetro;

}