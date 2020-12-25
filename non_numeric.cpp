#include <iostream>

class Name{
    public:
    std::string name;
    void display(){
        std::cout<<"Name is:"<<name<<std::endl;
    };
    Name(){
        name = '\0';
    };
    Name(std::string thisname){
        name = thisname;
    };
    Name operator +(Name &obj){
        return Name(name + " " + obj.name);
    }
};

int main() {
    Name A("Bearry");
    Name B("Allen");
    A.display();
    B.display();
    A = A+B;
    A.display();
}