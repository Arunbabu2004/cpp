#include<iostream>

template<typename A, typename B>
class Operations{
    A e_20;
    B r_20;
    public:
    Operations(A fn_20, B sn_20){
        e_20 = fn_20;
        r_20 = sn_20;} 
    void swap();
    void large();
    void display(){
        std::cout<<e_20<<", "<<r_20<<"\n";}
};
    template<typename T,typename U>
    void Operations<T, U>::swap(){
        T temp_20;
        U _e_20,_r_20;
        _e_20 = e_20;
        _r_20 = r_20;
        temp_20 = _e_20;
        _e_20 = _r_20;
        _r_20 = temp_20;
        std::cout<<"swaped number "<<_e_20<<", "<<_r_20<<"\n";}
    template<typename U,typename V>
    void Operations<U ,V>::large(){
        U p_20;
        V q_20;
        p_20 = e_20;
        q_20= r_20;
        if(p_20>q_20){std::cout<<p_20<<" is the largest:\n";}
        if(q_20>p_20){std::cout<<q_20<<" is the largest:\n";}
    }
int main(){
    Operations <int, float> a_20(2,4.3);
    a_20.display();
    a_20.swap();
    a_20.large();
    Operations <int, float> b_20(2,3.5);
    b_20.display();
    b_20.swap();
    b_20.large();
}
