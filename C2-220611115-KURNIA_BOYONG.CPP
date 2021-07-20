#include <iostream>
using namespace std;
long nilaiakhir,nilaiku;
struct mahasiswa{
int nim;
string nama;
int nilai1;
int nilai2;
int nilai3;

};
mahasiswa mhs[2];

    int main(){
            cout <<"PROGRAM MENENTUKAN NILAI MAHASISWA" <<endl;
            cout<<"====================================="<<endl;
            cout<< "MAHASISWA 1"<<endl;
            cout << "Masukan nim mahasiswa    " " = " ;
            cin >> mhs[0].nim;
            cout << "Masukan Nama mahasiswa   " " = " ;
            cin >> mhs[0].nama;
            cout << "Masukan nilai Tugas      " " = " ;
            cin >> mhs[0].nilai1;
            cout << "Masukan nilai UAS        "  " = " ;
            cin >> mhs[0].nilai2;
            cout << "Masukan nilai  UTS       " " = " ;
            cin >> mhs[0].nilai3;
            cout<< endl;
            nilaiakhir =mhs[0].nilai1 + mhs[0].nilai2 +mhs[0].nilai3;
            cout<<"total nilai = "<<nilaiakhir<<endl;
            nilaiku =nilaiakhir/3;
            cout<<"nilai akhir = "<<nilaiku<<endl;
            if (nilaiku > 85){ //BUKAN NILAI AKHIR TAPI NILAIKU
                cout<<"nilai huruf = A ";
            }
            else if(nilaiku > 75 ){
                cout<< "nilai huruf = B ";
            }
             else if (nilaiku > 60 ){
                cout<< "nilai huruf = C ";
             }
            else {
                cout<< "nilai huruf = D ";
                }
            cout<<endl;
            cout<<endl;


            cout<<"MAHASISWA 2" <<endl;
            cout << "Masukan nim mahasiswa    " " = " ;
            cin >> mhs[1].nim;
            cout << "Masukan Nama mahasiswa   " " = " ;
            cin >> mhs[1].nama;
            cout << "Masukan nilai Tugas      " " = " ;
            cin >> mhs[1].nilai1;
             cout << "Masukan nilai UAS       " " = " ;
            cin >> mhs[1].nilai2;
            cout << "Masukan nilai  UTS       " " = " ;
            cin >> mhs[1].nilai3;
            cout<< endl;
            nilaiakhir =mhs[1].nilai1 + mhs[1].nilai2 +mhs[1].nilai3;
            cout<<"total nilai = "<<nilaiakhir<<endl;
            nilaiku =nilaiakhir/3;
            cout<<"nilai akhir = "<<nilaiku<<endl;

               if (nilaiakhir > 85){
                cout<<"nilai huruf = A ";
            }
            else if(nilaiakhir > 75 ){
                cout<< "nilai huruf = B ";
            }
             else if (nilaiakhir > 60 ){
                cout<< "nilai huruf = C ";
            }
              else {
                cout<< "nilai huruf = D ";
            }
            cout<<endl;

return 0;
}
