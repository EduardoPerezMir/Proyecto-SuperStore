/* #ifndef Funciones_answer_h
#define Funciones_answer_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#include "TDAs/hashmap.h"
#include "TDAs/list.h"
#include "TDAs/btree.h"

#define MAXLEN 30
#define PRICELEN 9
#define MAPINITIALCAPAC 41
#define MAPADMINITIALCAPAC 4
#define MSJARMADOCANASTA "            ARMADO DE CANASTA"
#define MSJVISUALIZACIONOFERTA "            OFERTA NACIONAL DE PRODUCTOS"
#define MSJMENUADMINISTRADOR "            MENÚ DEL ADMINISTRADOR"
#define MSJBUSQUEDA1 "            BUSQUEDA DE PRODUCTOS POR NOMBRE"
#define MSJBUSQUEDA2 "            BUSQUEDA DE PRODUCTOS POR RANGO DE PRECIOS"
#define MSJBUSQUEDA3 "            BUSQUEDA DE PRODUCTOS POR SUPERMERCADO"
#define MSJBUSQUEDA31 "            INGRESE EL NOMBRE DEL SUPERMERCADO A BUSCAR"
#define MSJBUSQUEDA4 "            BUSQUEDA DE PRODUCTOS POR CATEGORÍA"
#define MSJBUSQUEDA41 "            INGRESE EL NOMBRE DE LA CATEGORÍA A BUSCAR"
#define MSJBUSQUEDASC "            NO HAY COINCIDENCIAS EN LA BÚSQUEDA"
// MSJBUSQUEDASC: Mensaje de busqueda para los casos en que no haya coincidencias.

typedef struct{
    char nombre[MAXLEN + 1];
    char precio[PRICELEN + 1];
    int price;
    char categoria[MAXLEN + 1];
    int cantSupermercados;
    List *supermercados;
}tipoProducto;

typedef struct{
    char nombre[MAXLEN + 1];
    List *productos;
}tipoCategoria;

typedef struct{
    char nombre[MAXLEN + 1];
    List *productos;
}tipoSupermercado;

typedef struct{
    char rut[MAXLEN + 1];
    char password[MAXLEN + 1];
}tipoAdministrador;

typedef struct{
    char nombre[MAXLEN + 1];
    char supermercado[MAXLEN + 1];
    char precio[PRICELEN + 1];
    size_t cantidad;
}tipoCanasta;

// Importacion base de datos

void importarDatosCSV(HashMap* mapaProductos, HashMap* mapaSupermercados, HashMap* mapaCategorias, BTree* arbolProductos);

void importarCredencialesAdmin (HashMap* mapaAdmin);


// Funciones generales

void printListS(List* Super); // Muestra lista de supermercados

void printListP(List* Super); // Mostrar lista de productos 

void printMapP(HashMap* mapaProducto); //Mostrar todos los productos para el usuario saber al agregar producto a la canasta

// Armar Canasta OPCION 1

void subMenuCanasta(); // Muestra submenu de armar canasta

void armarCanasta(List* canasta, HashMap* mapaProductos, HashMap* mapaSupermercado);

void eliminarProduCanasta(List* canasta);

void agregarProduCanasta(HashMap* mapaProductos,HashMap* mapaSupermercados,List* canasta);

void printListPC(List* Super); // Muestra los productos de la canasta

void subMenuCanastaCantidad();

tipoCanasta* searchListCanasta(List* canasta, char* producto, char* supermercado);

// Mostrar toda la oferta de productos OPCION 2

void mostrarProducto(tipoProducto* producto);

void mostrarTodosProductos(HashMap* productos); // Opcion 2 "Mostrar todos los productos"

void printAllP(HashMap* mapaProductos); // Mostrar todos los productos 

//Mostrar por nombre OPCION 3

void busquedaProductosDirecta(HashMap* mapa);

// Mostrar por precio OPCION 4

void busquedaPorPrecio(BTree* arbolP);

// Mostrar por supermercado y categoria OPCION 5 y 6

void busquedaProductosAdyacentes(HashMap* mapa, int indicador);

// Iniciar sesion como administrador OPCION 7
int loginAdmin(HashMap* mapaAdministradores); // Iniciar sesion como administrador, si se inicia sesion correctamente retorna distinto a 0

void mostrarMenuAdmin(); 

// Opciones administrador

void menuAdmin(HashMap* mapaProductos,HashMap* mapaSupermercados,HashMap* mapaCategorias);

void agregarProducto(HashMap* mapaProductos, HashMap* mapaCategorias, HashMap* mapaSupermercados);

void agregarSupermercado (HashMap* mapaSupermercados);

void agregarCategoria (HashMap* mapaCategorias);

void quitarProductos(HashMap* mapaProductos, HashMap* mapaCategorias, HashMap* mapaSupermercados);

void eliminarProductoLista(List* productos,char* nomProducto);

void guardarDatosCSV(HashMap* mapaProductos, HashMap* mapaSupermercados, HashMap* mapaCategorias);

// Menu principal

void mostrarMenu();

void mostrarOpciones(); // Mostrar opciones de menu principal

void printLogo();

#endif // Funciones_answer_h
*/