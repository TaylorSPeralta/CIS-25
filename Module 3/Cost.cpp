

# include <iostream>
using namespace std;
int main() {

    // Variables
string itemName;
int quantity;
float dollarCost;

cout<<"What is the name of the product:\t";
cin>>itemName;

cout<<"Enter the quanity of items:\t\t";
cin>>quantity;

cout<<"What is the cost of each item:\t\t";
cin>>dollarCost;

cout<<"The total cost for" <<itemName<<" is: \t\t$"<<(quantity *dollarCost)<<endl;

return 0;
}