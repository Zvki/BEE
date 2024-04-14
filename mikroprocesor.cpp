#include <iostream>
#include <string>
#include "mikroprocesor.h"

mikroprocesor::mikroprocesor()
{
}

mikroprocesor::mikroprocesor(std::string p, double c, std::string nr, std::string ru , std::string rp , double sm, double cz, double nww)
{
	podmiot::producent = p;
	podmiot::cena = c;
	podmiot::nr_serii = nr;
	rodzina_ukl = ru;
	rdzen_p = rp;
	szerokosc_m = sm;
	czestotliwosc = cz;
	nap_we_wy = nww;
}

mikroprocesor::~mikroprocesor()
{
}

void mikroprocesor::modru()
{
	std::string x;
	std::cout << "Podaj rodzine uk³adów: \n";
	std::cin >> x;
	rodzina_ukl = x;
}

void mikroprocesor::modrp()
{
	std::string x;
	std::cout << "Podaj rdzen procesora: \n";
	std::cin >> x;
	rdzen_p = x;
}

void mikroprocesor::modsm()
{
	double x;
	std::cout << "Podaj szerokosc magistrali: \n";
	std::cin >> x;
	szerokosc_m = x;
}

void mikroprocesor::modcz()
{
	double x;
	std::cout << "Podaj czestotliwosc: \n";
	std::cin >> x;
	czestotliwosc = x;
}

void mikroprocesor::modnw()
{
	double x;
	std::cout << "Podaj napiecie wejscia/wyjscia: \n";
	std::cin >> x;
	nap_we_wy = x;
}

std::string mikroprocesor::getru() 
{
	return rodzina_ukl;
}

std::string mikroprocesor::getrp()
{
	return rdzen_p;
}

double mikroprocesor::getsm()
{
	return szerokosc_m;
}

double mikroprocesor::getcz()
{
	return czestotliwosc;
}

double mikroprocesor::getnw()
{
	return nap_we_wy;
}

void mikroprocesor::showmm()
{
	std::cout << podmiot::producent << " " << podmiot::cena << " " << podmiot::nr_serii << " "
		<< mikroprocesor::rodzina_ukl << " " << mikroprocesor::rdzen_p << " " << mikroprocesor::szerokosc_m
		<< " " << mikroprocesor::czestotliwosc << " " << mikroprocesor::nap_we_wy << std::endl;
}
