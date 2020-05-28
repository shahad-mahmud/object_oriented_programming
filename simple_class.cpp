#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

class Car{
    private:
        string name;
        string model;
        double price;
        int max_speed;
    public:
        Car(string name, string model, int max_speed, double price){
            this -> name = name;
            this -> model = model;
            this -> max_speed = max_speed;
            this -> price = price;
        }

        string get_name(){
            return this -> name;
        }

        string get_model(){
            return this -> model;
        }
};

int main(){
    Car car1 = Car("Audi", "BX100", 150, 13098.50);

    cout << car1.get_name() << endl;
    cout << car1.get_model() << endl;

    return 0;
}