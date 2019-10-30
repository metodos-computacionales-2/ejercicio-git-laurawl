#include <iostream>
#include <cmath>
float pita(float x,float x2);

int main(void)
{
    std::cout<<"Ingrese los numeros de los catetos"<<std::endl;
    float r;
    float r1;
    float r2;
    string a="Si";
    std::cin>>r;
    std::cin>>r1;
    std::cout<<"Ingrese la hipotenusa"<<std::endl;
    std::cin>>r2;
    if(r2!=pita(r,r1))
    {
        a="No";
    }
    std::cout<<"Representan los lados de un triangulo rectangulo"<<a<<std::endl;
    return 0;
}
float pita(float x,float x2)
{
    return sqrt(x*x+x2*x2);
}
