#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    string status;

    srand(time(0));

    nBilangan = rand() % 10;
    cout<< "Bilangan adalah = "<< nBilangan << endl;

    if(nBilangan % 2 == 0){
        status = "Genap";
    }
    else{
        status = "Ganjil";
    }
    cout<< "Bilangan adalah = "<< nBilangan << endl;
    cout<< "Statusnya adalah "<< status << endl;

    return 0;
}