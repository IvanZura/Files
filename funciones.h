#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

struct tProducto
{
    int id;
    bool eliminado;
    int precio;
    char nombre[30];
    int stock;
};

int obtenerID()
{
    tProducto producto;
    FILE *archivo;
    archivo = fopen(FILE_PRODUCTOS,"rb+");
    if(archivo!=NULL)
    {
        fseek(archivo, 0, SEEK_END);
        short int pos = ftell(archivo)/sizeof(tProducto) + 1;
        fclose(archivo);
        return pos;
    }
    else
    {
        return 1;
    }
}

void mostrarProducto(tProducto producto)
{
    cout << "############################" << endl;
    cout << "# ID:     " << producto.id << endl;
    cout << "# Nombre: " << producto.nombre << endl;
    cout << "# Precio: " << producto.precio << endl;
    cout << "# Stock:  " << producto.stock << endl;
    cout << "############################" << endl;
}

void escribirProducto(tProducto producto)
{
    FILE *archivo;
    archivo = fopen(FILE_PRODUCTOS,"ab");
    if(archivo!=NULL)
    {
        fwrite(&producto,sizeof(tProducto),1,archivo);
        fclose(archivo);
    }

}

void leerProductos()
{
    tProducto producto;
    FILE *archivo;
    archivo = fopen(FILE_PRODUCTOS,"rb");
    if(archivo!=NULL)
    {
        while(fread(&producto,sizeof(tProducto),1,archivo))
        {
            if(producto.eliminado != true)
            {
                mostrarProducto(producto);
            }
        }
        fclose(archivo);
        sys::pause();
    }
    else
    {
        sinProductos();
        sys::pause();
    }
}

void cargarProducto(tProducto *producto,int id)
{
    short int salir = 0;
    while(salir == 0)
    {
        bool hayNombre = false;
        char nombre[30];
        float precio = 0;
        short int stock = 0;
       cout << "Ingrese NOMBRE del producto: ";
        sys::getline(nombre, 30);
        if(strcmp(nombre, ""))
        {
            hayNombre = false;
        }
        else
        {
            hayNombre = true;
        }
        if(hayNombre == true){
            sys::cls();
            continue;
        }
        cout << "Ingrese PRECIO del producto: ";
        cin >> precio;
        cin.ignore();
        if(precio <= 0)
        {
            continue;
        }
        cout << "Ingrese STOCK del producto: ";
        cin >> stock;
        cin.ignore();
        if(stock < 0)
        {
            continue;
        }
        producto->id = id;
        producto->eliminado = false;
        strcpy(producto->nombre, nombre);
        producto->precio = precio;
        producto->stock = stock;
        escribirProducto(*producto);
        sys::cls();
        cargoProducto();
        sys::pause();
        salir = 1;

    }
}


void buscarProducto(int id) // en construccion
{
    tProducto producto;
    FILE *archivo;
    archivo = fopen(FILE_PRODUCTOS,"rb+");
    if(archivo!=NULL)
    {
        fseek(archivo, sizeof(tProducto) * (id - 1), SEEK_SET);
        //cout << "ID: " <<
    }
}

void bajaProducto() //en construccion
{
    tProducto producto;
    FILE *archivo;
    archivo = fopen(FILE_PRODUCTOS,"rb+");
    if(archivo!=NULL)
    {

    }
}


#endif // FUNCIONES_H_INCLUDED
