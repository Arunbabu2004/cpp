#include<iostream>

int main(){
    int c=2;
    for(int a = 1; a < 10; a++){
        for(int b = 1; b < a; ++b){
            std::cout<<c<<" ";
            c+=2;
        }
        std::cout<<"\n";
    }
}

// #include <iostream>
// using namespace std;

// int main()n
// {
//     int rows, number = 1;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     for(int i = 1; i <= rows; i++){
//         for(int j = 1; j <= i; ++j){
//             cout << number << " ";
//             ++number;
//         }
//         cout << endl;
//     }
//     return 0;
// }