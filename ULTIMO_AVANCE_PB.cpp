#include <iostream>
#include<stdio.h>
#include<string>
#include<string.h>

using namespace std;

struct INFO
{
    int registro, numero, aniolanzamiento;
    string nombre, genero, clasificacion, consola, caracteristicas, descripcion;
    float impuesto, total, precio;
}datos[11];

void ALTA();
void LISTA();
void SALIR();

int main() {                     //Declaramos funcion principal

    while (true) {

        int opc = 0;                //Declaración de la opción

        printf("\t***Bienvenido a nuestra tienda de videojuegos***\n");                     //Titulo
        printf("1.-ALTA DE VIDEOJUEGO\n2.-MODIFICACI%cN DE ARTICULO\n3.-BAJA DE ARTICULO\n", 224);   // Opciones
        printf("4.-LISTA DE ARTICULOS\n5.-LIMPIAR PANTALLA\n6.-SALIR DEL PROGRAMA\n");
        printf("Por favor, pulse la tecla que requiera para ejecutar la acci%cn.\n", 162);   //Pregunta
        scanf_s("%d", &opc);        //Digita la opción

        switch (opc) {
        case 1:
            ALTA();
            system("pause");
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            LISTA();
            break;
        case 5:
            system ("cls");
            break;
        case 6:
            SALIR();
            break;
        }
    }
}

void ALTA() {

    int i = 0, j = 0, registro = 1;

    printf("Digite el N%cMERO de registros que desea a%cadir: ", 233,164);
    scanf_s("%d", &datos[i].registro);
    if (datos[i].registro < 1) {
        printf("Opci%cn invalidada...\n",162);
        return ALTA();
    }

    system("cls");

    for (j; j < datos[i].registro; j++) {

        printf("REGISTRO: %d", registro);       //NOTA: Al parecer registro no ocupa el ampersand

        printf("\nDigite el N%cMERO del articulo: ",233);
        scanf_s("%d", &datos[i].numero);
        printf("\nDigite el NOMBRE del videojuego: ");
        cin.ignore();                          
        getline(cin, datos[i].nombre);
        printf("\nDigite el A%cO de lanzamiento: ", 165);
        scanf_s("%d", &datos[i].aniolanzamiento);
        printf("\nDigite el GENERO del videojuego: ");
        cin.ignore();                           
        getline(cin, datos[i].genero);
        printf("\nDigite la CLASIFICACI%cN del videojuego: ",224);                         
        getline(cin, datos[i].clasificacion);
        printf("\nDigite la CONSOLA del videojuego: ");
        getline(cin, datos[i].consola);
        printf("\nDigite las CARACTERISTICAS del videojuego: ");                         
        getline(cin, datos[i].caracteristicas);
        printf("\nDigite la DESCRIPCI%cN del videojuego: ",224);
        getline(cin, datos[i].descripcion);  
        printf("\nDigite el PRECIO unitario del videojuego (DIVISA EN PESO MEXICANO): ");
        scanf_s("%f", &datos[i].precio);
        datos[i].impuesto = 1.16;
        printf("\nEl IMPUESTO es del 16%%\n");
        datos[i].total = datos[i].precio * datos[i].impuesto;
        printf("\nEl TOTAL del articulo es de %.2fMXN\n",datos[i].total);

        system("pause");
        system("cls");
        registro++;

    }

}

void LISTA() {


    for (int i = 0; i < datos[i].registro; i++) {
        printf("\nREGISTRO: %d", datos[i].registro);
        printf("\nN%cMERO del articulo: %d", 233, datos[i].numero);
        printf("\nNOMBRE del videojuego: %s", datos[i].nombre.c_str());
        printf("\nA%cO de lanzamiento: %d", 165, datos[i].aniolanzamiento);
        printf("\nGENERO del videojuego: %s", datos[i].genero.c_str());
        printf("\nCLASIFICACI%cN del videojuego: %s", 224, datos[i].clasificacion.c_str());
        printf("\nCONSOLA del videojuego: %s", datos[i].consola.c_str());
        printf("\nCARACTERISTICAS del videojuego: %s", datos[i].caracteristicas.c_str());
        printf("\nDESCRIPCI%cN del videojuego: %s", 224, datos[i].descripcion.c_str());
        printf("\nPRECIO unitario del videojuego (DIVISA EN PESO MEXICANO): %.2f",datos[i].precio);
        printf("\nEl IMPUESTO es del 16%%\n");
        printf("\nEl TOTAL del articulo es de %.2fMXN\n", datos[i].total);
        system("pause");
        datos[i].registro++;
    }
}

void SALIR() {
    
    exit(1);
}
