#include <iostream>
#include <vector>
using namespace std;
/* 1. + запомнить и вывести числа
   2. + вывести тройки чисел
   3. + вывести сумма троек
   4. +вывести сумму которая не делится на 4
   5. вывести их кол-во
*/

int main() {
	int n(0);
	int min1=0;
	cin >> n;
	int a(0);
	vector<int> numbers(n);
	for (int i(0);i<n;i++)
	    cin >> numbers[i];
	for (int i(0);i<n;i++)
	for (int j(i+1);j<n;j++)
	for (int l(j+1);l<n;l++)
	{
	    if (numbers[i]!=numbers[j] and numbers[i]!=numbers[l] and numbers[l]!=numbers[j])
        {
            int sum3=numbers[i] + numbers[j] + numbers[l];
	        if (sum3%4!=0 and sum3>min1)
	            min1=sum3;
        }

	}
	cout << min1;



	return 0;
}
