
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <random>

std::mt19937 gen(time(0));
int arunca_zar(int min, int max);
int numar_zaruri();



class zar {
public:
    int min_zar;
    int max_zar;
    int rez;
    void roll (void){
        std::uniform_int_distribution<int> distrib(min_zar, max_zar);
        rez = distrib(gen);
        std::cout<<rez<<std::endl;
    };
    zar(int min_zar, int max_zar, int rez){
        this->min_zar = min_zar;
        this->max_zar = max_zar;
        this->rez = rez;
    };
};



int main() {
int nr_zaruri;
int tip_zar;
int val_min = 1;
int val_max;

std::cout<<"Select type of dice: "<<std::endl;
std::cout<<"coinflip: 1\n";
std::cout<<"d6: 2\n";
std::cout<<"d8: 3\n";
std::cout<<"d10: 4\n";
std::cout<<"d12: 5\n";
std::cout<<"d20: 6\n"<<std::endl; 
std::cin>>tip_zar;

switch(tip_zar)
{
    case 1:
    val_max = 2;
    std::cout<<"Coinflip selected \n"<<std::endl;
        break;
    case 2:
    val_max = 6;
    std::cout<<"D6 selected \n"<<std::endl;
        break;
    case 3:
    val_max = 8;
    std::cout<<"D8 selected \n"<<std::endl;
        break;
    case 4:
    val_max = 10;
    std::cout<<"D10 selected \n"<<std::endl;
        break;
    case 5:
    val_max = 12;
    std::cout<<"D12 selected \n"<<std::endl;
        break;
    case 6:
    val_max = 20;
    std::cout<<"D20 selected \n"<<std::endl;
        break;
}

nr_zaruri = numar_zaruri();

zar d6 (val_min, val_max, 0);

for(int i = 0; i < nr_zaruri; i++)
{
    d6.roll();
}

return 0;
}

int numar_zaruri() {
    int z;
    std::cout << "Select number of dice: \n" << std::endl;
    std::cin >> z;
    return z;
}
