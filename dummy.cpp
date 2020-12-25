#include<iostream>

class Book{
    public:
    int hour,minuit,day,month,year;
    std::string weak;
    void getdata(){
        std::cout<<"Enter the time:";
        std::cin>>hour>>minuit;
        std::cout<<"Enter the date:";
        std::cin>>day>>month>>year;
        std::cout<<"Enter the Day:";
        std::cin>>weak;
    }
    void display(){
        std::cout<<"\n";
        std::cout<<"Time: "<<hour<<":"<<minuit<<"\n";
        std::cout<<"Date: "<<day<<"-"<<month<<"-"<<year<<"\n";
        std::cout<<"Day: "<<weak<<"\n";
    }
};

int main(){
    Book a;
    a.getdata();
    a.display();
}