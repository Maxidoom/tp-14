#include <bits/stdc++.h>
using namespace std;

class Empleado {
protected:
	string nombre;
	double salarioBase;
public:
	Empleado(string nom, double sal) : nombre(nom), salarioBase(sal) {}

	virtual double calcularSalario() {
		return salarioBase;
	}
	virtual ~Empleado() {}
};

class Gerente : public Empleado {
private:
	double bonoExtra;
public:
	Gerente(string nom, double sal, double bono) : Empleado(nom, sal), bonoExtra(bono) {}

	double calcularSalario() override {
		return salarioBase + bonoExtra; 
	}
};

class Vendedor : public Empleado {
private:
	double comisionVentas;
public:
	Vendedor(string nom, double sal, double comision) : Empleado(nom, sal), comisionVentas(comision) {}

	double calcularSalario() override {
		return salarioBase + comisionVentas; 
	}
};

int main() {
	Empleado *emp1 = new Gerente("Carlos", 1500.0, 500.0);
	Empleado *emp2 = new Vendedor("Ana", 1000.0, 300.0);

	cout << "Salario del gerente Carlos: $" << emp1->calcularSalario() << endl;
	cout << "Salario de la vendedora Ana: $" << emp2->calcularSalario() << endl;

	delete emp1;
	delete emp2;
	return 0;
}