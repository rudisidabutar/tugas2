#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string Nama];
    float Komisi,Penjualan,TotalKomisi=0;
    int i,JmlhSales=10;

    cout << "Input Penjualan Sales" << endl<<endl;
    cout << setprecision(12);

    for (i = 0; i < JmlhSales; i++) {
        cout << endl << "Data Salesman ke -" << i + 1 << endl;
        cout << "Nama Salesman : ";
        cin >> Nama;
        cout << "Penjualan Salesman : ";
        cin >> Penjualan;
        
        if(Penjualan < 500000){
        	Komisi = Penjualan * 0.1;
		}else{
			Komisi[i] = 500000 * 0.1;
            Komisi += (Penjualan - 500000) * 0.15;
             cout<<endl<<"-----------------------------------------------------------"<<endl<<endl;
		}
			TotalKomisi += Komisi;
		}
		cout<<"Total komisi yang dibayarkan oleh PT. MURAH HATI adalah: "<< TotalKomisi<< endl;
    return 0;
}
