#include <iostream>
using namespace std;

int main(){
    int nBilA,nBilB;
    string status;

    srand(time(0));
    
    nBilA = rand () % 10;
    nBilA = rand () % 10;

    cout << "bilangan A adalah = " << nBilA <<endl ;
    cout << "bilangan B adalah = "<< nBilB << endl ;

    if(nBilA == nBilB){
        status = "Nilai A sama dengan Nilai B";
    }
    else if (nBilA > nBilB){
        status = "Nilai A lebih besar dari Nilai B";
    }
    else{
        status = "Nilai A lebih Kecil dari Nilai B";
    }
    
    cout << "tampilkan status : "<< status << endl;

    return 0 ;

}