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
    cout << "# 4 - Baja de productos    #" << endl;
    cout << "#                          #" << endl;
    cout << "# 5 - Cambios a productos  #" << endl;
    cout << "#                          #" << endl;
    cout << "# 6 - Salir                #" << endl;
    cout << "#                          #" << endl;
    cout << "############################" << endl;
}

void menuModificar()
{
    cout << "############################" << endl;
    cout << "#        Modificacion      #" << endl;
    cout << "#                          #" << endl;
    cout << "# 1 - Modificar nombre     #" << endl;
    cout << "#                          #" << endl;
    cout << "# 2 - Modificar precio     #" << endl;
    cout << "#                          #" << endl;
    cout << "# 3 - Modificar stock      #" << endl;
    cout << "#                          #" << endl;
    cout << "# 4 - Menu principal       #" << endl;
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

void productoModificado()
{
    cout << "############################" << endl;
    cout << "#          INFO            #" << endl;
    cout << "#                          #" << endl;
    cout << "# Fue modificado con exito #" << endl;
    cout << "#                          #" << endl;
    cout << "############################" << endl;
}
void productoEliminado()
{
    cout << "##############################" << endl;
    cout << "#            INFO            #" << endl;
    cout << "#                            #" << endl;
    cout << "# El producto esta eliminado #" << endl;
    cout << "#                            #" << endl;
    cout << "##############################" << endl;
}

void productoFueEliminado()
{
    cout << "##############################" << endl;
    cout << "#            INFO            #" << endl;
    cout << "#                            #" << endl;
    cout << "# El producto fue eliminado  #" << endl;
    cout << "# correctamente.             #" << endl;
    cout << "#                            #" << endl;
    cout << "##############################" << endl;
}

void productoNoExiste()
{
    cout << "##############################" << endl;
    cout << "#            INFO            #" << endl;
    cout << "#                            #" << endl;
    cout << "#   El producto no existe    #" << endl;
    cout << "#                            #" << endl;
    cout << "##############################" << endl;
}

#endif // MENU_H_INCLUDED
