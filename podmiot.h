#pragma once
#include <iostream>

class podmiot {
protected:

	std::string producent, nr_serii;
	double cena;

public:
	std::string getp();
	std::string getnr();
	double getc();
	virtual void modp();
	virtual void modc();
	virtual void mods();
	
};