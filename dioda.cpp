#include "dioda.h"

dioda::dioda()
{
}

dioda::dioda(std::string p, double c, std::string nr, std::string tp, std::string td , double pp , double nw)
{
	podmiot::producent = p;
	podmiot::cena = c;
	podmiot::nr_serii = nr;
	typ_pros = tp;
	typ_diody = td;
	prad_prze = pp;
	nap_wst = nw;
}

dioda::~dioda()
{
}

void dioda::modtp()
{
	std::string x;
	std::cout << "Podaj typ prosto: \n";
	std::cin >> x;
	typ_pros = x;
}

void dioda::modtd()
{
	std::string x;
	std::cout << "Podaj typ diody: \n";
	std::cin >> x;
	typ_diody = x;
}

void dioda::modpp()
{
	double x;
	std::cout << "Podaj prad przewodzenia: \n";
	std::cin >> x;
	prad_prze = x;
}

void dioda::modnw()
{
	double x;
	std::cout << "Podaj napiecie wsteczne: \n";
	std::cin >> x;
	nap_wst = x;
}

std::string dioda::gettp()
{
	return typ_pros;
}

std::string dioda::gettd()
{
	return typ_diody;
}

double dioda::getpp()
{
	return prad_prze;
}

double dioda::getnw()
{
	return nap_wst;
}

void dioda::showd()
{
	std::cout << podmiot::producent << " " << podmiot::cena << " " << podmiot::nr_serii << " " << typ_pros << " " << typ_diody << " "
		<< prad_prze << " " << nap_wst << std::endl;
}
