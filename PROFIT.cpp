#include <iostream>
using namespace std;
int main(){
// Variable declaration
double sell, buy,profit;
//ask user for input
cout<<"What is the buying price of the vehicle: \n";
cin>>buy;
cout<< "What is the selling price of the vehicle \n";
cin>>sell;
profit=sell- buy;
cout<<"The profit is: "<<profit;
return 0;
}