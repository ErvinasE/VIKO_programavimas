#include <fstream>
#include <iostream>

using namespace std;

int l = 0;
int z = 0;
int main ()
{   int nsuma = 0;
    int temp;
    int melementas, delementas;
    int mas[7] = {1, 6, 120, 2, -2, -6, -7};
    int mas2[7];
    for (int i = 0; i<=7;i++)
    {
        // skaiciuojame neigiamu elemntu suma
        if ( mas[i] < 0)
        {
            nsuma = nsuma + mas[i];
        }
    }
        // didziausio elemento radimas
        delementas = mas[0];
    for (l = 0;l<7;l++)
    {
        if (delementas < mas[l])
        {
            delementas = mas[l];
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

    for (int i = 0;i< 7;i++)
    {
        cout << mas[i] << ",";
    }
    cout << "Neigiamu skaiciu suma "<< nsuma << endl;
    cout << "Didziausias skaicius : " << delementas << endl;
    cout << "Maziausias skaicius : " << melementas << endl;










    return 0;
}