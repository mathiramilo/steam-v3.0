/* Laboratorio Programacion IV - INCO/FING/UDELAR
 * Laboratorio 4 -  Implementacion de funciones auxiliares
 * Autores (por nombre):
 *      Alexis Baladon
 *      Guillermo Toyos
 *      Jorge Machado
 *      Juan Jose Mangado
 *      Mathias Ramilo
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <limits> // Necesario para limpiar el buffer de entrada.
#include "../include/menuUtilities.h"

using namespace std;

namespace menuUtilities{

void cls(){
    cout << "\033[2J\033[1;1H";
}

void clinput(){
    cin.clear(); 
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
}

void pkey(){
    char t;
    cout << "Presione ENTER para volver al menu principal...\n";
    t = cin.get();
    if(t != '\n')
	clinput();
}

void ptitle(){
    cout << "\nBienvenido a,\n\n"
 "  $$$$$$\\    $$\\                                                        /$$$$$$       /$$$$$$  \n"
 " $$  __$$\\   $$ |                                                       /$$__  $$     /$$$_  $$ \n"
 " $$ /  \\__|$$$$$$\\    $$$$$$\\   $$$$$$\\  $$$$$$\\$$$$\\        /$$    /$$|__/  \\ $$    | $$$$\\ $$ \n"
 " \\$$$$$$\\  \\_$$  _|  $$  __$$\\  \\____$$\\ $$  _$$  _$$\\      |  $$  /$$/   /$$$$$/    | $$ $$ $$ \n"
 "  \\____$$\\   $$ |    $$$$$$$$ | $$$$$$$ |$$ / $$ / $$ |      \\  $$/$$/   |___  $$    | $$\\ $$$$ \n"
 " $$\\   $$ |  $$ |$$\\ $$   ____|$$  __$$ |$$ | $$ | $$ |       \\  $$$/   /$$  \\ $$    | $$ \\ $$$ \n"
 " \\$$$$$$  |  \\$$$$  |\\$$$$$$$\\ \\$$$$$$$ |$$ | $$ | $$ |        \\  $/   |  $$$$$$/ /$$|  $$$$$$/ \n"
 "  \\______/    \\____/  \\_______| \\_______|\\__| \\__| \\__|         \\_/     \\______/ |__/ \\______/  \n";
}


void reprintln(){
    cout << "\033[A                                                                                                 \r";
}
int takeInputRange(int min, int max){
    int controlVar;
    while(true){
        if (!(cin >> controlVar) || (controlVar > max || controlVar < min)) {
	    clinput();
	    reprintln();
	    cout << "Por favor ingrese una opcion valida("<<min<<"-"<<max<<"): " ;
	}
	else
	    break;
    }
    clinput();
    cout << endl;
    return controlVar;
}

bool boolSelect(){
    string x;
    while(true){
	getline(cin,x);
	if(x=="Si" || x=="1" || x== "si" || x == "s" || x=="y" || x=="Y" || x=="yes" || x=="yeah")
	    return true;
	if(x=="No" || x=="0" || x== "no" || x == "n" || x=="N")
	    return false;
	else{
	    clinput();
	    reprintln();
	    cout << "Por favor ingrese una opcion valida (y/n): ";
	}
    }
}

void funcionSecreta(string x){
    if (x == "Shrek" || x == "shrek"){
	cout << "\nSHREK IS LOVE; SHREK IS LIFE\n";	
cout <<"     ⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀ ⣀⣀⣤⣤⣤⣀⡀\n";
cout <<"    ⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀\n";
cout <<"    ⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆\n";
 cout <<"    ⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆\n";
 cout <<"    ⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆\n";
 cout <<"    ⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠸⣼⡿\n";
 cout <<"    ⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉\n";
 cout <<"    ⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇\n";
 cout <<"    ⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇\n";
 cout <<"    ⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇\n";
 cout <<"    ⠀⠀ ⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠇\n";
 cout <<"    ⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇\n";
 cout <<"    ⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ \n";
    }

}

}
