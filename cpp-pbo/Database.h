#include <bits/stdc++.h>
#include "Admin.h"
#include "Antrian.h"
#include "Layanan.h"

#ifndef DATABASE_H 
#define DATABASE_H
 
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;  

class Database {
    private:
    static vector<Admin> listAdmin;
    static vector<Antrian> listAntrian;
    static vector<Layanan> listLayanan;

    public:
    static bool authenticate(string &username, string &password){
        for(Admin admin : listAdmin){
            if(admin.isMatch(username,password)){
                return true;
            }
        }
        return false;
    }

    static bool antrianEmpty(){
        return listAntrian.empty();
    }

    static void initData(){
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

    static void displayLayanan(){
        cout << "Daftar Layanan : ";
        int i = 1;
        for(Layanan &layanan : listLayanan){
            cout << repeat("-",40) << endl;
            cout << "Layanan nomor : " << i++ << endl;
            cout << layanan.toString() << endl;
            cout << repeat("-",40) << endl;
        }
    }

    static void displayAntrian(){
        cout << "Daftar Antrian : " << endl;
        for(Antrian &antrian : listAntrian){
            cout << repeat("-",40) << endl;
            cout << antrian.toString() << endl;
            cout << repeat("-",40) << endl;
        }
    }

    static string repeat(const string &str, int n){
        string res = "";
        for(int i = 0; i < n; i++){
            res += str;
        }
        return res;
}

};

#endif