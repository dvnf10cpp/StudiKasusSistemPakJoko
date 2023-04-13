#include <bits/stdc++.h>
#include <Layanan.h>

using namespace std;

class Antrian{
    private:
    string name;
    string phone;
    string licensePlate;
    Layanan layanans[3]; 
    int totalHarga;
    int index;

    public: 
    Antrian(){}

    Antrian(string name, string phone, string licensePlate){
        this->name = name;
        this->phone = phone;
        this->licensePlate = licensePlate;
        index = 0;
    }

    string getFormattedPrice(){
        string temp = to_string(totalHarga);
        string formatted = "Rp. ";
        int len = temp.size(), check = len % 3;
        int counter = 0; bool flag = !check;
        for(auto &c : temp){
            formatted += c;
            counter++;
            if((!flag && (counter == check)) || (flag && !(counter % 3) && counter != len)){
                formatted += ",";
                flag = 1;
            }
        }
        return formatted;
    }

    void addLayanan(const Layanan &layanan){
        if(index == 3){
            cout << "Layanan sudah penuh!" << endl;
            return;
        } 
        layanans[index++] = layanan;
    }

    void addTotalPrice(int *price){
        if(price != nullptr){
            totalHarga += *(price);
        }
    }

    void addTotalPrice(int &price){
        totalHarga += price;
    }

    bool isFull(){
        return index > 2;
    }

    string toString(){
        string temp = 
        "Name : " + name + "\n" + 
        "Phone : " + phone + "\n" + 
        "License : " + licensePlate + "\n" + 
        "Daftar Layanan : " + "\n";
        for(int i = 0; i < 3; i++){
            if(layanans[i].getName() == "Empty") 
                break;  
            temp += "Layanan Nomor : " + to_string(i + 1) + "\n" + layanans[i].toString() + "\n";
        }
        temp += repeat("-",40) + "\n" + "Total : " + getFormattedPrice();
        return temp; 
    }

    string repeat(const string &str, int n){
        string res = "";
        for(int i = 0; i < n; i++){
            res += str;
        }
        return res;
    }
};