#include <iostream>
#include <map>

std::map<std::string, int> BarcodeList();
std::map<std::string, int> MunimaleVoorraadList();
std::map<std::string, int> ActueleVoorraad();

int main() {
    std::map<std::string, int> MoonenLijst;
    MoonenLijst = BarcodeList();

    std::map<std::string, int> minimaleVoorraad;
    minimaleVoorraad = MunimaleVoorraadList();

    std::map<std::string, int> actueleVoorraad;
    actueleVoorraad = ActueleVoorraad();
    return 0;
}

std::map<std::string, int> BarcodeList(){
    std::map<std::string, int> MoonenLijst;
    MoonenLijst["Gevulde koeken zakken doorzichtig"] = 242269;
    MoonenLijst["Stokbroodzakken"] = 242289;
    MoonenLijst["Bakpapier"] = 339513;
    MoonenLijst["Etiketten"] = 360859;
    MoonenLijst["kleine kartonnetjes"] = 415671;
    MoonenLijst["Grote kartonnetjes"] = 345984;
    MoonenLijst["Sluitclips"] = 368164;
    MoonenLijst["Ovenreiniger"] = 386519;

    return MoonenLijst;
}

std::map<std::string, int> MunimaleVoorraadList(){
    std::map<std::string, int> MoonenLijst;
    MoonenLijst["Gevulde koeken zakken doorzichtig"] = 3;
    MoonenLijst["Stokbroodzakken"] = 4;
    MoonenLijst["Bakpapier"] = 3;
    MoonenLijst["Etiketten"] = 1;
    MoonenLijst["kleine kartonnetjes"] = 6;
    MoonenLijst["Grote kartonnetjes"] = 2;
    MoonenLijst["Sluitclips"] = 3;
    MoonenLijst["Ovenreiniger"] = 2;

    return MoonenLijst;
}

std::map<std::string, int> ActueleVoorraad(){
    std::map<std::string, int> MoonenLijst;
    MoonenLijst = BarcodeList();

    std::map<std::string, int> Voorraadlijst;

    std::map<std::string, int>::iterator i(MoonenLijst.begin());
    for(i; i != MoonenLijst.end(); i++){
        int voorraadstand = 0;
        std::cout << "wat is de voorraad van " << (*i).first << "? :";
        std::cin >> voorraadstand;
        Voorraadlijst[(*i).first] = voorraadstand;
    }

    std::map<std::string, int>::iterator j(Voorraadlijst.begin());
    for(j; j != Voorraadlijst.end(); j++){
        std::cout << "De voorraad van " << (*j).first << " is " << (*j).second << std::endl;
    }

    return Voorraadlijst;
}
