#include <iostream>
#include <cmath>

float dia(int x);
float per(int x);

int main(void)
{
    std::cout<<"Ingrese el radio del circulo"<<std::endl;
    float r;
    std::cin>>r;
    std::cout<<"El radio es"<<r<<"\n"<<"El diametro es"<<dia(r)<<"\n"<<"El perimetro es"<<per(r)<<"\n"<<std::endl;
    return 0;
}
float dia(float x){
    return 2*x;
}
float per(float x){
    return 2*x*M_PI;
}