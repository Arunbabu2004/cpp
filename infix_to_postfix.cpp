#include<iostream>
#include<string>
#define MAX 20
using namespace std;

char stack_20[MAX];
int top_20=-1;
void push_20(char oper){
    if(top_20==MAX-1){
        cout<<"stackfull!!!!";
    }
   
    else{
        top_20++;
        stack_20[top_20]=oper;
    }
}
char pop_20(){
    char ch_20;
    if(top_20==-1){
        cout<<"stackempty!!!!";
    }
    else{
        ch_20=stack_20[top_20];
        stack_20[top_20]='\0';
        top_20--;
        return(ch_20);
    }
    return 0;
}
int priority_20 ( char alpha ){
    if(alpha == '+' || alpha =='-'){
        return(1);
    }
 
    if(alpha == '*' || alpha =='/'){
        return(2);
    }
 
    if(alpha == '$'){
        return(3);
    }
 
    return 0;
}
string convert_20(string infix){
    int i=0;
    string postfix = "";   
    while(infix[i]!='\0'){       
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z'){
            postfix.insert(postfix.end(),infix[i]);
            i++;
        }       
        else if(infix[i]=='(' || infix[i]=='{'  || infix[i]=='['){
            push_20(infix[i]);
            i++;
        }        
        else if(infix[i]==')' || infix[i]=='}'  || infix[i]==']'){
            if(infix[i]==')'){
                while(stack_20[top_20]!='('){             
                   postfix.insert(postfix.end(),pop_20());
                }
                pop_20();
                i++;
            }
            if(infix[i]==']'){
                while(stack_20[top_20]!='['){
                    postfix.insert(postfix.end(),pop_20());
                }
                pop_20();
                i++;
            }
 
            if(infix[i]=='}'){
                while(stack_20[top_20]!='{'){
                    postfix.insert(postfix.end(),pop_20());
                }
                pop_20();
                i++;
            }
        }
        else{
            if(top_20==-1){
                push_20(infix[i]);
                i++;
            }
 
            else if( priority_20(infix[i]) <= priority_20(stack_20[top_20])){
                postfix.insert(postfix.end(),pop_20());
               
                while(priority_20(stack_20[top_20]) == priority_20(infix[i])){
                    postfix.insert(postfix.end(),pop_20());
                    if(top_20 < 0) {
                        break;
                    }
                }
                push_20(infix[i]);
                i++;
            }
            else if(priority_20(infix[i]) > priority_20(stack_20[top_20])) {
                push_20(infix[i]);
                i++;
            }
        }
    }
    while(top_20!=-1){
        postfix.insert(postfix.end(),pop_20());
    }
    cout<<"The converted postfix string is : "<<postfix;   
    return postfix;
}

int main(){
    int cont;
    string infix, postfix; 
    cout<<"\nEnter the infix expression : "; 
    cin>>infix;
    postfix = convert_20(infix);
    return 0;
}