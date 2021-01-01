#include<iostream>

template<typename T, typename U>
T add(T fn, U sn){
    return fn+sn;
}

template<typename T, typename U>
T sub(T fn , U sn){
    return fn-sn;
}

template<typename T, typename U>
T mul(T fn, U sn){
    return fn*sn;
}

int main(){
    std::cout<<add(2.3,1)<<"\n";
    std::cout<<sub(2,1)<<"\n";
    std::cout<<mul(2.3,1)<<"\n";
}
