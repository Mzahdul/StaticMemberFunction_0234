#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
    buku &setJudul(string judul){
        this->judul = judul;
        return *this;
    }
    string getJudul(){
        return this->judul;
    }

};

int main()
{
    buku bukunya;
    // bukunya.setJudul("matematika");
    // cout << bukunya.getJudul();
    cout<<bukunya.setJudul("matematika").getJudul();
    return 0;
}