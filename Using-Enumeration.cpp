
#include <iostream>


enum Menu {FRIES, HAMBURGER, HOTDOG, DRINK};
void displayItemName (Menu);

using namespace std;

int main()
{

    int item;
    double price = 0;
    Menu menuItem;

    int ordered[] = {0,0,0,0};
    float prices[] = { 2.80, 4.99, 2.99, 1.20 };

    for (menuItem = FRIES; menuItem <= DRINK; menuItem = static_cast<Menu>(menuItem + 1))
    {
        cout << "How many orders of ";
        displayItemName(menuItem);
        cout << ":  ";
        cin >> ordered[menuItem];
    }

    for (menuItem = FRIES; menuItem <= DRINK; menuItem = static_cast<Menu>(menuItem + 1))
    {
        price += prices[menuItem] * ordered[menuItem];
    }

    cout << "Your order: " << endl;
    cout << "Total $" << price << endl;

    return 0;
}

void displayItemName (Menu d)
{
    switch(d)
    {
        case FRIES          : cout << "fries";
                              break;
        case HAMBURGER      : cout << "hamburgers";
                              break;
        case HOTDOG         : cout << "hotdogs";
                              break;
        case DRINK          : cout << "drinks";
    }
}
