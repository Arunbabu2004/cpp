#include<iostream>

template<typename T_27, typename U_27>
T_27 add(T_27 fn, U_27 sn){
    return fn+sn;
}

template<typename T_27, typename U_27>
T_27 sub(T_27 fn , U_27 sn){
    return fn-sn;
}

template<typename T_27, typename U_27>
T_27 mul(T_27 fn, U_27 sn){
    return fn*sn;
}

int main(){
    std::cout<<add(2.3, 1)<<"\n";
    std::cout<<sub(2, 1)<<"\n";
    std::cout<<mul(2.1, 3)<<"\n";
}
