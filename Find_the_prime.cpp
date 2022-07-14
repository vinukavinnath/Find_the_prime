#include <iostream>
using namespace std;

int main(){

    int num;
    int div_count=0;

    cout<<"Enter the number : ";
    do{
        cin>>num;
        if(num<2){
            cout<<"You've entered a invalid input. Please enter again : ";
        }
    }while(num<2);

    for(int i=2;i<num;i++){
        if(num%i==0){
            div_count++;
        }
    }

    if(div_count==0){
        cout<<num<<" is a PRIME NUMBER "<<endl;
    }else{
        cout<<num<<" IS NOT A prime number "<<endl;
    }

    return 0;
}