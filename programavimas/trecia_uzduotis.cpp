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
            cout << "true";
            break;
        }
        if (raide != balses[i] && (i != 12))
        {
            cout << "false";
        }
        else 
        {
            continue;
        }


    }       
}
void dbd()
{

}

int main ()
{
    int sk;
    while (true)
    {
        cout << "Pasirinkite kokia funckcija atlikti : 1 , 2, 3 ?" << endl;
        cin >> sk;
        // while (sk != 1 || 2 || 3)
        // {
        //     cout << "pasirinkite galima varianta" << endl;
        //     cin >> sk;
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
            dbd();
            break;
        }




    }

    return 0;
}