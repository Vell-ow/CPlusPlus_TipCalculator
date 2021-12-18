// IC01_SecondC++Project: Add several doubles together, take a percentage, 
// and then print out a total followed by the percentage amount formatted to
// two decimal places. 

// Author: Andrew Coviello

#include <iostream>
using namespace std;

int main() {
  
  double fee1 = 2.51;
  double fee2 = 3.72;
  double fee3 = 19.46;
  double feeSum = fee1 + fee2;
  static double tip = 0.08;
  double sumTip = tip * feeSum;
  double sum = fee1 + fee2 + fee3 + sumTip;
  int sumTipPctg = tip * 100;
  int sumInteger = sum;

  cout << "The airport fee is $" << fee1 << "." << endl;
  cout << "The upfront Uber charge is $" << fee2 << "." << endl;
  cout << "The charge from the airport to your home by Uber is $" << fee3 << ".\n" << endl;
  cout << "\nThe calculated tip percentage is " << sumTipPctg << "%." << endl;
  cout << "Applied to the first two rates, the amount tipped is " << sumTip << "." << endl;
  cout << "\nThe grand total is $" << + sum << ".\n" << endl;
}