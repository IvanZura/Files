#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

using namespace std;

void menu()
{
    cout << "############################" << endl;
    cout << "#          Menu            #" << endl;
    cout << "#                          #" << endl;
    cout << "# 1 - Cargar producto      #" << endl;
    cout << "#                          #" << endl;
    cout << "# 2 - Leer productos       #" << endl;
    cout << "#                          #" << endl;
    cout << "# 3 - Buscar productos     #" << endl;
    cout << "#                          #" << endl;
    cout << "# 4 - Salir                #" << endl;
    cout << "#                          #" << endl;
    cout << "############################" << endl;
}

void menuSalir()
{
    cout << "############################" << endl;
    cout << "#          Salida          #" << endl;
    cout << "#                          #" << endl;
    cout << "# S - Si, Salir            #" << endl;
    cout << "#                          #" << endl;
    cout << "# N - No, NO SALIR         #" << endl;
    cout << "#                          #" << endl;
    cout << "############################" << endl;
}

void sinProductos()
{
    cout << "############################" << endl;
    cout << "#          INFO            #" << endl;
    cout << "#                          #" << endl;
    cout << "#   No hay productos papu  #" << endl;
    cout << "#                          #" << endl;
    cout << "############################" << endl;
}

void cargoProducto()
{
    cout << "############################" << endl;
    cout << "#          INFO            #" << endl;
    cout << "#                          #" << endl;
    cout << "# Fue cargado con exito !  #" << endl;
    cout << "#                          #" << endl;
    cout << "############################" << endl;
}

#endif // MENU_H_INCLUDED
