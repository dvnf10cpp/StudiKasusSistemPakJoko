#include <bits/stdc++.h>
#include "Admin.h"
#include "Layanan.h"
#include "Antrian.h"
#include "Database.h"
#include "App.h" 

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;  

void login();
void menu();
void tambah();
void display();
string repeat(const string &str, int n); 

vector<Admin> Database::listAdmin;
vector<Antrian> Database::listAntrian;
vector<Layanan> Database::listLayanan;

int main(){
    //blom masuk pas instansiasi object
    Database::initData();
    App::login(); 
    return 0;
}

