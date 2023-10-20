#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    // kintamieji
    string raktas, tekstas;

    string tekstas_str[50], raktas_str[50];

    string uzsifruotas_zodis;

    int mod = 0;
    
    int tektas_indeksas[50];

    int num, num2 = 0;


    // lietuviska abecele
    string abecele_lt[32] = {"a", "ą", "b", "c", "č", "d", "e", "ę", "ė", "f", "g", "h", 
    "i", "į", "y", "j", "k", "l", "m", "n", "o", "p", "r", "s", "š", "t", "u", "ų", "ū",
    "v", "z", "ž"};



    cout << "Iveskite teksta" << endl;
    // cin >> tekstas;
    cin >> tekstas;
    cout << "Iveskite rakta" << endl;
    cin >> raktas;


    // zodzio tikrinimas
    for (int i = 0;i<= tekstas.size();i++)
    {
        tekstas_str[i] = tekstas[i];
        for (int j = 0;j <= 32;j++)
        {
            if (tekstas_str[i] == abecele_lt[j])
            {   
                //testavimas ar veikia kodas
                cout << "Skaicius :" << j << " raide: " << abecele_lt[j] << endl;
                tektas_indeksas[i] = j;

                // kodas kad nesikartotu pirma zodzio raide
                num++;
                if (num == 1)
                {
                    
                    break;
                }
            }
        }
    }

    // rakto tikrinimas

    for (int k = 0;k<=raktas.size();k++)
    {
        raktas_str[k] = raktas[k];
        for (int l = 0;l <32;l++)
        {
            if (raktas_str[k] == abecele_lt[l])
            {
                cout << "Skaicius rakto : " << l << " raide: " << abecele_lt[l] << endl;
                
                mod = tektas_indeksas[k] + l;
                if (mod > 32)
                {
                    mod = mod - 32;
                }
                cout << "MOD : " << mod << endl;
                
                // kodas, kad nesikartotu pirma zodzio raide
                num2++;
                if (num2 == 1)
                {
                    break;
                }

            }
        }
    }




    return 0;
} 