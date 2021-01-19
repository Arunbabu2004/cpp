#include<iostream>

class Stack{
    public:
    int arr[5]{1,2,3,4,5};
    int top = -1;
    int val = 1;
    void push();
};
    void Stack::push(){
        for(int i = 0 ;i<=4;i++){

        if(top == 4){
            std::cout<<"overflow";
        }
        else{
            arr[++top]=val;
            std::cout<<arr[top];
        }
        }
    }

int main(){
    Stack q;
    q.push();
}