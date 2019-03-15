#include "Vehiculo.hh"
#include "Vector2d.hh"
#include <string>

Vehiculo::Vehiculo() : Velocidad(0, 0), Posicion(0, 0) {}
Vector2d Vehiculo::getVelocidad()
{
   return Velocidad;
}
Vector2d Vehiculo::getPosicion()
{
   return Posicion;
}
std::string Vehiculo::to_string()
{
   std::string a = Velocidad.to_string();
   std::string b = Posicion.to_string();
   std::string c = std::string("Velocidad:") + std::string(a) + std::string(", Posicion:") + std::string(b);
   return c;
}
void Vehiculo::aceleracion(Vector2d a, float t)
{
   Velocidad.x = Velocidad.x + a.x * t;
   Velocidad.y = Velocidad.y + a.y * t;
   Posicion.x = Posicion.x + Velocidad.x * t;
   Posicion.y = Posicion.y + Velocidad.y * t;
}
void Vehiculo::avanzar(float t)
{
   Posicion.x = Posicion.x + Velocidad.x * t;
   Posicion.y = Posicion.y + Velocidad.y * t;
}