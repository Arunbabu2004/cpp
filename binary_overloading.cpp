#include <iostream>

class Complex{
    public:
    int realnumber;
    int imaginary;
    void display(){
        std::printf("%d+%di\n", realnumber, imaginary);
    };
    void getData(){
        std::cout<<"Enter the real number part :- ";
        std::cin>>realnumber;
        std::cout<<"Enter the imaginary part :- ";
        std::cin>>imaginary;
    }
    Complex(){
        realnumber = 0;
        imaginary = 0;
    };
    Complex(int r, int im){
        realnumber = r;
        imaginary = im;
    };
    Complex operator +(Complex &obj){
        return Complex(realnumber+obj.realnumber, imaginary+obj.imaginary);
    }
};

int main() {
    Complex A(1, 2);
    Complex B(1, 2);
    A.display();
    B.display();
    A = A+B;
    A.display();
}