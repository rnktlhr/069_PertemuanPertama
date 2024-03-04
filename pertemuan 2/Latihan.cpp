#include <iostream>
using namespace std;

int main(){
    int nNilF, nNilM, nRerata;
    string status;

    cout << "Nilai fisika = "<< endl;
    cin >> nNilF;

    cout << "Nilai Matematik = "<< endl;
    cin >> nNilM;

    nRerata = (nNilF + nNilM) /2;

    if(nRerata >60 || nNilM > 70){
        status = "Dinyatakan Lulus";
    }
    else{
        status = "Dinyatakan Tidak Lulus"; 
    }

    cout << "Statusnya adalah : "<< status << endl;

    return 0; 


}