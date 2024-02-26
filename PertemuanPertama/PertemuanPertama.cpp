
#include <iostream>
using namespace std;
int main()
{//begin
	//numeric nPanjang, nlebar, nLuas
	//display 'Masukan Panjang= '
	//accept nPanjang
	//display 'Masukan Lebar= '
	//accept nLebar 
	//compute nLuas = nPanjang * nLebar 
	//display ' Luasnya adalah = '

	int nPanjang, nLebar, nLuas;
	cout << "Masukan Panjang = ";
	cin >> nPanjang; 
	cout << "Masukan Lebar = ";
	cin >> nLebar;  
	nLuas = nPanjang * nLebar;
	cout << "luasnya adalah = " << nLuas << endl;
}
