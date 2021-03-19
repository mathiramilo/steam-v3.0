#ifndef LISTAPARTIDAS
#define LISTAPARTIDAS

#include "include/Partida.h"
#include "include/PartidaIndividual.h"
#include "include/PartidaMultijugador.h"

class ListaPartidas {
    private:
        Partida partida;
    public:
        ListaPartidas *siguiente;
        ListaPartidas *anterior;
        ListaPartidas();
};

#endif LISTAPARTIDAS