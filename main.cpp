#include <iostream>
using namespace std;
/* 1. ввести числа
   2. вычислить кол-во чисел делящийся на 4 с остатком (0,1,2,3)
   3. вычислить кол-во комбинаций(012,023,123)
   4. вывести сумму количеств комбинаций
*/

int main() {
	int n(0);
	int c[4] = {0,0,0,0};
	int cur_num(0);
	cin >> n ;
	for (int i(0); i<n; i++ )
    {
        cin >> cur_num;
        if (cur_num%4==0 and c[0]<cur_num)
            c[0]=cur_num;
        if (cur_num%4==1 and c[1]<cur_num)
        {
            c[1]=cur_num;
        }
        else if(cur_num%4==2 and c[2]<cur_num)
        {
           c[2]=cur_num;
        }
        else if (cur_num%4==3 and c[3]<cur_num)
            c[3]=cur_num;
    }
    if (c[0]+c[1]+c[2]>=c[0]+c[2]+c[3])
        cout << c[0]+c[1]+c[2];
    else if (c[0]+c[2]+c[3]>=c[1]+c[2]+c[3])
        cout << c[0]+c[2]+c[3];
    else
        cout << c[1]+c[2]+c[3];
    return 0;
}


