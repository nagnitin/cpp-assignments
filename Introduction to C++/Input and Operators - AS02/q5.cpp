//WAP to find the difference between ASCII of two characters ,take them as input .

#include<iostream>
using namespace std;
int main(){
    char a,b;
    cout<<"Enter the first character: ";
    cin>>a;
    cout<<"Enter the second character: ";
    cin>>b;
    int diff = a-b;
    cout<<"The difference between the ASCII of the two characters is: "<<diff;
    return 0;
}