#include <bits/stdc++.h>
#ifndef ADMIN_H
#define ADMIN_H

using namespace std;

class Admin{
    private:
    string name;
    string password;

    public:
    Admin(){}

    Admin(string name, string password){
        this->name = name;
        this->password = password;
    }

    bool isMatch(string &name, string &password){
        return (this->name == name && this->password == password);
    }

    string toString(){
        return 
        "Name : " + name + "\n" + 
        "Password : " + password; 
    }
};

#endif