#include<iostream>

bool myfunction(int n){
    if (n >= 1)
        for (int i = 2; i < n; i++) {
            if (n % i == 0) 
                return false;
        }
        return true;
}

int main(){
    int num;
    std::cout<<"Enter the number:";
    std::cin>>num;
    if (myfunction(num)){
        std::cout<<num<<"is prime";
    }
    else {
        std::cout<<num<<"not prime";
    }
}