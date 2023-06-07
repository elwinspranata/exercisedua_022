#include <iostream>
using namespace std;

class bidangDatar {
    int x; //variabel menyimpan input 
public:
    bidangDatar() { //constructor
        x = 0;
    }
    virtual void input() {} //  yang menerima input dan mengirim 
    virtual float Luas(int a) { return 0; } // menghitung luas
    virtual float Keliling(int a) { return 0; } // menghitung keliling
    void setX(int a) { // memberi/mengirim 
        this->x = a;
    }
    int getX() { // membaca/mengambil 
        return x;
    }
};
class Lingkaran :public bidangDatar {
    float jejari;
public:
    void input() {
        cout << "Menghitung luas dan keliling lingkaran: ";
        cin >> jejari;
        setX(jejari); // menyimpan nilai radius ke variabel 
    }
    float Luas(int a) {
        return 3.14 * a * a;
    }
    float Keliling(int a) {
        return 2 * 3.14 * a;
    }
};
class Bujursangkar :public bidangDatar {
    float sisi;
public:
    void input() {
        cout << "Mengitung luas dan keliling bujursangkar: ";
        cin >> sisi;
        setX(sisi); // menyimpan nilai sisi ke variabel 
    }
    float Luas(int sisi) {
        return sisi * sisi;
    }
    float Keliling(int sisi) {
        return 4 * sisi;
    }
};
int main() {
    Lingkaran lingkaran;
    Bujursangkar bujursangkar;

    cout << "Lingkaran dibuat" << endl;
    lingkaran.input();
    cout << "Luas Lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl;
    cout << "Keliling Lingkaran = " << lingkaran.Keliling(lingkaran.getX()) << endl;

    cout << "Bujursangkar dibuat" << endl;
    bujursangkar.input();
    cout << "Luas Bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl;
    cout << "Keliling Bujursangkar = " << bujursangkar.Keliling(bujursangkar.getX()) << endl;

    return 0;
}