// print name n times
// #include<iostream>
// using namespace std;

// void f(int i ,int n)
// {
//     if(i > n) 
//     return ;
     
//     cout<<"Akhil"<<endl;

//     f(i+1,n);

// }

// int main (){
//     int  n;
//     cout<<"Enter the number of times it is printed:";
//     cin>> n;
// int  i=1;

// f(i,n);

    
// }


// print the number from1 to n 

#include<iostream>
using namespace std;

void f(int i,int n)
{
    if(i > n )
    return;
    cout << i<< endl;

    f(i+1,n);
}

int main (){
    int n,i =1;
    cin>>n;

    f(i,n);
     return 0;
}