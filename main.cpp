#include <iostream>
#include <string>
using namespace std;

class Light{
private:
    int carNumber;
    string color;
    double time;
public:
    void setCarNumber(int CarNumber){
        carNumber = CarNumber;
    }
    int getCarNumber(){
        return carNumber;
    }
    void setColor(string Color){
        color = Color;
    }
    string getColor(){
        return color;
    }
    void GreenLight(int CarNumber){
        if(carNumber>=8){
            color = "green";
        }
    }
    void RedLight(int CarNumber){
        if(carNumber<=7){
            color = "red";
        }
    }

};

int main() {

}
