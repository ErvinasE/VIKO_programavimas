#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{

    string raktas, tekstas;

    string tekstas_str[50];

    int indeksas_tekstas, indeksas_abecele;

    int mod = 0;

    int num = 0;

    string abecele_lt[32] = {"a", "ą", "b", "c", "č", "d", "e", "ę", "ė", "f", "g", "h", 
    "i", "į", "y", "j", "k", "l", "m", "n", "o", "p", "r", "s", "š", "t", "u", "ų", "ū",
    "v", "z", "ž"};



    cout << "Iveskite teksta" << endl;
    // cin >> tekstas;
    cin >> tekstas;



    for (int i = 0;i<= tekstas.size();i++)
    {
        cout << i << endl;
        tekstas_str[i] = tekstas[i];
        for (int j = 0;j <= 32;j++)
        {
            if (tekstas_str[i] == abecele_lt[j])
            {
                cout << "Skaicius :" << j << " raide: " << abecele_lt[j];
                cout << endl;

                num++;
                if (num == 1)
                {
                    
                    break;
                }


            }
        }
    }

    




    return 0;
} 