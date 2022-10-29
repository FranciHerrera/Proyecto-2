#pragma once
#include <iostream>
#include <conio.h>
#include <string.h>
#include <Windows.h>

using namespace std;

class Juego {
public:
    int val;
    char INE[40];
    char Pasp[40];
    virtual void Manual();
    virtual void Auto();
};

void Juego::Manual() {
    cout << "";
    cin.getline(INE, 40, '\n');

    cout << "Ingrese los datos que se le solicitan de la persona: ";
    cin.getline(INE, 40, '\n');

    cout << "Ingrese nuevamente los datos pero ahora del pasaporte: ";
    cin.getline(Pasp, 40, '\n');

    {
        if (strcmp(INE, Pasp) != 0) {
            cout << "________Los datos no coinciden_________\n\n";
        }
        else if (strcmp(INE, Pasp) == 0) {
            cout << "________Los datos coinciden_________\n\n";
        }
    }
}

void Juego::Auto() {
    cout << "Analiza los datos y toma una decision\n\n";
    cout << "0 - Negar la entrada\n\n" << "1 - Dar el ingreso al pais\n\n" << "Decision: ";
    cin >> val;
    if (val == 1) {
        cout << "\nLa persona a entrado al pais";    
    }
    else if (val == 0) {
        cout << "\nLa persona ha sido deportada";
    }
}

class Nivel: public Juego {
public:
    int pts = 0;
    void nivel1();
    void nivel2();
    void nivel3();
    void nivel4();
    void nivel5();
    void nivel6();
    void menu();
    void ManuN();
    void ManuT();
    void AutoN();
    void AutoT();
};
void Nivel::AutoN()
{
    if (val == 1) {
        system("Color A0");
        pts = pts + 100;
        cout << "\n                                                     PUNTAJE +100\n";
        Beep(700, 1000);
        Sleep(1000);
        system("Color 0E");
    }
    else if (val == 0) {
        system("Color C0");
        pts = pts - 100;
        cout << "\n                                                     PUNTAJE -100\n";
        Beep(1000, 1000);
        Sleep(1000);
        system("Color 0E");
    }
}
void Nivel::ManuN()
{
    if (strcmp(INE, Pasp) != 0) {
        system("Color C0");
        pts = pts - 100;
        cout << "\n                                                     PUNTAJE -100\n";
        Beep(1000, 1000);
        Sleep(1000);
        system("Color 0E");
    }
    else if (strcmp(INE, Pasp) == 0) {
        system("Color A0");
        pts = pts + 100;
        cout << "\n                                                     PUNTAJE +100\n";
        Beep(700, 1000);
        Sleep(1000);
        system("Color 0E");
    }
}
void Nivel::AutoT()
{
    if (val == 1) {
        system("Color C0");
        pts = pts - 200;
        cout << "\n                                                     PUNTAJE -200\n";
        Beep(1000, 1000);
        Sleep(1000);
        system("Color 0E");
    }
    else if (val == 0) {
        system("Color A0");
        pts = pts + 200;
        cout << "\n                                                     PUNTAJE +200\n";
        Beep(700, 1000);
        Sleep(1000);
        system("Color 0E");
    }
}
void Nivel::ManuT()
    {
        if (strcmp(INE, Pasp) != 0) {
            system("Color A0");
            pts = pts + 200;
            cout << "\n                                                     PUNTAJE +200\n";
            Beep(700, 1000);
            Sleep(1000);
            system("Color 0E");
        }
        else if (strcmp(INE, Pasp) == 0) {
            system("Color C0");
            pts = pts - 200;
            cout << "\n                                                     PUNTAJE -200\n";
            Beep(1000, 1000);
            Sleep(1000);
            system("Color 0E");
        }
 }
//NORMAL
void Nivel::nivel1() {
    cout << "NIVEL 1                                                   PUNTAJE: " << pts << "\n\n";
    cout << " ___________________________________________\n";
    cout << "|ID:                 |Pasaporte:            |\n";
    cout << "|Leonel Messi        |Leonel Messi          |\n";
    cout << "|35 anos             |35 anos               |\n";
    cout << "|Hombre              |Masculino             |\n";
    cout << "|Argentino           |Argentino             |\n";
    cout << " ===========================================\n";

    Juego::Auto();
    {
        Nivel::AutoN();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nAhora tendra que comparar el nombre completo del pasajero\n\n";
    Juego::Manual();
    {
        Nivel::ManuN();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nEsta persona no tiene ningun antecedente, por lo que su acceso al pais si es permitido\n\n";
}
//NORMAL
void Nivel::nivel2() {
    cout << "NIVEL 2\n" << "                                                     PUNTAJE: " << pts << "\n\n";
    cout << " ___________________________________________\n";
    cout << "|ID:                 |Pasaporte:            |\n";
    cout << "|Enrique Pena Nieto  |Enrique Pena Nieto    |\n";
    cout << "|56 anos             |56 anos               |\n";
    cout << "|Hombre              |Masculino             |\n";
    cout << "|Mexicano            |Mexicano              |\n";
    cout << " ===========================================\n";

    Juego::Auto();
    {
        Nivel::AutoN();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nAhora tendra que comparar el nombre completo del pasajero\n\n";
    Juego::Manual();
    {
        Nivel::ManuN();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nEsta persona no tiene ningun antecedente, por lo que su acceso al pais si es permitido\n\n";
}
//TERRORISTA
void Nivel::nivel3() {
    cout << "NIVEL 3\n" << "                                                     PUNTAJE: " << pts << "\n\n";
    cout << " ___________________________________________\n";
    cout << "|ID:                 |Pasaporte:            |\n";
    cout << "|Mohamed Salah       |Mohamed Salah         |\n";
    cout << "|36 anos             |36 anos               |\n";
    cout << "|Hombre              |Masculino             |\n";
    cout << "|Arabe               |Hindu                 |\n";
    cout << " ===========================================\n";

    Juego::Auto();
    {
        Nivel::AutoT();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nAhora tendra que comparar la nacionalidad del pasajero\n\n";
    Juego::Manual();
    {
        Nivel::ManuT();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nEsta persona tiene antecedentes penales por trafico de organos, terrorismo y asesinato\npor lo que su acceso al pais no es permitido\n\n";
}
//NORMAL
void Nivel::nivel4() {
    cout << "NIVEL 4\n" << "                                                     PUNTAJE: " << pts << "\n\n";
    cout << " ___________________________________________\n";
    cout << "|ID:                 |Pasaporte:            |\n";
    cout << "|Saul Alvarez        |Saul Alvarez          |\n";
    cout << "|18/06/1990          |18/06/1990            |\n";
    cout << "|Hombre              |Masculino             |\n";
    cout << "|Mexicano            |Mexicano              |\n";
    cout << " ===========================================\n";

    Juego::Auto();
    {
        Nivel::AutoN();
        cout << "\n                                                     PUNTAJE: " << pts;
}
    cout << "\n\nAhora tendra que comparar el nombre completo del pasajero\n\n";
    Juego::Manual();
    {
        Nivel::ManuN();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nEsta persona no tiene ningun antecedente, por lo que su acceso al pais si es permitido\n\n";
}
//TERRORISTA
void Nivel::nivel5() {
    cout << "NIVEL 5\n" << "                                                     PUNTAJE: " << pts << "\n\n";
    cout << " ___________________________________________\n";
    cout << "|ID:                 |Pasaporte:            |\n";
    cout << "|Sadam Husein        |Sadam Hussein         |\n";
    cout << "|28/04/1937          |28/04/1937            |\n";
    cout << "|Hombre              |Masculino             |\n";
    cout << "|Iraqui              |Iraqui                |\n";
    cout << " ===========================================\n";

    Juego::Auto();
    {
        Nivel::AutoT();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nAhora tendra que comparar el nombre completo del pasajero\n\n";
    Juego::Manual();
    {
        Nivel::ManuT();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nEsta persona es buscada por 57 paises por terrorismo y trata de blancas\npor lo que su acceso al pais no es permitido\n\n";
}
//NORMAL
void Nivel::nivel6() {
    cout << "NIVEL 6\n" << "                                                     PUNTAJE: " << pts << "\n\n";
    cout << " ___________________________________________\n";
    cout << "|ID:                 |Pasaporte:            |\n";
    cout << "|Mamberroi Yedid     |Yedid Mamberroi       |\n";
    cout << "|23 anos             |23 anos               |\n";
    cout << "|Hombre              |Hombre                |\n";
    cout << "|Madagascar          |Madagascar            |\n";
    cout << " ===========================================\n";
    Juego::Auto();
    {
        Nivel::AutoN();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nAhora tendra que comparar la nacionalidad del pasajero\n\n";
    Juego::Manual();
    {
        Nivel::ManuN();
        cout << "\n                                                     PUNTAJE: " << pts;
    }
    cout << "\n\nEsta persona no tiene ningun antecedente, por lo que su acceso al pais si es permitido\n\n";
}

void Nivel::menu() {
    int opcion, op = 1;
    system("Color 0A");
    cout << "---------------------------------------------------------------\n";
    Beep(700, 200); system("Color 10");
    cout << "000000         0        000000  00000000  0000000     00000000    \n";
    Sleep(200); system("Color 90");
    cout << "0     0       0 0       0     0 0         0      0           0    \n";
    Sleep(200); system("Color A0");
    cout << "0     0      0   0      0     0 0         0      0          0     \n";
    Beep(700, 200); system("Color B0");
    cout << "000000      0000000     000000  000000    0000000          0      \n";
    Sleep(200); system("Color C0");
    cout << "0          0       0    0       0         0      0        0       \n";
    Sleep(200); system("Color D0");
    cout << "0         0         0   0       0         0       0     0         \n";
    Beep(700, 200); system("Color F0");
    cout << "0        0           0  0       00000000  0        0   00000000   \n";
    while (op == 1) {
        system("cls");
        system("Color 0A");
        cout << "---------------------------------------------------------------\n";
        cout << "000000         0        000000  00000000  0000000     00000000    \n";
        cout << "0     0       0 0       0     0 0         0      0           0    \n";
        cout << "0     0      0   0      0     0 0         0      0          0     \n";
        cout << "000000      0000000     000000  000000    0000000          0      \n";
        cout << "0          0       0    0       0         0      0        0       \n";
        cout << "0         0         0   0       0         0       0     0         \n";
        cout << "0        0           0  0       00000000  0        0   00000000   \n";
        cout << "---------------------------------------------------------------\n";
        cout << "1 - JUGAR\n";
        cout << "2 - Como jugar \n";
        cout << "3 - Salir del juego \n";
        cout << "---------------------------------------------------------------\n";
        cout << "Opcion: "; cin >> opcion;

        if (opcion == 1) {
            Beep(400, 700);
            system("cls");
            cout << "Elija una opcion\n\n" << "1 - Agente de aduanas\n\n" << "2 - Salir\n\n" << "Opcion: ";
            cin >> opcion;
            if (opcion == 1) {
                system("cls");
                system("Color 0E");
                Nivel::nivel1();
                system("pause"); system("cls"); system("Color 07");
                cout << "PUNTAJE:" << pts << "\n\nPasar al siguiente nivel = 1\n\nSalir = Cualquier numero\n\nOpcion: "; cin >> opcion;
                if (opcion == 1) {
                    system("cls");
                    system("Color 0E");
                Nivel::nivel2();
                    system("pause"); system("cls"); system("Color 07");
                    cout << "PUNTAJE:" << pts << "\n\nPasar al siguiente nivel = 1\n\nSalir = Cualquier numero\n\nOpcion: "; cin >> opcion;
                    if (opcion == 1) {
                        system("cls");
                        system("Color 0E");
                        Nivel::nivel3();
                        system("pause"); system("cls"); system("Color 07");
                        cout << "PUNTAJE:" << pts << "\n\nPasar al siguiente nivel = 1\n\nSalir = Cualquier numero\n\nOpcion: "; cin >> opcion;
                        if (opcion == 1) {
                            system("cls");
                            system("Color 0E");
                            Nivel::nivel4();
                            system("pause"); system("cls"); system("Color 07");
                            cout << "PUNTAJE:" << pts << "\n\nPasar al siguiente nivel = 1\n\nSalir = Cualquier numero\n\nOpcion: "; cin >> opcion;
                            if (opcion == 1) {
                                system("cls");
                                system("Color 0E");
                                Nivel::nivel5();
                                system("pause"); system("cls"); system("Color 07");
                                cout << "PUNTAJE:" << pts << "\n\nPasar al siguiente nivel = 1\n\nSalir = Cualquier numero\n\nOpcion: "; cin >> opcion;
                                if (opcion == 1) {
                                    system("cls");
                                    system("Color 0E");
                                    Nivel::nivel6();
                                    system("pause"); system("cls"); system("Color 07");
                                    {
                                        if (pts >= 1300) {
                                            system("Color A0");
                                            cout << "PUNTAJE FINAL: " << pts;
                                            Beep(300, 200);
                                            Beep(700, 200);
                                            Beep(300, 200);
                                            Beep(700, 200);
                                            Beep(300, 200);
                                            Beep(700, 200);
                                            cout << "\nHAS GANADO";
                                            Beep(700, 4000);
                                        }
                                        else if (pts < 1300) {
                                            system("Color C0");
                                            cout << "PUNTAJE FINAL: " << pts;
                                            Beep(800, 200);
                                            Beep(1500, 200);
                                            Beep(780, 200);
                                            Beep(1400, 200);
                                            Beep(760, 200);
                                            Beep(1300, 200);
                                            cout << "\n\nHAS PERDIDO";
                                            Beep(1000, 4000);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            pts = 0;
        }
        else if (opcion == 2) {
            Beep(400, 700);
            system("cls");
            system("Color 0B");
            cout << "Para comparar los datos tendra que escribirlos con espacios ya sea el nombre, fecha de nacimiento, etc\n";
            cout << "Ejemplo: \n\nLeonel-Messi\n\n40-anos\n\nDD-MM-AAAA\n\n";
            cout << "En caso de que aparezca un nombre con los apellidos movidos, lo unico que hara sera acomodarlos igual\n";
            cout << "\nPUNTAJE PARA GANAR = 1300 pts";
        }
        else if (opcion == 3) {
            system("cls");
            system("Color 09");
            cout << "\nGRACIAS POR JUGAR\n";
            return;
        }
        else if(opcion == false) {
            system("cls");
            system("Color CF");
            cout << "ERROR";
            Beep(350, 1000);
            return;
        }
        else {
            system("cls");
            system("Color 9F");
            cout << "ERROR";
            Beep(300, 1000);
            continue;
        }
        cout << "\n\n";
        cout << "Volver al menu = 1 \nSalir del juego = Cualquier otro numero \n";
        cout << "Elige una opcion: "; cin >> op;
        system("cls");
    }
    system("cls");
    system("Color 09");
    cout << "\nGRACIAS POR JUGAR\n";
}