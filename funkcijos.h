#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H

#include "student.h"

bool rusiavimas(const Stud& a, const Stud& b, char metPas);
double vidurkis(Stud&);
double mediana(Stud&);
void ranka(std::vector<Stud>& studentai);
void isFailo(std::vector<Stud>& studentai);

#endif 