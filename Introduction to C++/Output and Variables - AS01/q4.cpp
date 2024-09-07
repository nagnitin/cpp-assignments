/*
What is the output of this program?
 void main(){
	int a=4;
int b=5;
a++;b--;
cout<<++a<<” “<<b–-;
}
*/
//Ans.:
#include<iostream>
using namespace std;
int main(){  // using void compiled me an error so I used int instead.
    int a = 4;
    int b = 5;
    a++; b--;
    cout<<++a<<" "<<b--;
}

// Output will be 6 and 4.