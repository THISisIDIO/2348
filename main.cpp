#include <iostream>
using namespace std;
/* 1. ������ �����
   2. ��������� ���-�� ����� ��������� �� 4 � �������� (0,1,2,3)
   3. ��������� ���-�� ����������(001,002,003,012,011,023,033,113,111,122,123,133,222,223,233,333)
   4. ������� ����� ��������� ����������
*/

int main() {
	int n(0);
	int c[4] = {0,0,0,0};
	int cur_num(0);
	cin >> n ;
	for(int i(0);i<n;i++)
	    {
	    	cin >> cur_num;
	    	c[cur_num%4] ++;
		}
	cout  <<0.5*c[0]*(c[0]-1)*c[1]  <<endl;
	cout  <<0.5*c[0]*(c[0]-1)*c[2]  <<endl;
	cout  <<0.5*c[0]*(c[0]-1)*c[3]  <<endl;
	cout  <<c[0]*c[1]*c[2]  <<endl;
	cout  <<0.5*c[1]*(c[1]-1)*c[0]  <<endl;
	cout  <<c[0]*c[2]*c[3]  <<endl;
	cout  <<0.5*c[3]*(c[3]-1)*c[0]  <<endl;
	cout  <<0.5*c[1]*(c[1]-1)*c[3]  <<endl;
	cout  <<(c[1]*(c[1]-1)*(c[1]-2))/6<<endl;
	cout  <<0.5*c[2]*(c[2]-1)*c[1]  <<endl;
	cout  <<c[3]*c[1]*c[2]  <<endl;
	cout  <<0.5*c[3]*(c[3]-1)*c[1]  <<endl;
	cout  <<(c[2]*(c[2]-1)*(c[2]-2))/6<<endl;
	cout  <<0.5*c[2]*(c[2]-1)*c[3]  <<endl;
	cout  <<0.5*c[3]*(c[3]-1)*c[2]  <<endl;
	cout  <<(c[3]*(c[3]-1)*(c[3]-2))/6<<endl;



	return 0;
}

