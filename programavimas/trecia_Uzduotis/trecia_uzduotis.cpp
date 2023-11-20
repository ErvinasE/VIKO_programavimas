#include <iostream>
#include <string.h>

using namespace std;

void palindromas()
{

}

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
}
int dbd(int sk1, int sk2)
{
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
            dbd(sk1,sk2);
            break;  
        }
    }

    return 0;
}