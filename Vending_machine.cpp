#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
    int category,product,quantity,condition;
    double Total_Bill=0.0,user_money=0.0,pay=0.0;
    string order;
    cout << "*****************************************" << endl;
    cout << "*            VENDING MACHINE            *" << endl;
    cout << "*****************************************" << endl;
    cout << "*   Select a product category:          *" << endl;
    cout << "*   1. Drinks                           *" << endl;
    cout << "*   2. Snacks                           *" << endl;
    cout << "*   3. Candies                          *" << endl;
    cout << "*****************************************" << endl;
    cout << "Enter the category number: ";
    cin >> category;
    system("cls");
    switch (category)
    {
    case 1:
    cout << "*****************************************" << endl;
    cout << "*          AVAILABLE DRINKS             *" << endl;
    cout << "*****************************************" << endl;
    cout << "1. Water    - 50PKR                     *" << endl;
    cout << "2. Soda     - 60PKR                     *" << endl;
    cout << "3. Juice    - 70PKR                     *" << endl;
    cout << "*****************************************" << endl;
    cout << "Select a drink by entering the product number: ";
    cin >> product;
    cout << "Enter the quantity you want to buy :";
    cin >> quantity;
    system("cls");
    switch (product)
    {
        case 1:
        cout << "You selected Water";
        Total_Bill = quantity * 50;
        order = "Water";
        break;
        case 2:
        cout << "You selected Soda";
        Total_Bill = quantity * 60;
        order = "Soda";
        break;
        case 3:
        cout << "You selected Juice";
        Total_Bill = quantity * 70;
        order = "Juice";
        break;
    
    default:
    cout << "Invalid Selection!";
        return 0;
		break;
    }
        break;
        case 2:
    cout << "*****************************************" << endl;
    cout << "*          AVAILABLE SNACKS             *" << endl;
    cout << "*****************************************" << endl;
    cout << "1. Chips    - 50PKR                     *" << endl;
    cout << "2. Cookies  - 40PKR                     *" << endl;
    cout << "3. Crackers - 60PKR                     *" << endl;
    cout << "*****************************************" << endl;
    cout << "Select a snack by entering the product number: ";
    cin >> product; 
   if(product > 3)
   {
    cout << "You entered a Invalid product number!";
    return 0;
}
    cout << "Enter the quantity you want to buy :";
    cin >> quantity;
    system("cls");
    switch (product)
    {
        case 1:
        cout << "You selected Chips";
        Total_Bill = quantity * 50;
        order = "Chips";
        break;
        case 2:
        cout << "You selected Cookies";
        Total_Bill = quantity * 40;
        order = "";
        order = "Cookies";
        break;
        case 3:
        cout << "You selected Crackers";
        Total_Bill = quantity * 60;
        order = "Crackers";
        break;
    
    default:
    cout << "Invalid Selection!";
        return 0;
		break;
        
    }
        break;
        case 3:
    cout << "*****************************************" << endl;
    cout << "*          AVAILABLE CANDIES            *" << endl;
    cout << "*****************************************" << endl;
    cout << "1. Chocolate    - 30PKR                 *" << endl;
    cout << "2. Gummy Bears  - 40PKR                 *" << endl;
    cout << "3. Lollipops    - 20PKR                 *" << endl;
    cout << "*****************************************" << endl;
    cout << "Select a candy by entering the product number: ";
    cin >> product;
    cout << "Enter the quantity you want to buy :";
    cin >> quantity;
    system("cls");
    switch (product)
    {
        case 1:
        cout << "You selected Chocolate";
        Total_Bill = quantity * 30;
        order = "Chocolate";
        break;
        case 2:
        cout << "You selected Gummy Bears";
        Total_Bill = quantity * 40;
        order = "Gummy Bears";
        break;
        case 3:
        cout << "You selected Lollipops";
        Total_Bill = quantity * 20;
        order = "Lollipops";
        break;
    
    default:
    cout << "Invalid Selection!";
        return 0;
		break;
    }
        break;
    default:
        cout << "Invalid Category Selection!";
        return 0;
		break;
    }
    system("cls");
    cout << "Your total Amount is \"" << Total_Bill<<"\"PKR Please enter Your money!:";
    cin >> user_money;
    if(user_money < Total_Bill)
    condition = 1;
    switch (condition)
    {
    case 1:
    system("cls");
        cout << " \nSorry, You have not enough money to proceed this transaction. ";
		cout << "\nWe have returned your " << user_money << " PKR";
        return 0;
		break;
    case 0:
       double change = user_money - Total_Bill;
        cout << "*****************************************\n";
        cout << "*               RECEIPT                 *\n";
        cout << "*****************************************\n";
        cout << "*   Item: " << quantity << " pieces - " << order << "\n";
        cout << "*   Price per item: " << Total_Bill / quantity << " PKR              *\n";
        cout << "*---------------------------------------*\n";
        cout << "*   Total amount:   " << setw(7) << Total_Bill << " PKR         *\n";
        cout << "*   Paid amount:    " << setw(7) << user_money << " PKR         *\n";
        cout << "*---------------------------------------*\n";
        cout << "*   Change:         " << setw(7) << change << " PKR         *\n";
        cout << "*****************************************\n";
        cout << "*   Thank you for your purchase!        *\n";
        cout << "*   Hope you buy again!                 *\n";
        cout << "*****************************************\n";
        break;
    }
    
return 0;
}
