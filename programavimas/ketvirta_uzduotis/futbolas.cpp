#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

int main ()
{   
    double kaina, pardBilietai, suma;
    ifstream file;
    file.open("bilietai.txt");
    for (int i = 0;i<4;i++)
    {
        file>>kaina>>pardBilietai;
        cout << fixed << setprecision(0)<<" Bielietu skaicius : " << pardBilietai;
        suma = pardBilietai * kaina;
        cout << fixed << setprecision(2)<<" Bendra pardavimu suma :" << suma << endl;
    }

    file.close();
    return 0;
}