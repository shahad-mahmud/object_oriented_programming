#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

class Car{
    private:
        string name;
        double price;
        string color;
    public:
        void set_name(string name){
            this->name = name;
        }

        string get_name(){
            return this->name;
        }
};

int main(){
    Car car1 = Car();

    car1.set_name("Audi");

    cout << car1.get_name();

    return 0;
}