#include <iostream>
#include <string>
#include "user.h"



void administrator::wczytaj_haslo(){
	std::string passin;
	do {
		std::cout << "Podaj haslo: ";
		std::cin >> passin;

	} while (!(pass == passin));

}

int administrator::getk() {
	return k;
}

void administrator::zmk() {

	int kk;
	std::cout << "Wprowadz: ";
	std::cin >> kk;
	k = kk;
}

void uzytkownik::zmu() {
	int kk;
	std::cout << "Wprowadz: ";
	std::cin >> kk;
	u = kk;
}

uzytkownik::uzytkownik()
{
	u = 0;
}

int uzytkownik::getu() {
	return u;
}


