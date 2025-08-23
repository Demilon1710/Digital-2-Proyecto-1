#ifndef __DISPLAY7_H__
#define __DISPLAY7_H__

//Includes de Librerías
#include <Arduino.h>
#include <stdint.h>

//Prototipos de funciones
//Definiciones LEDS

#define displaydecimal 12
#define displayunidad 14
#define displaydecena 27
#define dA 21
#define dB 18
#define dC 33
#define dD 26
#define dE 25
#define dF 22
#define dG 19
#define dP 32
//Funcion para configurar display 7 segmentos
void configDisplay7(void);

//Desplegar numero en display 7 segmentos
void desplegarNumero(uint8_t numero);

// Desplegar punto (1 se despliega y 0 no se despliega)
void desplegarPunto(uint8_t punto);


#endif // __DISPLAY7_H__
