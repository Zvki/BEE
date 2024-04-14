#pragma once
#ifndef Funkcje.h

typedef std::vector < std::vector<std::string>> macierz;
typedef std::vector <rezystor*> vr;
typedef std::vector <dioda*> vd;
typedef std::vector < mikroprocesor*> vm;


macierz readdata(const std::string& file_name);

void login(const vr& r, const vd& d, const vm& m);

void uzytk(uzytkownik u1, const vr& r, const vd& d, const vm& m);

void admin( const vr& r, const vd& d, const vm& m);

void viewb(const vr& r, const vd& d, const vm& m);

void wypisz_vector_vr(const vr& r, const vd& d, const vm& m);

void wypisz_vector_vd(const vr& r, const vd& d, const vm& m);

void wypisz_vector_vm(const vr& r, const vd& d, const vm& m);

void modb(const vr& r, const vd& d, const vm& m);

void modr(const vr& r, const vd& d, const vm& m);
#endif // !Funkcje.h


