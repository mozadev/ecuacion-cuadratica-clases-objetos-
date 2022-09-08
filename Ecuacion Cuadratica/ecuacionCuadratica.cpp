#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class EcuacionCuadratica{
private://atributos
    int a;
    int b;
    int c;
public://metodos
    void set_a(int _a){
        a=_a;
    }
    void set_b(int _b){
        b=_b;
    }
    void set_c(int _c){
        c=_c;
    }

    int get_a(){
       return a;
    }
    int get_b(){
        return b;
    }
    int get_c(){
        return c;
    }


    EcuacionCuadratica(int,int,int);
    float obtenerDiscriminante();
    float getRaiz1();
    float getRaiz2();
    void mostrarResultado();

};
// constructor
EcuacionCuadratica::EcuacionCuadratica(int _a, int _b, int _c) {
    a=_a;
    b=_b;
    c=_c;
}

float EcuacionCuadratica::obtenerDiscriminante() {
   // float x = (b*b) - (4*a*c);
    float x = (get_b()*get_b()) - (4*get_a()*get_c());

    return x;
}

float EcuacionCuadratica::getRaiz1() {
    float raiz1;
    float discrimante=obtenerDiscriminante();
    if (discrimante < 0){


        raiz1=0;

    }else{
        // Aplicamos la formula
       float x1 = (-get_b() + sqrt(discrimante)) / (2*get_a());

        return raiz1=x1;
    }
}

float EcuacionCuadratica::getRaiz2() {
    float raiz2;
    float discrimante=obtenerDiscriminante();
    if (discrimante < 0){


        raiz2=0;

    }else{

        float x2 = (-get_b() - sqrt(discrimante)) / (2*get_a());

        return raiz2=x2;
    }
}

void EcuacionCuadratica::mostrarResultado() {

    float discrimante=obtenerDiscriminante();
    if (discrimante < 0){

        cout<<"La ecuacion no tiene raices reales"<<endl;

    }
    if(discrimante>0){


        cout<<"discrimante: "<<discrimante<<endl;
        cout<<"x1 = "<<getRaiz1()<<endl;
        cout<<"x2 = "<<getRaiz2()<<endl;

    }
    if(discrimante==0){

        cout<<"discrimante: "<<discrimante<<endl;
        cout<<" raiz es unica = "<<getRaiz1()<<endl;


    }


}

int main() {

    float a, b, c;

    cout<<"Ingresa el valor de a: ";
    cin>>a;

    cout<<"Ingresa el valor de b: ";
    cin>>b;

    cout<<"Ingresa el valor de c: ";
    cin>>c;

    EcuacionCuadratica ecu1=EcuacionCuadratica(a,b,c);
    ecu1.obtenerDiscriminante();
    ecu1.getRaiz1();
    ecu1.getRaiz2();
    ecu1.mostrarResultado();

    return 0;
}
