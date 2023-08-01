#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double Serie(int terms,float x) {
    double result = 1.0;  // Primer t�rmino de la serie
    double term = 1.0;
    int termino=0;
  // cout << setprecision(15) << result << endl;  // aproximacion
    for (int i = 1; i < terms; i++) {
        term *= x / i;  // Calcula el siguiente t�rmino
        result += term;  // Agrega el t�rmino al resultado
        //cout << setprecision(15) <<"aa"<< result << endl;  // aproximacion
        termino++;
    }
cout<<"n: "<<termino;
cout <<"\t"<<setprecision(15)<< result << endl;  // aproximacion

    return result;
}

int main() {
    float x;
    int a=1;
    double Precision = 0.000001;  // Precisi�n deseada
    int maxTerms = 100;  // N�mero m�ximo de t�rminos
    do{
cout<<"ingrese x para e^x : ";
cin>>x;
    int terms = 1;
    double aproximacion = Serie(terms,x);

    // Iterar hasta alcanzar la precisi�n deseada o el n�mero m�ximo de t�rminos
    while (abs(aproximacion - exp(x)) > Precision && terms <= maxTerms) {
        terms++;
        aproximacion = Serie(terms,x);
    }

    if (terms <= maxTerms) {
        cout << "Numero de terminos requeridos: " << terms << endl;
        cout << "Aproximacion de e^"<<x<<": " << aproximacion << endl;
    } else {
        cout << "No se pudo alcanzar la precisi�n deseada con " << maxTerms << " t�rminos." << endl;
    }
    cout<<"ingrese 1 para volver a comenzar "<<endl;
    cin>>a;
    if(a==1){
        system("cls");
    }
}while(a==1);
    return 0;
}

