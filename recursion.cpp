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

// #include<iostream>
// using namespace std;

// void f(int i,int n)
// {
//     if(i > n )
//     return;
//     cout << i<< endl;

//     f(i+1,n);
// }

// int main (){
//     int n,i =1;
//     cin>>n;

//     f(i,n);
//      return 0;
// }


/*print the numbrer from n to 1*/

// #include <iostream>
// using namespace std;
// void f(int n){
//     int i = n;

//     if(i>0)
//     {
//         cout << i<<endl;
//         f(i-1);
//     }
//     else {
//         cout<< "Number are printed";
//     }
// }
// int main (){
//     int n;
//     cout << "Enter the number:";
//     cin>>n;

//     f(n);
    
// }

#include <iostream>
using namespace std;
int f(int n) {
    if (n == 0) {
        return 0;
    }
    return n + f(n - 1);
}

int main (){
    int n ;
    cout<<" Enter the Number :";

    cin>> n;



   int sum =f(n);
cout << sum;

}