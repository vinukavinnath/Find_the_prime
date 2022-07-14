#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter the number : ";
    do{
        cin>>num;
        if(num<2){
            cout<<"You've entered a invalid input. Please enter again : ";
        }
    }while(num<2);

    

    return 0;
}