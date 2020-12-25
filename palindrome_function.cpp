#include<iostream>

bool myfunc(int n){
    int original,remainder,reversed;
    original=n;
    while (n != 0){
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
    }
    if (original==reversed){
    return true;
    }
    return false;
}

int main(){
    int num;
    std::cout<<"Enter the number:";
    std::cin>>num;
    if (myfunc(num)){
        std::cout<<"Number "<<num<<" is palindrome";
    }
    else
        std::cout<<"Number "<<num<<" is not a palindrome";
}