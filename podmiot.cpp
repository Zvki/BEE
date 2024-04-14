#include <iostream>
#include <string>
#include "podmiot.h"

std::string podmiot::getp() {
	return producent;
}

std::string podmiot::getnr() {
	return nr_serii;
}

double podmiot::getc() {
	return cena;
}

void podmiot::modp() {
	std::string x;
	std::cout << "Podaj nowego producenta: ";
	std::cin >> x;
	producent = x;
}

void podmiot::modc() {
	double x;
	std::cout << "Podaj nowa cene: ";
	std::cin >> x;
	cena = x;
}

void podmiot::mods() {
	int x;
	std::cout << "Podaj nowy numer serii ";
	std::cin >> x;
	nr_serii = x;
}