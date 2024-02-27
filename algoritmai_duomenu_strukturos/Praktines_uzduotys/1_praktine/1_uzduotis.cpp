#include <fstream>
#include <iostream>

using namespace std;

int main ()
{   int mas[7] = {1, 6, 120, 2, -2, -6, -7};
    int nsuma = 0;
    int temp;
    int melementas, delementas;
    int didz_indeksas, maz_indeksas;
    int intervalo_sandauga = 1;
    int l = 0;
        // didziausio elemento radimas
        delementas = mas[0];
    for (l = 0;l<7;l++)
    {
        if (delementas < mas[l])
        {
            delementas = mas[l];
        }
        // skaiciuojame neigiamu elemntu suma
        if ( mas[l] < 0)
        {
            nsuma = nsuma + mas[l];
        }
    }
        // maziausio elemento radimas
        melementas = mas[0];
    for (int i = 0;i<7;i++)
    {
        if (melementas > mas[i])
        {
            melementas = mas[i];
        }
    }

    // maziausio ir didziausio elementu indekso suradimas
    for (int i = 0;i<7;i++)
    {
        if (mas[i] == delementas)
        {
            didz_indeksas = i;
        }
        if (mas[i] == melementas)
        {
            maz_indeksas = i;
        }
    }

    // elementu sandauga esanciu tarp didziausio ir maziausio intervalo
    for (int i = didz_indeksas + 1;i < maz_indeksas;i++)
    {
        intervalo_sandauga = intervalo_sandauga * mas[i];
    }

        // rikiavimas elementu nuo maziausio iki didziausio
    for (int j = 0;j<7;j++)
    {   
        for (int k = 0;k<7;k++)
        {
            if (mas[k] > mas[k+1])
            {
                temp = mas[k];
                mas[k] = mas[k+1];
                mas[k+1] = temp;
            }
        } 
    }
    // surusiuotas masyvas didejimo tvarka
    cout << "Surusiuotas masyvas didejimo tvarka :" << endl;
    for (int i = 0;i< 7;i++)
    {
        cout << mas[i] << ",";
    }
    cout << endl;
    cout << "Neigiamu skaiciu suma "<< nsuma << endl;
    cout << "Elementu esanciu tarp Didz. ir maz. intervalo sandauga: " << endl;
    cout << intervalo_sandauga << endl;










    return 0;
}