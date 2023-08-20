#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    if(a>b){
        return a-b;
    }else{
        return b-a;
    }
}
int multiply(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
int main(){
    int a,b,op;
    while(1){
    cout<<"Enter first number :- ";
    cin>>a;
    cout<<endl<<"Enter second number :- ";
    cin>>b;
    cout<<endl<<"Choose the operation to perform from the given :- 1) + \n2) - \n3) x \n4) / ";
    cout<<endl<<"operation = ";
    cin>>op;
    if(op==1){
        cout<<add(a,b);

    }
    else if(op==2){
        cout<<subtraction(a,b);

    }
    else if(op==3){
        cout<<multiply(a,b);

    }
    else if(op==4){
        cout<<divide(a,b);

    }
    else{
        cout<<"Error!! enter valid operation";
    }
    cout<<endl;
    }

}
