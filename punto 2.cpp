#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    virtual void hacerSonido() {
        cout << "El animal emite un sonido genérico." << endl;
    }
    virtual ~Animal() {}
};

class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "El perro hace guau guau" << endl;
    }
};

class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "El gato hace miau miau" << endl;
    }
};

class Pato : public Animal {
public:
    void hacerSonido() override {
        cout << "El pato hace cuac cuac" << endl;
    }
};

int main() {
    Animal *misAnimales[3];
    misAnimales[0] = new Perro();
    misAnimales[1] = new Gato();
    misAnimales[2] = new Pato();

    for(int i = 0; i < 3; i++) {
        misAnimales[i]->hacerSonido();
    }


    for(int i = 0; i < 3; i++) {
        delete misAnimales[i];
    }
    return 0;
}