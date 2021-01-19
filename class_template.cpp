#include <iostream>

template <typename T1, typename T2>
class Operations{
    T1 first;
    T2 second;
    public:
    template <typename Y1, typename Y2>
    void swap(Y1& x_20, Y2& y_20);
    template <typename Y1, typename Y2> 
    void max(Y1& x_20, Y2& y_20);
};

template <typename T1, typename T2>
template <typename Y1, typename Y2> 
void Operations<T1, T2>::max(Y1& x_20, Y2& y_20){  // pointer to Y1 and Y2 
    std::cout << (x_20 > y_20 ? x_20 : y_20) << std::endl; // prints largest after comparing
}

template <typename T1, typename T2>
template <typename Y1, typename Y2> 
void Operations<T1, T2>::swap(Y1& x_20, Y2& y_20){  // pointer to T1 to x and T2 to y
        Y1 temp_20 = x_20;
        x_20 = y_20;
        y_20 = temp_20;
    }


int main(){
    // creation on objects
    Operations<int, int>integer;
    Operations<float, int>floatinteger;
    Operations<char, char>charachter;
    // declaring variables
    float float1_20 = 11.5;
    int int1_20 = 10, int2_20 = 2;
    char char1_20 = 'a', char2_20 = 'b';
    // calling methods

    floatinteger.max(int1_20, float1_20);

    charachter.swap(char1_20, char2_20);
    std::cout << char1_20 << std::endl;
    charachter.max(char1_20, char2_20);

    integer.swap(int1_20, int2_20);
    std::cout << int1_20 << std::endl;
    integer.max(int1_20, int2_20);
}