#include "Class_Almacen.hh"
#include "Class_Inventario.hh"

int main(){
    int n;
    cin >> n;
    Almacen alm;
    alm.leer(n);
    Inventario inv;
    
    bool cont = true;
    while (cont) {
        string opcion;
        cin >> opcion;
        if (opcion == "escribir") {
            int sala;
            cin >> sala;
            alm.escribir(sala);
        }
        else if (opcion == "reorganizar") {
            int sala;
            cin >> sala;
            alm.reorganizar(sala);
        }
        else if (opcion == "redimensionar") {
            int sala, filas, columnas;
            cin >> sala >> filas >> columnas;
            alm.redimensionar(sala, filas, columnas);
        }
        else if (opcion == "poner_items") {
            int sala, quant;
            string id;
            cin >> sala >> id >> quant;
            int sobra = alm.poner_items(sala, id, quant, inv);
            cout << sobra << endl;
        }
        else if (opcion == "quitar_items") {
            int sala, quant;
            string id;
            cin >> sala >> id >> quant;
            int sobra = alm.quitar_items(sala, id, quant, inv);
            cout << sobra << endl;
        }
        else if (opcion == "distribuir") {
            string id;
            int quant;
            cin >> id >> quant;
            int sobra = alm.distribuir(id, quant, inv);
            cout << sobra << endl;
        }
        else if (opcion == "compactar") {
            int sala;
            cin >> sala;
            alm.compactar(sala);
        }
        else if (opcion == "consultar_pos") {
            int sala, fila, columna;
            cin >> sala >> fila >> columna;
            alm.consultar_pos(sala, fila, columna);
        }
        else if (opcion == "consultar_prod") {
            string id;
            cin >> id;
            int prod = inv.consultar_prod(id);
            cout << prod << endl;
        }
        else if (opcion == "poner_prod") {
            string id;
            cin >> id;
            inv.poner_prod(id);
        }
        else if (opcion == "quitar_prod") {
            string id;
            cin >> id;
            inv.quitar_prod(id);
        }
        else if (opcion == "inventario") {
            inv.escribir();
        }
        else cont = false;
    }
}
