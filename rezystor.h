#pragma once
#include "podmiot.h"
#include <iostream>

class rezystor: public podmiot {
private:

	double rezystacja, moc;

public:

	rezystor();
	rezystor(std::string, double, std::string, double, double);
	~rezystor();
	double getr();
	double getm();
	void modrr();
	void modrm();
	void showr();
	
	friend std::ostream& operator<<(std::ostream& stream, rezystor&);

};
