#include <bits/stdc++.h>
#include "Admin.h"
#include "Layanan.h"
#include "Antrian.h"
#include "Database.h"

#ifndef SYSTEM_H
#define SYSTEM_H

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;  

class App {
    public:
    static void login(){
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
        } while(!done); 
        menu();
    }

    static void menu(){
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
 
    static void tambah(){
        Database::displayLayanan(); 
        Antrian antrian;
        string name,phone,license;
        char choice = 'y';
        int pilih;
        cout << "Masukkan nama pemesan : ";
        getline(cin,name);           
        cin.ignore(100,'\n');
        cout << "Masukkan nomor telepon : ";
        cin >> phone;
        cout << "Masukkan nomor plat : ";
        cin >> license;
        antrian = Antrian(name, phone, license);
        do{
            cout << "Masukkan nomor layanan yang ingin ditambahkan : ";
            cin >> pilih; 
            antrian.addLayanan(Database::getLayanan(pilih));
            cout << "Apakah anda masih ingin menambahkan layanan ? (y/n) : ";
            cin >> choice;
        } while(choice == 'y');
        Database::addAntrian(antrian);
        menu();
    }

    static void display(){
        cout << repeat("=",40) << endl;
        if(Database::antrianEmpty()){ 
            cout << "Tidak ada daftar layanan!" << endl;
            menu();
            return;
        }
        Database::displayAntrian();
        menu(); 
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