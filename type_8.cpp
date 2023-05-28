#include <iostream>
#include <cmath>
#include "type_8.h"

type8::type8(double a1, double b1) {
	A = a1;
	B = b1;
}
void type8::Get_answer() {
	double x = ((-1)*B)/A;
	std::cout << "Корни уравнения: " << std::endl;
	std::cout << "X1 = 0" << std::endl << "X2 = " << x << std::endl;
}
void type8::show() {
	std::cout<<"Уравнение "<< A << "*x^2 + "<<B<<"*x =0 " << std::endl;
}