#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main ()
{   
    string text;
    ifstream file;
    file.open("bilietai.txt");
    while (getline(file, text))
    {
        cout << text << endl;
    }
    file.close();
    cout << text << endl;

    return 0;
}