/* Laboratorio Programacion IV - INCO/FING/UDELAR
 * Integrantes:
 *      Alexis Baladon (5.574.612-4) - alexis.baladon@fing.edu.uy
 *      Guillermo Toyos (5.139.879-9) - guillermo.toyos@fing.edu.uy
 *      Jorge Machado (4.876.616-9) - jorge.machado.ottonelli@fing.edu.uy
 *      Juan Jose Mangado (5.535.227-0) - juan.mangado@fing.edu.uy
 *      Mathias Ramilo (5.665.788-5) - mathias.ramilo@fing.edu.uy
 */

#ifndef PARTIDA_MULTIJUGADOR
#define PARTIDA_MULTIJUGADOR

#include <string>
#include <map>
#include <set>
#include "partida.h"
#include "dtPartidaMultijugador.h"
#include "jugadorMulti.h"

using std::string;
using std::map;
using std::set;

class DtFechaHora;
class Jugador;
class Videojuego;
class DtPartida;

class PartidaMultijugador : public Partida {
private:
    bool transmitidaEnVivo;
    set<JugadorMulti*>* jugadoresMultis;
    map<string, Jugador*>* jugadoresUnidos;
public:
    PartidaMultijugador(DtPartidaMultijugador);
    bool getTransmitidaEnVivo;
    void setJugadoresUnidos(map<string, Jugador*>*);
    map<string, Jugador*>* getJugadoresUnidos();
    virtual DtPartida obtenerDatosPartida();
    virtual void asignarHoraFinalizacion(DtFechaHora);
    virtual void finalizarPartida(DtFechaHora);
    virtual void eliminarAssoc();
    ~PartidaMultijugador();
};

#endif