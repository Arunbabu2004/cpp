#include<iostream>

class student{
    public:
    std::string sname;
    int sid,sage;
    student(int id,int age,std::string name){
        sid = id;
        sname = name;
        sage = age;
    }

    void display_data(){
        std::cout<<"Id of the Student: "<<sid<<"\n";
        std::cout<<"Name of the Student: "<<sname<<"\n";
        std::cout<<"Age of the Student: "<<sage<<"\n\n";
    }
};

int main(){
    student a(2,18,"Arun"),b(3,13,"Aathira");
    a.display_data();
    b.display_data();
}