#include <iostream>
#include "PointArray.h"
#include "PointArray.cpp"


using namespace std;

int main() {

    // PROBANDO EL CONSTRUCTOR POR DEFECTO.
    PointArray pa;
    //cout << pa.getSize() << endl;

    // PROBANDO EL CONSTRUCTOR CON ARGUMENTOS.
    Point a;
    Point b(4, 5);
    Point c(6, 8);
    Point arr[] = {a, b, c}; // arreglo de Points estático.
    int tam = sizeof(arr) / sizeof(arr[0]);
    
    

    PointArray pa2(arr, tam);
    //cout << pa2.getSize() << endl;

    //**************************************/
    if(true) {
        // PROBANDO EL CONSTRUCTOR COPIA
        PointArray pa3 = pa2;
    }


    // PROBANDO PUSH_BACK
    cout<<"PROBANDO PUSH_BACK"<<endl;
    pa2.print();
    pa2.push_back(b);
    pa2.print();

    cout<<endl;



    // PROBANDO INSERT
    cout<<"PROBANDO INSERT"<<endl;
    pa2.print();
    Point novo(19,77);
    pa2.insert(0, novo);
    pa2.print();

    cout<<endl;


    pa2.remove(3);
    pa2.print();



    return 0;
}
