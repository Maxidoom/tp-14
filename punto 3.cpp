#include <bits/stdc++.h>
using namespace std;

class Vehiculo {
public:
	virtual void acelerar() {
		cout << "El vehiculo esta acelerando" << endl;
	}
	virtual ~Vehiculo() {}
};

class Coche : public Vehiculo {
public:
	void acelerar() override {
		cout << "El coche acelera con 4 ruedas." << endl;
	}
};

class Moto : public Vehiculo {
public:
	void acelerar() override {
		cout << "La moto acelera con 2 ruedas." << endl;
	}
};

int main() {
	Vehiculo *v1 = new Coche();
	Vehiculo *v2 = new Moto();

	v1->acelerar();
	v2->acelerar();

	delete v1;
	delete v2;
	return 0;
}