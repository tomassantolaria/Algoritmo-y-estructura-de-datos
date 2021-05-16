#include <iostream>

using namespace std;

int main()
{
    float m1, b1, m2, b2, x, y;
    cout << "Ingrese el valor de la pendiente de la primer recta" << endl;
    cin >> m1;
    cout << "Ingrese el valor de la ordenada al origen de la primer recta" << endl;
    cin >> b1;
    cout << "La primer recta es y1= " << m1 << "*x + " << b1 << endl;
    cout << "Ingrese el valor de la pendiente de la segunda recta" << endl;
    cin >> m2;
    cout << "Ingrese el valor de la ordenada al origen de la segunda recta" << endl;
    cin >> b2;
    cout << "La segunda recta es y2= " << m2 << "*x + " << b2 << endl;
    if (m1 == m2)
        if (b1 == b2){
            cout << "Las rectas son iguales" << endl;
            }
        else {
            cout << "Las rectas son paralelas por lo tanto no hay interseccion" << endl;
        }
    else {
            x = (b2 - b1)/(m1 - m2);
            y = m1*x + b1;
            cout << "El punto de interseccion de las rectas es el (" << x <<"," << y << ")" << endl;

        }


    return 0;
}
