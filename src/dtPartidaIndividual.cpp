/* Laboratorio Programacion IV - INCO/FING/UDELAR 
 * Integrantes:
 *      Alexis Baladon (5.574.612-4) - alexis.baladon@fing.edu.uy
 *      Guillermo Toyos (5.139.879-9) - guillermo.toyos@fing.edu.uy
 *      Jorge Machado (4.876.616-9) - jorge.machado.ottonelli@fing.edu.uy
 *      Juan Jose Mangado (5.535.227-0) - juan.mangado@fing.edu.uy
 *      Mathias Ramilo (5.665.788-5) - mathias.ramilo@fing.edu.uy
 */

#include "../include/dtPartidaIndividual.h"
#include "../include/dtFechaHora.h"

DtPartidaIndividual(int id,DtFechaHora fecha,float duracion,bool activa): DtPartida(id,fecha,duracion,activa) {

}

std::ostream & operator << (std::ostream &,DtPartidaMultijugador p) {
    o << "ID: " << p.getId() << "\n" << "Duracion: " << p.getDuracion()
    << "\n" << "Es activa?: ";
    if(p.getActiva()) o << "Si";
    else o << "No";
    o << "\n" << "Fecha de creacion: " << p.getFecha() << "\n";
    return o;
}