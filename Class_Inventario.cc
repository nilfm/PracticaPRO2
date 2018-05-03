#include "Class_Inventario.hh"

Inventario::Inventario() { }

Inventario::~Inventario() { }

int Inventario::consultar_prod(const string& id) const {
    return inv[id]; //estamos seguros que existe por la precondición
}

bool Inventario::esta_dado_de_alta(const string& id) const {
    return inv.find(id) != inv.end();
}

void Inventario::poner_prod(const string& id) {
    inv.insert(pair<string, int>(id, 0));
}

void Inventario::quitar_prod(const string& id) {
    inv.erase(id);
}

void Inventario::escribir() const {
    for (map<string, int>::const_iterator it = inv.begin(); it != inv.end(); it++) {
        cout << it->first << " " << it-> second << endl;
    }
}
