#include <bits/stdc++.h>
#include "Admin.h"
#include "Layanan.h"
#include "Antrian.h"
#include "Database.h"

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

int main(){
    int harga = 500000;
    cout << Layanan::getFormattedPrice(harga) << endl; 
    // Database::initData();
    // login(); 
    return 0;
}

