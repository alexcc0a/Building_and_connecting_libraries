#include "rhombus.h"
#include "parallelogram.h"

Rhombus::Rhombus(int a, int A, int B):Parallelogram(a, b, A, B){
	shapeName = "����";
	this->a = this->b = this->c = this->d = a;
};