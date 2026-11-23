#include <bits/stdc++.h>
using namespace std;

class InstrumentoMusical {
public:
	virtual void tocar() {
		cout << "Tocando un instrumento." << endl;
	}
	virtual ~InstrumentoMusical() {}
};

class Piano : public InstrumentoMusical {
public:
	void tocar() override {
		cout << "Tocando el piano de manera elegante." << endl;
	}
};

class Guitarra : public InstrumentoMusical {
public:
	void tocar() override {
		cout << "Tocando la guitarra de manera agresiva." << endl;
	}
};

class Flauta : public InstrumentoMusical {
public:
	void tocar() override {
		cout << "Tocando la flauta de manera delicada." << endl;
	}
};

int main() {
	InstrumentoMusical *orquesta[3];
	orquesta[0] = new Piano();
	orquesta[1] = new Guitarra();
	orquesta[2] = new Flauta();

	for(int i = 0; i < 3; i++) {
		orquesta[i]->tocar();
	}

	for(int i = 0; i < 3; i++) {
		delete orquesta[i];
	}
	return 0;
}