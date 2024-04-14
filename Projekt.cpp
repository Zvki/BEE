#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>


#include "user.h"
#include "rezystor.h"
#include "tyrystor.h"
#include "podmiot.h"
#include "dioda.h"
#include "mikroprocesor.h"
#include "Funkcje.h"

typedef std::vector < std::vector<std::string>> macierz;	
typedef std::vector <rezystor*> vr;
typedef std::vector <dioda*> vd;
typedef std::vector < mikroprocesor *> vm;


int main()
{
	macierz danerez = readdata("rezystory.txt");
	vr rezystory;
	for (const auto& l : danerez) {
		auto* rez = new rezystor(l[0], std::stod(l[1]), l[2], std::stod(l[3]), std::stod(l[4]));
		rezystory.emplace_back(rez);
	}
	macierz danediody = readdata("diody.txt");
	vd diody;
	for (const auto& l : danediody) {
		auto* dio = new dioda(l[0], std::stod(l[1]), l[2], l[3], l[4], std::stod(l[5]), std::stod(l[6]));
		diody.emplace_back(dio);
	}
	macierz danemikro = readdata("mikroprocesory.txt");
	vm mikroprocesory;
	for (const auto& l : danemikro) {
		auto* mikro = new mikroprocesor(l[0], std::stod(l[1]), l[2], l[3], l[4], std::stod(l[5]), std::stod(l[6]), std::stod(l[7]));
		mikroprocesory.emplace_back(mikro);
	}

	login(rezystory , diody, mikroprocesory);
}

