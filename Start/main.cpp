#include <iostream>
#include <climits>
#include <cctype>
#include <cstring>

using namespace std;

/*//welcome page
int main() 
{
    // Customer Name
    string first_name;
    string last_name;
    
    //Houses purchased
    int items {0};
    const long price {30};
    double tax {0.13};

    cout << "\nGreetings! Welcome to Saiful's window cleaning office\n============================" << endl;
    cout << "Enter Your Full Name: ";
    cin >> first_name;
    cin >> last_name;
    cout << endl;
    
    cout << "Hello " << first_name << " " << last_name << "," << endl;
    cout << "Number of windows you would like to clean (MASTERCARD ONLY): ";
    cin >> items;
    
    cout << "\nPRICING\n============================\n" << endl;
    cout << "COST WINDOW: $" << price << endl;;
    cout << "ITEMS PURCHASED: " << items << endl;
    cout << "COST: $" << price * items << endl;
    cout << "HST/GST: $" << items * price * tax << "   (" << tax << ")   " << endl;
    cout << "\n============================\n" << endl;
    cout << "PURCHASED\nTOTAL: $" << (price * items) + (items * price * tax) << endl;
    cout << "MASTERCARD: -$" << (price * items) + (items * price * tax) << endl << endl << endl;
    
 
    
    
}*/


int main() 
{
     cout << "\nPrimitive Type Information\n===============================\n" << endl;
     
     cout << "Char: " << sizeof(char) << " Bytes" << endl;
     cout << "String " << endl;
     cout << "Short: " << sizeof(short) << " Bytes" << endl;
     cout << "Int: " << sizeof(int) << " Bytes" << endl;
     cout << "Unsigned Int: " << sizeof(unsigned int) << " Bytes" << endl;
     cout << "Float: " << sizeof(float) << " Bytes" << endl;
     cout << "Double: " << sizeof(double) << " Bytes" << endl;
     cout << "Long: " << sizeof(long) << " Bytes" << endl;
     cout << "Long Long: " << sizeof(long long) << " Bytes" << endl;
     cout << "Long Double: " << sizeof(long double) << " Bytes" << endl;
     
     cout << "===============================\n" << endl;
     
     
     cout << "-- Minimum Values --" << endl;
     cout << "Char: " << CHAR_MIN << endl;
     cout << "Short: " << SHRT_MIN << endl;
     cout << "Int: " << INT_MIN << endl;
     cout << "Long: " << LONG_MIN << endl;
     cout << "Long Long: " << LLONG_MIN << endl;
     
     cout << "\n===============================\n" << endl;
     
     cout << "-- MAXIMUIM Values --" << endl;
     cout << "Char: " << CHAR_MAX << endl;
     cout << "Short: " << SHRT_MAX << endl;
     cout << "Int: " << INT_MAX << endl;
     cout << "Long: " << LONG_MAX << endl;
     cout << "Long Long: " << LLONG_MAX << endl;
     
     
}



/*int main() 
{
    
}*/