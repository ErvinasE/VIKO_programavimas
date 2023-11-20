#include <iostream>
#include <string.h>

using namespace std;

void palindromas()
{
    int num, sk, skaitmuo, atv = 0;
    cout << "Iveskite numeri : " << endl;
    cin >> num;
    sk = num;

    do
    {
        skaitmuo = num % 10;
        atv = (atv * 10) + skaitmuo;
        num = num / 10;


    } while (num!= 0);

    if (sk == atv)
    {
        cout << "Palindromas" << endl;
    }
    else 
    {
        cout << "nera palindromas" << endl;
    }

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
    int n = 0;
    while (liek > 0)
    {   
        if (sk1 > sk2 && n == 0)
        {
            d1 = sk1;
            d2 = sk2;
        }
        if (sk2 > sk1 && n == 0)
        {
            d1 = sk2;
            d2 = sk1;
        }
        
        liek = d1 % d2;
        dal = d1 / d2;

        d1 = d2;
        d2 = liek;

        dbd = dal;
        n++;

        if (d1 > 0 && d2 == 0)
        {
            dbd = d1;
            return dbd;
        }
        if (d2 > 0 && d1 == 0)
        {
            dbd = d2;
            return dbd;
        }

    }
}
int main ()
{
    int sk;
    int sk1;
    int sk2;
    while (true)
    {
        cout << "Pasirinkite kokia funckcija atlikti : 1 , 2, 3" << endl;
        cin >> sk;
        // if (sk == 0)
        // {
        //     break;
        // }
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