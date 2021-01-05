#include<iostream>

template<typename T, typename U>
T add(T fn, U sn){
    return fn+sn;
}

template<typename T, typename U>
T sub(T fn , U sn){
    return fn-sn;
}

template<typename T>
T mul(T fn){
    return fn;
}

int main(){
    std::cout<<add(2.3,1)<<"\n";
    std::cout<<sub(2,1)<<"\n";
    std::cout<<mul("hello")<<"\n";
}
