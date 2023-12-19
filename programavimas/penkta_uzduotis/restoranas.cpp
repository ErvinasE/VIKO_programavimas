#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

struct menuItemList{
    double menuPrice;
    string menuItem;
};

void getData(menuItemList* meniuList)
{
    string menniuItem[8] = {"Kiaušinienė", "Kiaulienos šoninė su keptu kiaušiniu", "Keksiukas su vyšnia", "Prancūziškas skrebutis", "Vaisių salotos", "Pusryčių dribsniai", "Kava", "Arbata"};
    double meniuPrice[8] = {1.45, 2.45, 0.99, 1.99, 2.49, 0.69, 0.50, 0.75};
    for (int i = 0;i<8;i++)
    {
        meniuList[i].menuItem = menniuItem[i];
        meniuList[i].menuPrice = meniuPrice[i];
    }
}
void showMenu(menuItemList* meniuList)
{
    for (int i=0;i<8;i++)
    {
        cout << meniuList[i].menuItem <<"  " << fixed << setprecision(2) << meniuList[i].menuPrice << "€" << endl;
    }


}
void printCheck()
{

}
int main()
{
    menuItemList menuList[8];
    getData(menuList);
    cout << "Sveiki atvykę į restoraną „Programuotoju_Smukle" << endl;
    showMenu(menuList);
    bool expression = true;

    double suma=0;
    int pasirinkimas;

    while(expression)
    {
        cout << "Pasirinkite ka norite uzsisakyti" << endl;
        cin >> pasirinkimas;
        switch (pasirinkimas)
        {
        case 1:
            suma=suma+menuList[0].menuPrice;
            break;
        case 2:
            suma = suma + menuList[1].menuPrice;
        case 3:
            suma=suma+menuList[2].menuPrice;
            break;
        case 4:
            suma = suma + menuList[3].menuPrice;
        case 5:
            suma=suma+menuList[4].menuPrice;
            break;
        case 6:
            suma = suma + menuList[5].menuPrice;
        case 7:
            suma=suma+menuList[6].menuPrice;
            break;
        case 8:
            suma = suma + menuList[7].menuPrice;
        
        default:
            break;
        }
        if(pasirinkimas == 0)
        {
            break;
        }
    }



    return 0;
}