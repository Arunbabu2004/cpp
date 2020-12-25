#include<iostream>

class Complex{
    public:
    int real,imaginary;
        void getdata(){
            std::cout<<"Enter the real number:";
            std::cin>>real;
            std::cout<<"Enter the imaginary number:";
            std::cin>>imaginary;
            std::cout<<"\n";
        }
        void displaydata(){
            std::cout<<"Real number = "<<real<<"\n";
            std::cout<<"Imaginary number = "<<imaginary<<"\n\n";
        }
    Complex(){ 
        real = 0;
        imaginary = 0;
    }
    Complex(int x,int y){
        real = x;
        imaginary = y;

    }
    Complex(Complex &obj){
        real = obj.real;
        imaginary = obj.imaginary;
    }
};
int main(){
    Complex a;
    a.displaydata();

    Complex a0;
    a0.getdata();
    a0.displaydata();

    Complex a1(6,3);
    a1.displaydata();

    Complex a2(8,3);
    a2.displaydata();
}