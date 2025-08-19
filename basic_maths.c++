#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

// count the digit 

// int count_the_digit(int n){
//  int count = 0;

//  while( n > 0){

//     count = count + 1;

//     n = n/10; 
// }

// return count;
// }
// int main ()
// {
//     int n;
//     cout<<"Enter the number: " ;
//     cin>>n;

//     int result =  count_the_digit(n);
//     cout << "The result is =" << result ;
// return 0;
// }


////palindrome 

//  int main ()
// {

//     int n ;
//     cout << "Enter the number: ";
// cin>> n;
// int rev = 0 ;
// int dup = n;
// while (n>0){
// //reverse the number
//     int last_digit = n % 10;// gives the last digit
     
//     rev = (rev * 10) + last_digit;

//     n = n/10;

// }

// if (dup == rev)
// {
//     cout <<"true";
// }
// else 
// {         
//     cout<< "false";
// }
// return 0;
// }   




// // armstrong number 

// class Solution {
// public:
//     bool isArmstrong(int n) {
// int sum = 0;
// int dup = n;
// while(n != 0){
//     int d = n % 10 ;
//     sum = sum + (d*d*d);
//     n /=10;
// }
// if (dup == sum)
// {
//     return true;
// }
// else
// {
//     return false;
// }

//     }
// };



// pair of divsot
#include<iostream>
using namespace std;

// void printDivisor(int n){
//     cout << "The divisors are: ";
//     for(int i = 1; i <= n; i++)
//     {
//         if (n % i == 0){
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     if (n == 0) {
//         cout << "0 has no divisors in the typical sense, or all non-zero numbers are divisors." << endl;
//     } else {
//         printDivisor(n);
//     }
    
//     return 0;
// }


// prime 
// int main(){
// int n ;
// cout<<"enter the number:";
// cin>>n;
// bool isPrime = true;
// for(int i =2 ; i< n;i++)
// {
//     if (n%i == 0)
//     {
//         isPrime = false;
//     break;
//     }
//     if(isPrime == true)
//     {

//         cout << "the given number is true ";
//     }
//     else{
//         cout<<"the given number is false";
//     }

// }
// }


// int main (){
//     int a,b;
//     cout<<"Enter the frist value:";
//     cin>>a;
//     cout<<"enter the second value:";
//     cin>>b;

//     while( a>0 && b>0){
//         if(a>b){
//             a = a % b;
//         }
//         else
//         {
// b = b % a;            /* code */
//         }
        
//     }
//     if(a==0)
//     {
//         cout<<"Gcd of both number is "<<b;
//     }
//     else{
//         cout<<"Gcd of both number is"<<a;
//     }
//     return 0;

// }



int main ()
{
    bool istrue;
    if(100 == 50 + 50)
    {
        istrue = true;
    }
    else
    {
        istrue = false;
    
    } 
    cout << istrue << endl;
    return 0; 
}