#include<iostream>

class Employee{
    public:
    int emp_id,emp_age;
    std::string emp_name;
    Employee(){
        emp_id= 0;
        emp_age= 0;
        emp_name= "none";
    }

    Employee(int id,int age,std::string name){
        emp_id = id;
        emp_age = age;
        emp_name = name;
    }
    void display(){
        std::cout<<"Name: "<<emp_name<<"\n";
        std::cout<<"Id: "<<emp_id<<"\n";
        std::cout<<"Age: "<<emp_age<<"\n\n";
    }
    void getdata(){
        std::cout<<"Enter the Name:";
        std::cin>>emp_name;
        std::cout<<"Enter the Id:";
        std::cin>>emp_id;
        std::cout<<"Enter the Age:";
        std::cin>>emp_age;
    }
};
int main(){
    Employee a;
    a.display();
    Employee b[7];
    for(int q = 0; q<=6; q++){
        b[q].getdata();
    }
    for(int p = 0; p<=6; p++){
    b[p].display();
    }
}