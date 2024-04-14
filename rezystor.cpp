#include <iostream>
#include <string>
#include "rezystor.h"

rezystor::rezystor()
{
}

rezystor::rezystor(std::string p, double c, std::string nr, double r, double m)
{
	podmiot::producent = p;
	podmiot::cena = c;
	podmiot::nr_serii = nr;
	rezystacja = r;
	moc = m;
}

rezystor::~rezystor()
{
}

double rezystor::getr() {
	return rezystacja;
}

double rezystor::getm() {
	return moc;
}

void rezystor::modrr() {
	double r;
	std::cout << "Podaj nowa rezystancje: ";
	std::cin >> r;
}

void rezystor::modrm() {
	double m;
	std::cout << "Podaj nowa moc: ";
	std::cin >> m;
}


void rezystor::showr() {
	std::cout << podmiot::producent << " " << podmiot::cena << " " << podmiot::nr_serii << " " << rezystacja << " " << moc << std::endl;
}

std::ostream& operator<<(std::ostream& stream, rezystor& output) {
	stream << output.rezystacja << std::endl;	
	return stream; 
}