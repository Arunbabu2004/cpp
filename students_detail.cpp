#include<iostream>

class Student{
    public:
    int student_roll;
    std::string student_name,course;
};
int main(){
    int student_lim;
    std::cout<<"Enter the limit of the student:\n";
    std::cin>>student_lim;
    Student a[student_lim];

    for(int i = 0; i <= student_lim-1; i++){
        std::cout<<"Enter the student name:"<<"\n";
        std::cin>>a[i].student_name;
        std::cout<<"Enter the student roll:"<<"\n";
        std::cin>>a[i].student_roll;
        std::cout<<"Enter the course:"<<"\n\n";
        std::cin>>a[i].course;
    }

    for(int i = 0; i <= student_lim-1; i++){
        std::cout<<"Student name = "<<a[i].student_name<<"\n";
        std::cout<<"Student Roll = "<<a[i].student_roll<<"\n";
        std::cout<<"Student Course = "<<a[i].course<<"\n\n";
    }
}