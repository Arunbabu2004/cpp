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
    Complex operator ++(){
        realnumber++;
        imaginary++;
        return Complex(realnumber, imaginary);
    }
    Complex operator --(){
        realnumber--;
        imaginary--;
        return Complex(realnumber, imaginary);
    }
};

int main() {
    Complex hello(1, 2);
    hello.display();
    ++hello;
    hello.display();
    --hello;
    hello.display();
}