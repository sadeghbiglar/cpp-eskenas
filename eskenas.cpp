#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    while(true){
        /* code */
    
    
    int amount, ten_thousand, five_thousand, two_thousand, one_thousand;

    // Ask for user input
    cout << "Enter the amount: ";
    cin >> amount;

    // Calculate the required number of bills for each denomination
    ten_thousand = amount / 10000;
    amount = amount % 10000;
    five_thousand = amount / 5000;
    amount = amount % 5000;
    two_thousand = amount / 2000;
    amount = amount % 2000;
    one_thousand = amount / 1000;

    // Print the required number of bills for each denomination
    cout << "Number of 10,000 Toman bills: " << ten_thousand << endl;
    cout << "Number of 5,000 Toman bills: " << five_thousand << endl;
    cout << "Number of 2,000 Toman bills: " << two_thousand << endl;
    cout << "Number of 1,000 Toman bills: " << one_thousand << endl;
     
    }
   getch();
    return 0;
    
}
