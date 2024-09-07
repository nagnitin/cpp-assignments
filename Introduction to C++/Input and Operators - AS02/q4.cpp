//WAP for finding the volume of the cylinder by taking radius and height as input.

#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter the radius of the cylinder: ";
    cin>>r;
    cout<<"Enter the height of the cylinder: ";
    cin>>h;
    float volume = 3.14*r*r*h;
    cout<<"The volume of the cylinder is: "<<volume;
    return 0;
}