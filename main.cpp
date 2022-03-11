#include <iostream>
#include <vector>
using namespace std;
/* 1. + запомнить и вывести числа 
   2. вывести тройки чисел 
   3. вывести сумма троек 
   4. вывести сумму которая не делится на 4 
*/

int main() {
	int n(0);
	cin >> n;
	vector<int> numbers(n);
	for (int i(0);i<n;i++)
	    cin >> numbers[i];
	for (int i(0);i<n;i++)
	for (int j(i+1);j<n;j++)
	for (int l(j+1);l<n;l++)
	    cout << numbers[i] << " " << numbers[j] << " " << numbers[l] << endl ;	
	    

	return 0;
}
