//#############################################################################
// ARCHIVO             : nombre de archivo.extension
// AUTOR/ES            : nombre/s de autor/es
// VERSION             : 0.01 beta.
// FECHA DE CREACION   : dd/mm/aaaa.
// ULTIMA ACTUALIZACION: dd/mm/aaaa.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE                 : Code::Blocks - 8.02 / 10.05
// COMPILADOR          : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////

//*****************************************************************************
//                       CONFIGURACION MULTIPLATAFORMA
//=============================================================================
// COMPILACION EN WINDOWS
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Windows, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN LINUX".
//-----------------------------------------------------------------------------
#ifndef _WIN32
  # define _WIN32
#endif

//=============================================================================
// COMPILACION EN LINUX
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Linux, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN WINDOWS".
//-----------------------------------------------------------------------------
//#ifndef _LINUX
//  # define _LINUX
//#endif

const char FILE_PRODUCTOS[] = "./PRODUCTOS.DATA";

//*****************************************************************************
//                             INCLUSIONES ESTANDAR
//=============================================================================
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
                    // objetos cin, cout y endl.

#include <cstdlib>  // Libreria estandar que contiene la funcion exit().
#include <cstdio>

//*****************************************************************************
//                             INCLUSIONES PERSONALES
//=============================================================================
#include "CSYSTEM/csystem.h" // Libreria para multiplataforma.
#include "menu.h"
#include "funciones.h"
//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------

using namespace std;


//==============================================================================
// FUNCION PRINCIPAL - PUNTO DE INICIO DEL PROYECTO
//------------------------------------------------------------------------------

//TAREA : HACER LA BAJA LOGICA Y MODIFICACION DE CADA UNO. FTEEL FSEEK
int main()
{
    short int salir = 0;
    tProducto producto;
    while(salir == 0)
    {
        sys::cls();
        short int opcion;
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cin.ignore();
        switch(opcion)
        {
            case 1:
            {
                sys::cls();
                cargarProducto(&producto, obtenerID());
                continue;
            }break;
            case 2:
            {
                sys::cls();
                leerProductos();
                continue;
            }break;
            case 3:
            {
                sys::cls();
                short int id;
                cout << "Ingrese ID a buscar: ";
                cin >> id;
                cin.ignore();
                sys::cls();
                buscarProducto(id);
                sys::pause();
            }break;
            case 4:
            {
                sys::cls();
                short int id;
                cout << "Ingrese ID para su baja: ";
                cin >> id;
                cin.ignore();
                sys::cls();
                bajaProducto(id);
                sys::pause();
            }break;
            case 5:
            {
                sys::cls();
                menuModificar();
                short int opcionMod;
                cout << "Ingrese opcion: ";
                cin >> opcionMod;
                cin.ignore();
                switch(opcionMod)
                {
                    case 1:
                    {
                        sys::cls();
                        modificarProducto(opcionMod);
                        sys::pause();
                    }break;
                    case 2:
                    {
                        sys::cls();
                        modificarProducto(opcionMod);
                        sys::pause();
                    }break;
                    case 3:
                    {
                        sys::cls();
                        modificarProducto(opcionMod);
                        sys::pause();
                    }break;
                    case 4:
                    {
                        continue;
                    }break;
                    default:
                    {
                        sys::cls();
                        cout << "Opcion incorrecta";
                        sys::pause();
                        continue;
                    }
                }
            }break;
            case 6:
            {
                sys::cls();
                char salida[1];
                menuSalir();
                cout << "Opcion: ";
                sys::getline(salida, 2);
                switch(salida[0])
                {
                    case 's':
                    case 'S':
                    {
                        salir = 1;
                        continue;
                    }break;
                    case 'n':
                    case 'N':
                    {
                        continue;
                    }break;
                    default:
                    {
                        cout << "Opcion incorrecta" << endl;
                        sys::pause();
                        continue;
                    }
                }
            }
        }
    }
    //--------------------------------------------------------------------------
    // FIN DE LA FUNCION main() SIN ERRORES.
    //--------------------------------------------------------------------------
    return 0;
}

//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################

