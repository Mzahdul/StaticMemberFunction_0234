#include <iostream>
#include <string>
using namespace std;

class mahasiswa{

private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printALL();

    static void setNIM(int pnim) {
        nim = pnim;
    };

    static int getNIM() {
        return nim;
    }

    mahasiswa (string pnama) :nama(pnama) {
        setID();
    };
    
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
    id = nim++;
}

void mahasiswa::printALL() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
}

int main(){
    mahasiswa mhs1("Sri Dadi");
    mahasiswa mhs2("budi jatmiko");
    mahasiswa :: setNIM(9);
    mahasiswa mhs3("andi janu");
    mahasiswa mhs4("joko wahono");
}