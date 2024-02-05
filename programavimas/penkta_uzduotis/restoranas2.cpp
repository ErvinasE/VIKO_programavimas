#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int MENU_SIZE = 8;

void showMenu(const string menuItems[], const double menuPrices[]) {
    cout << "Meniu:" << endl;
    for (int i = 0; i < MENU_SIZE; ++i) {
        cout << i + 1 << ". " << menuItems[i] << "  " << fixed << setprecision(2) << menuPrices[i] << "€" << endl;
    }
}

void printCheck(const string patiekalas[], const double patiekaloKaina[], const int kiekis[]) {
    ofstream file("cekis.txt");
    double total = 0;

    file << "Užsakytos prekės:" << endl;
    for (int i = 0; i < MENU_SIZE; ++i) {
        if (kiekis[i] > 0) {
            file << kiekis[i] << " " << patiekalas[i] << "  " << fixed << setprecision(2) << patiekaloKaina[i] << "€"<< endl;
            total += patiekaloKaina[i];
        }
    }

    file << "Mokesciai :" << total * 0.09 << "€" << endl;
    file << "Viso: " << fixed << setprecision(2) << total << "€" << endl;
    file.close();
}

void getData(string menuItems[], double menuPrices[]) {
    menuItems[0] = "Kiaušinienė";
    menuItems[1] = "Kiaulienos šoninė su keptu kiaušiniu";
    menuItems[2] = "Keksiukas su vyšnia";
    menuItems[3] = "Prancūziškas skrebutis";
    menuItems[4] = "Vaisių salotos";
    menuItems[5] = "Pusryčių dribsniai";
    menuItems[6] = "Kava";
    menuItems[7] = "Arbata";

    menuPrices[0] = 1.45;
    menuPrices[1] = 2.45;
    menuPrices[2] = 0.99;
    menuPrices[3] = 1.99;
    menuPrices[4] = 2.49;
    menuPrices[5] = 0.69;
    menuPrices[6] = 0.50;
    menuPrices[7] = 0.75;
}

int main() {
    string menuItems[MENU_SIZE];
    double menuPrices[MENU_SIZE];

    double mokestis;

    getData(menuItems, menuPrices);

    showMenu(menuItems, menuPrices);

    int pasirinkimas;
    string patiekalas[MENU_SIZE];
    double patiekaloKaina[MENU_SIZE];
    int kiekis[MENU_SIZE] = { 0 };

    cout << "Pradėkite užsakymą (Įveskite prekės numerį, 0 - baigti):" << endl;
    while (true) {
        cin >> pasirinkimas;
        if (pasirinkimas == 0) {
            break;
        }

        if (pasirinkimas >= 1 && pasirinkimas <= MENU_SIZE) {
            int index = pasirinkimas - 1;
            patiekalas[index] = menuItems[index];
            patiekaloKaina[index] += menuPrices[index];
            kiekis[index]++;
        } else {
            cout << "Neteisingas prekės numeris! Pasirinkite galiojantį numerį arba įveskite 0, norėdami baigti." << endl;
        }
    }

    printCheck(patiekalas, patiekaloKaina, kiekis);

    return 0;
}
