#include <fstream>
#include <iostream>

using namespace std;

int main ()
{
    // suspaudimo kiekis GALI but: masyvo dydis * 1.5??????? pvz.:8*1.5=12
    int mas[8] = {4, 6, 8, 2, -2, -6, -4, -9};
    int didz_elementas;
    int pask_teig_indeksas;
    int intervalo_suma = 0;

    int temp;
    // intervalas
    int a = 4;
    int b = 10;
    // intervalu skaiciu kiekis
    int kiek = 0;
    // skaiciuojame didziausia elementa
    didz_elementas = mas[0];
    for (int i = 0;i < 8;i++)
    {
        if (mas[i] > didz_elementas)
        {
            didz_elementas = mas[i];
        }
    }
    cout <<  "Didziausias elementas:" << didz_elementas << endl;
    // surandame paskutini teigiama elementa ir jo masyvo indeksa
    int j = 7;
    while (mas[j] < 0)
    {
        j--;
    }
    pask_teig_indeksas = j;
    // skaiciuojame suma elementu, esanciu iki paskutinio teigiamo elemento
    for (int i = 0;i < pask_teig_indeksas;i++)
    {
        intervalo_suma = intervalo_suma + mas[i];
    }
    cout << "Elementu suma, esanciu iki paskutinio teigiamo: " << intervalo_suma << endl;
    // suspaudziame masyva pasalinus atitinkamus elementus
    for (int i = 0;i < 8; i++)
    {
        for (int j = 0; j <= 8;j++)
        {   
            if (mas[j] >= a && mas[j] <= b)
            {   
                temp = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = temp;
                kiek++;
            }
            else
            {
                continue;
            }
        }
    }
    // daliname is 12, nes tiek veiksmu atlieka keitimu suspaudimo algoritmas
    kiek = kiek / 12;
    // prie masyvo galo pridedame tarp intervalo skaiciu kiekio nulius
    for (int i = 8;i >=8-kiek;i--)
    {
        mas[i] = 0;
    }
    // spausdiname suspausta masyva
    for (int i = 0;i < 8;i++)
    {
        cout << mas[i] << ",";
    }
    cout << endl;
    return 0;
}