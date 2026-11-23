#include <bits/stdc++.h>
using namespace std;

class Figura {
public:
	virtual double calcularArea() = 0;
	virtual ~Figura() {}
};

class Rectangulo : public Figura {
private:
	double alto, ancho;
public:
	Rectangulo(double a, double an) : alto(a), ancho(an) {}

	double calcularArea() override {
		return alto * ancho;
	}
};

class Circulo : public Figura {
private:
	double radio;
public:
	Circulo(double r) : radio(r) {}

	double calcularArea() override {
		return 3.14159 * radio * radio;
	}
};

int main() {
	Figura *fig1 = new Rectangulo(5.0, 3.0);
	Figura *fig2 = new Circulo(4.0);

	cout << "Área del Rectángulo: " << fig1->calcularArea() << endl;
	cout << "Área del Círculo: " << fig2->calcularArea() << endl;

	delete fig1;
	delete fig2;
	return 0;
}