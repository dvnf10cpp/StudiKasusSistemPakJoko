#include <bits/stdc++.h>
#include "Admin.h"
#include "Layanan.h"
#include "Antrian.h"
#include "Database.h"

using namespace std;

void login();
void menu();
void tambah();
void display();
void initData();
void displayLayanan();
bool authenticate(string &name, string &password);
string repeat(const string &str, int n); 
vector<Admin> listAdmin;
vector<Antrian> listAntrian;
vector<Layanan> listLayanan;

int main(){
    initData();
    login(); 
    return 0;
}

void login(){
    bool done = 0;
    cout << (repeat("=",40)) << endl;
    cout << ("Selamat datang pada laman login terminal sederhana") << endl;
    do {
        string username,password;
        cout << "Username : ";
        cin >> username;
        cout << "Password : ";
        cin >> password;
        done = Database::authenticate(username,password);
        if(!done){
            cout << "Username atau password tidak matching" << endl;
        }
    } while(1); 
    menu();
}

void menu(){
    char choice;
    cout << (repeat("=",40)) << endl;
    cout << ("Selamat datang pada aplikasi terminal sederhana") << endl;
    cout << ("Silahkan pilih salah satu menu dibawah ini") << endl;
    cout << ("1. Menampilkan semua antrian pada hari ini") << endl;
    cout << ("2. Menambahkan antrian") << endl;
    cout << ("3. Log out dari sistem") << endl;
    cout << ("Masukkan pilihan anda : ");
    cin >> choice;
    switch(choice){
        case '1':
            display();
            break;
        case '2':
            tambah();
            break;
        case '3':
            login();
            break;
    }
}

void tambah(){
    
}

void display(){
    cout << repeat("=",40) << endl;
    if(listAntrian.empty()){
        cout << "Tidak ada daftar layanan!" << endl;
        return;
    }
    for(Antrian &antrian : listAntrian){
        cout << repeat("-",40) << endl;
        cout << antrian.toString() << endl;
        cout << repeat("-",40) << endl;
    }
}

void initData(){
    //List admin
    listAdmin.push_back(Admin("joko", "ini_password_joko"));
    listAdmin.push_back(Admin("dengklek", "ini_password_dengklek"));

    //List layanan
    string namaLayanan[] = {"Ganti Oli","Operasi Mobil","Ketok Magic","Modifikasi Mobil Racing", "Modifikasi Mobil Elektrik"};
    int harga[] = {500000,2000000,3000000,5000000,5500000}; 
    for(int i = 0; i < 5; i++){
        listLayanan.push_back(Layanan(namaLayanan[i], harga[i]));
    }
}

void displayLayanan(){
    cout << "Daftar Layanan : ";
    int i = 1;
    for(Layanan &layanan : listLayanan){
        cout << repeat("-",40) << endl;
        cout << "Layanan nomor : " << i++ << endl;
        cout << layanan.toString() << endl;
        cout << repeat("-",40) << endl;
    }
}

string repeat(const string &str, int n){
    string res = "";
    for(int i = 0; i < n; i++){
        res += str;
    }
    return res;
}

bool authenticate(string &name, string &password){
    for(Admin admin : listAdmin){
        if(admin.isMatch(name,password)){
            return true;
        }
    }
    return false;
}