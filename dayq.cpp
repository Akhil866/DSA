// // //  if -else //

// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     char ch;
// //     cout<<"Enter the character";
// //     cin>>ch;

// //     if(ch>= 'a'  && ch<='z')
// //     {
// //         cout << "Character is lowercase";
// //     }
// //     else if(ch>= 'A'  && ch <= 'Z')
// //     {
// //         cout<<"Character is higher case ";

// //     }
// //     else 
// //     {
// //         cout<<"Invalid output";
// //     }
// //     return 0;
// // }



// //  loop //

// // sum of number from 1 to n


// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout <<"Enter the number ";
//     cin>>n;

//     int sum = 0;

//     for (int i = 0;i<=n;i++)
//     {
//         sum = sum +i;

//     }
//     cout<<"Sum of the nuber is ="<<sum;;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {

    // while loop
//     int i=0;
// int n=10;
//     while (i<=n)
//     {   
//         cout<<i<<" ";
//      i++;
//     }
//     return 0;


// for loop
// int n=10;
// for ( int i = 0; i <= n ; i++)
// {
//     cout<<i<<" ";

// }
// return 0;

// int n=10;
// int sum=0;
// for (int i = 1; i <= n; i++)
// {
//      sum=sum+i;
    
// }
// cout<<"the sum is : "<<sum;


// int n ;
// cout<<"Enter the number = ";
// cin>>n;

// int sum = 0;

// for (int i = 0; i <= n; i++)
// {
//     if (i%2 != 0)
//     {
//      sum=sum+i;
//     }
    
// }
// cout<<"The Sum = "<<sum<<endl;
// int n;
// cout<<"ENter the number = ";
// cin>>n;
// bool isPrime = true;
// for(int i = 2; i<=n-1;i++)
// {
//     if(n%i==0)
//     {
//         isPrime=false;
//         break;
//     }
// }  
// if(isPrime == true)
// {
//     cout<<"The number is prime"<<endl;
// }
// else{
//     cout<<"The number is not prime"<<endl;
// }




// return 0;



// }



// #include<iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number = ";
//     cin>>n;
//     int sum=0;

//     for(int i =1 ; i<=n ;i++)
//     {
//         if(i%3 ==0)
//         {
//             sum =sum +i;
//                     }

//     }
//     cout<<"The sum = "<<sum<<endl;
//     return 0;
// }

// foctorial of number n

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number = ";
cin>>n;
int fact = 1;
for(int i = 1;i<=n; i++)
{
    fact = fact * i;
}
cout<<fact; 


return 0;
}
