#ifndef ADJ_LISTS_DESTROYER_H
#define ADJ_LISTS_DESTROYER_H

#include "constantesYRegistros.h"
#include "../TDAs/list.h"
#include "../TDAs/hashmap.h"
#include "../TDAs/btree.h"

void destroyAdjListsProductos(HashMap* map); // Libera memoria de las listas de supermercados adyacentes al mapa de producto.

void destroyAdjListsSupermercados(HashMap* map); // Libera memoria de las listas de productos adyacentes al mapa de supermercados.

void destroyAdjListsCategorias(HashMap* map); // Libera memoria de las listas de productos adyacentes al mapa de categorías.

void destroyAdjListsBTree(BTreeNode* node); // Libera memoria de las listas de supermercados adyacentes al mapa ordenado de productos.

#endif