#include <iostream>

using namespace std;


int main() 
{
    
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickle_value {5};
    const int penny_value{1};
    
    int balance {}, dollars {}, quarters {}, dimes {}, nickles {}, pennies{};
    int change_ammount{};
    int recipts {};
    string again;
    
    cout << "Coin exchange:" << endl;
    cout << "Do you want to draw change? \n(yes or no)" << endl;
    cin >> again;
    while (again == "yes" || again == "Yes") 
    {
        recipts++;
        cout << "\n===================================" << endl;
        cout << "\nRecipt Number: " << recipts << endl;
        cout << "Insert ammount of money that you want change for: ";
        cin >> change_ammount;
    
        dollars = change_ammount / dollar_value;
        balance = change_ammount % dollar_value;
    
        quarters = balance / quarter_value;
        balance %= quarter_value;
    
        dimes = balance / dime_value;
        balance %= dime_value;
    
        nickles = balance / nickle_value;
        balance %= nickle_value;
    
        pennies = balance / penny_value;
        balance %= penny_value;
    
        cout << "\n===================================\n----Total Change----" << endl;
        cout << "Dollars: " << dollars << endl;
        cout << "Quarters: " << quarters << endl;
        cout << "Dimes: " << dimes << endl;
        cout << "Nickles: " << nickles << endl;
        cout << "Pennies: " << pennies << endl;
        cout << "\n===================================\n" << endl;
    
        cout << "\nWould you like to covert your money into change? \n(yes or no)" << endl;
        cin >> again;
    
    }
    cout << "\n===================================" << endl;
    cout << "Total Recipts: " << recipts << endl;
    cout << "Goodbye..." << endl;
    
    
}

