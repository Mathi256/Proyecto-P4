/* Laboratorio Programacion IV - INCO/FING/UDELAR 
 * Integrantes:
 *      Alexis Baladon (5.574.612-4) - alexis.baladon@fing.edu.uy
 *      Guillermo Toyos (5.139.879-9) - guillermo.toyos@fing.edu.uy
 *      Jorge Machado (4.876.616-9) - jorge.machado.ottonelli@fing.edu.uy
 *      Juan Jose Mangado (5.535.227-0) - juan.mangado@fing.edu.uy
 *      Mathias Ramilo (5.665.788-5) - mathias.ramilo@fing.edu.uy
 */

#ifndef DTPARTIDA
#define DTPARTIDA

#include "dtFechaHora.h"

#include <iostream>
#include <set>

class DtPartida {
    protected:
        int id;
        DtFechaHora fecha;
        float duracion;
        bool activa;
        std::string host;
        std::string videojuego;
    public:
        DtPartida(int,DtFechaHora,float,bool,std::string,std::string);
        int getId();
        DtFechaHora getFecha();
        float getDuracion();
        bool getActiva();
        bool esActiva();
        std::string getHost();
        std::string getVideojuego();
};

#endif