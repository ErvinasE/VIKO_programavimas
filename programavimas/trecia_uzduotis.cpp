#include <iostream>
#include <string.h>

using namespace std;

void palindromas()
{
    string sk;
    cout << "Iveskite skaiciu" << endl;
    cin >> sk;
    cout << sk;
}
// balsiu tikrinimo funkcija
bool balses()
{   
    string raide;
    string balses[12] = {"a","ą","e","ę","ė","i","į","y","o","u","ų","ū"};
    cout << "Iveskite raide " << endl;
    cin >> raide;
    for (int i = 0;i<=12;i++)
    {
        if (raide == balses[i])
        {   
            return true;
            break;
        }
        if (raide != balses[i] && (i == 12))
        {
            return false;
        }
        else 
        {
            continue;
        }
    }       
} // DBD skaiciavimo funkcija
int dbd(int sk1, int sk2)
{   
    int d1 = 0, d2 = 0, dbd = 0;
    int liek = 1;
    int dal = 0;
    while (liek > 0)
    {
        liek = sk1 % sk2;
        dal = sk1 / sk2;

        sk1 = sk2;
        sk2 = liek;

        dbd = dal;
    }
}
int main ()
{
    int sk;
    int sk1;
    int sk2;
    while (true)
    {
        cout << "Pasirinkite kokia funckcija atlikti : 1 , 2, 3 ?" << endl;
        cin >> sk;
        
        switch (sk)
        {
            case 1:
            palindromas();
            break;
            case 2:
            cout << balses();
            break;
            case 3:
            cout << "iveskite 2 skaicius" << endl;
            cin >> sk1;
            cin >> sk2;
            cout << dbd(sk1,sk2);
            break;  
        }
    }
    return 0;
}