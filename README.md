**Tecnicatura Universitaria en Programación**

**Programación II**

## **🏆 Actividad: Torneo Relámpago 🎮**

Un grupo de **4 jugadores** se enfrenta en un torneo donde **todos juegan contra todos una vez**. Después de cada partido, se anotan los puntos obtenidos.

### **📌 Tu misión:**

Debes programar un sistema con un menú que permita gestionar el torneo con las siguientes opciones:

### **📋 Menú del Torneo**

1 - Cargar Puntos

Pide el número de dos jugadores que se enfrentaron y sus respectivos puntos

2 - Mostrar Tabla

Muestra la tabla de enfrentamientos

3 - Reiniciar Campeonato

Borra los resultados y deja todo en cero

0 - Salir

Cierra el programa

### **📖 Reglas:**

- Cada partido tiene un ganador. No hay empates.
- Se registran los puntos de **ambos jugadores** en la tabla \[A\]\[B\] y \[B\]\[A\].
- **No se permiten partidos contra uno mismo** (si ingresan el mismo número dos veces, se debe mostrar un error).
- La tabla debe mostrarse como una **matriz de 4x4** donde la diagonal principal no se usa.

📌 **Ejemplo de ejecución:**

1 - Cargar Puntos

Ingrese número del primer jugador (1-4): 1

Ingrese número del segundo jugador (1-4): 3

Ingrese puntos de J1: 2

Ingrese puntos de J3: 5

2 - Mostrar Tabla

J1 J2 J3 J4

J1 - 0 2 0

J2 0 - 0 0

J3 5 0 - 0

J4 0 0 0 -

3 - Reiniciar Campeonato

Se han reiniciado todos los puntajes.

0 - Salir

Saliendo del programa...

📌 **Pista:**

- Vas a necesitar una **matriz de 4x4** para almacenar los puntos.
- Un **ciclo do-while con switch** para manejar el menú.
- **Validaciones** para evitar que un jugador se enfrente a sí mismo.
