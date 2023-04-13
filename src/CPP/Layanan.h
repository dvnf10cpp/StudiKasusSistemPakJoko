#include <bits/stdc++.h>

using namespace std;

class Layanan{
    private:
    string name;
    int price;
    string description;

    public:
    Layanan(){
        this->name = "Empty"; 
    }

    Layanan(string name, int price){
        this->name = name;
        this->price = price;
    }

    Layanan(string name, int price, string description){
        this->name = name;
        this->price = price;
        this->description = description;
    }

    string getFormattedPrice(){
        string temp = to_string(price);
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

    string toString(){
        return 
        "Nama : " + name + "\n" + 
        "Price : " + getFormattedPrice() + "\n" +
        description == "" ? "" : "Description : "+ description;
    }

    string getName(){
        return name;
    }
};