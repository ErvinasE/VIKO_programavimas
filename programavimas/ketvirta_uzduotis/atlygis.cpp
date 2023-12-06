#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

int main ()
{
    string pavarde, vardas;
    double dabartinisAtlyginimas, atnaujintasAtlyginimas, procentai,procentai2;
    ifstream file;
    file.open("salary.txt");
    ofstream file2;
    file2.open("newSalary.txt");

    for (int i = 0;i<3;i++)
    {
        file>>pavarde>>vardas>>dabartinisAtlyginimas>>procentai;
        procentai2 = procentai / 100;
        atnaujintasAtlyginimas = dabartinisAtlyginimas * (1 + procentai2);
        file2<<vardas<<" "<<pavarde<<" "<<fixed<<setprecision(2)<<atnaujintasAtlyginimas<<endl;

    }
    file.close();
    file2.close();








    return 0;   
}