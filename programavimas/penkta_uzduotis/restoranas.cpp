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

    double suma1, suma2, suma3, suma4, suma5, suma6, suma7, suma8 = 0;
    int pasirinkimas;
    string menuItem;

    string patiekalas[50];
    double patiekaloKaina[50];
    int kiekis = 0;


    while(expression)
    {
        cout << "Pasirinkite ka norite uzsisakyti" << endl;
        cin >> pasirinkimas;
        switch (pasirinkimas)
        {
        case 1:
            suma1=suma1+menuList[0].menuPrice;
            patiekalas[0] = menuList[0].menuItem;
            patiekaloKaina[0] = suma1;
            break;
        case 2:
            suma2 = suma2 + menuList[1].menuPrice;
            patiekalas[1] = menuList[1].menuItem;
            patiekaloKaina[1] = suma2;
            break;
        case 3:
            suma3=suma3+menuList[2].menuPrice;
            patiekalas[2] = menuList[2].menuItem;
            patiekaloKaina[2] = suma3;
            break;
        case 4:
            suma4 = suma4 + menuList[3].menuPrice;
            patiekalas[3] = menuList[3].menuItem;
            patiekaloKaina[3] = suma4;
            break;
        case 5:
            suma5=suma5+menuList[4].menuPrice;
            patiekalas[4] = menuList[4].menuItem;
            patiekaloKaina[4] = suma5;
            break;
        case 6:
            suma6 = suma6 + menuList[5].menuPrice;
            patiekalas[5] = menuList[5].menuItem;
            patiekaloKaina[5] = suma6;
            break;
        case 7:
            suma7=suma7+menuList[6].menuPrice;
            patiekalas[6] = menuList[6].menuItem;
            patiekaloKaina[6] = suma7;
            break;
        case 8:
            suma8 = suma8 + menuList[7].menuPrice;
            patiekalas[7] = menuList[7].menuItem;
            patiekaloKaina[7] = suma8;
            break;
        default:
            break;
        }
        if(pasirinkimas == 0)
        {
            break;
        }
        
    }
    for (int i = 0;i < 8;i++)
    {
        cout << patiekalas[i] << "  " << patiekaloKaina[i] << endl;
        if (patiekalas[i] == "")
        {
            break;
        }
    }



    return 0;
}