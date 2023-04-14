#include <bits/stdc++.h>
#include "Admin.h"
#include "Antrian.h"
#include "Layanan.h"
#ifndef DATABASE_H 
#define DATABASE_H
 
using namespace std;

class Database{
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

};

#endif