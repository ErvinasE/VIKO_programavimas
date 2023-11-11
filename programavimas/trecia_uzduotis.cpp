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
    int liek = 1;
    int dbd = 0;
    int dal1, dal2;
    if ( sk1 > sk2)
    {
        dal1 = sk1;
        dal2 = sk2;
    }
    else 
    {
        dal1 = sk1;
        dal2 = sk2;
    }



    while (liek >= 0)
    {   
        liek = dal1 % dal2;
        dal2 = dal1;
        dal2 = liek;
        cout << liek << endl;
        if (sk1 == 0 && liek == 0 && (dal1 / dal2 > 0))
        {   
            dal1 % dal2; 
            cout << "DBD: " << dbd << endl;
        }
        else if (sk2 == 0)
        {   dbd = sk1;
            cout << "DBD: " << dbd << endl;
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