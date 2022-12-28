
#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    // For loop
    for(int i = 0; i<5; i++)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    
    //While loop
    int start = 0;
    while(start<5)
    {
        cout<<start<<' ';
        start++;
    }
    cout<<endl;
    
    //if else
    if(10>20)
    {
        cout<<10;
    }
    else
    {
        cout<<20;
    }
    cout<<endl;
    //switch
    int c = 2;
    
    switch(c) {
  case 2:
    cout<<"hellohello";
    break;
  case 3:
    cout<<"hellohellohello";
    break;
  default:
    cout<<"hello"<<endl;
}

cout<<"factorial is: "<<factorial(5);

    return 0;
}


//Recursion
int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
    
}
