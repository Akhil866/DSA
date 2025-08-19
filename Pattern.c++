// #include<iostream>
// using namespace std;

//  int main()
//  {

// //     int n;
// //     cout<< "Enter the number:";
// //     cin>>n;

// //     for (int i = 1; i <= n; i++)  //Outter loop 
// //     {
// //         for (int j = 1 ; j <=n; j++) // inner loop 
// //         {
// //             cout<<j<<" ";
// //         }
// //     cout<< endl;
// //     }

// //     return 0;
    
// // }
// // #include<iostream>
// // using namespace std;

// // int main()
// // {

//     // int n;
//     // cout<< "Enter the number:";
//     // cin>>n;

//     // for (int i = 0; i <= n; i++)  //Outter loop 
//     // {
//     //     for (int j = 1 ; j <=n; j++) // inner loop 
//     //     {
//     //         cout<<"*";
//     //     }
//     // cout<< endl;
//     // }






// //     int n ;
// //     cout<<"Enter the number of rows: ";
// //     cin>>n;
// //     int num = 1;


// //      for(int i = 0 ; i<n; i++)
// //      {
    
// //         for(int j= 0; j<n ;j++)
// //         {
        
// //             cout<<num<<" ";
// // num++;

// //         }
// //         cout<<endl;
// //      }



// // int n ;
// // cin >>  n;
// // cout<< " Enter the number of rows"<< endl;
// for( int i = 0;i<n ; i++)
// {

//     char ch = 'A';

//     for( int j =0 ; j<n; j++)
//     {
// cout<< ch << " ";
// ch ++;
// }
// cout << endl;
// }


// //  +
// //  ++
// //  +++

// //  int n ;

// //  cin>> n;

// //  for (int i = 0 ; i<n;i++)
// //  {
// //     for(int j =0 ; j<i+1 ; j++ )
// //     {
// //         cout<< "* ";
// //     }
// //     cout<<endl;
// // }

// // 1
// // 22
// // 333
// // 4444

// // int n ;
// // cout<<"Enter the number = ";
// // cin>>n;

// // for(int i = 0 ; i<n ; i++) 
// // {
// //     for(int j = 0; j<i+1 ;j++)
// //     {
// //         cout<< i+1;
// //     }
// //     cout<<endl;
// // }

// // A 
// // BB
// // CCC

// int n ;

// cout << "Enter the number  =";
// cin >> n ;

// // for (int i = 0 ; i<n ; i++){
// //     char ch ='A' +i;

// //     for (int j = 0 ; j< i+1 ; j++)
// //     {
// //         cout<< ch;
        
        
// //     }
// //     cout<<endl;
// // }


// // for (int i = 0 ; i<n ; i++){


// //     for (int j = 1; j< i+1 ; j++)
// //     {
        
// //         cout<<j;
        
// //     }
// //     cout<<endl;
// // }



// // floyds triangle pattern




  
// return 0;   
// }



#include<stdlib.h>
#include<iostream>

using namespace std;
void print0(int n){
    /*x
     xxx
    xxxxx */
    
for(int i =0;i<n;i++){

  //for spaces  
    for(int j = 0;j<n-i-1;j++){
        cout << " ";
       

    }//for stars
        for( int j=0;j<2*i-1;j++){

            cout<< "x";

        }      
        //for spaces9
              for(int j=0 ;j<n-i-1;j++)
              {
                cout<<" ";
              }     
              cout <<endl;   
    
    

}
}
void print1(int n){
      /*xxxxx
         xxx
          x*/
    for(int i =1;i<n;i++)
    {
        //spaces
        for(int j = 0; j<i;j++){
        cout<<" ";
    }
    // stars
    for(int j =0 ;j< 2 * (n - i) - 1;j++){
        cout<<"*";
    }
    //spaces
    for(int j=0;j<i;j++){
        cout<<" ";
    }

    cout<<endl;

}
}
void print2(int n){

    /*x
      xx
      xxx
      xx
      x   */
    for(int i = 1;i<=n;i++)
    {
        int star;
        if(i<= (n+1)/2)
        {
            star=i;
        }
        else{
            star = n-i+1;
        }
        for(int j =0 ;j <star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n){
/*1
  01
  101
  0101*/
int start;
  for(int i =0 ;i < n;i++)
  {
    if( i % 2 == 0) {
        start =1;
    }
    else{
        start = 0;
    }
    for(int j =0;j<=i;j++)
    {
        cout<<start;
        start = 1 - start; 
    }
    cout<<endl;
  }
}  
void print4(int n){
    /* 1    1
       12  21
       123321*/
    for(int i =1; i<=n ;i++ )
       {
        //number
        for(int j =1;j<=i;j++)
        {
            cout<<j;
        }
        //spaces
        for(int j =1 ;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--)
       { cout<<j;
       }
       cout<<endl;
   
    }  
       
}
void print5(int n){

    // A  B  C  D  E 
    // A  B  C  D
    // A  B  C
    // A  B
    // A
for(int i = 1;i<=n;i++){
    char ch ='A';

for(int j =0;j<n-i+1;j++)
{
    cout<<" "<<ch <<" ";
    ch++;
}
cout<<endl;
}

}
void print6(int n){
    int num =1;
    for(int i =0 ;i<n ; i++)
    {
        for(int j = 0; j<i;j++)
        {
            cout<<" "<<num<<" ";
            num++;
        }
        cout<<endl;

    }
}
void print7(int n){
    for(int i =0;i<n;i++)
    {
        char ch = 'A';
           //spaces
        for(int  j =0 ; j< n-i-1;j++)
        {
            cout<<" ";

        }
        //alphabet
    
        for(int j = 0 ; j<i;j++)
        {
            cout<<" "<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void print8(int n){
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE  
    for (int i = 0 ; i<n ; i++){
          char ch ='A' +i;
        
             for (int j = 0 ; j< i+1 ; j++)
             {
                cout<< ch;
                
                 }
            cout<<endl;
}
}
void print9(int n){
           
//     A
//    ABA
//   ABCBC
//  ABCDCDE

for (int i = 0 ; i<n ; i++){

    //spaces = n-i-1
    
    for(int j = 0 ; j < n-i-1 ; j++)
    {
        cout<<" ";
    }
    char ch ='A';
    int bp = (2*i-1)/2;
    for(int j = 0; j < 2*i-1 ; j++)
    {
        cout<<ch;
        if(j == bp){ ch--;
        }
       else{
        ch++;
       }
    }
    for(int j = 0 ; j < n-i-1 ; j++)
    {
        cout<<" ";
    }
    cout<<endl;

}
}   
void print10(int n){
// E
// DE
// CDE
// BCDE
// ABCDE
    for( int i = 0;i<n ; i++)
{

   for(char ch ='E'-i;ch<='E';ch++)

    {
cout<< ch ;

}
cout << endl;
}
}
void print11(int n){
// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********
    int inis=0;
    for(int i =0 ; i<n ; i++)
    {
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < inis; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        inis += 2; 
        cout << endl;
    }

    inis = 2 * (n - 1); 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < inis; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        inis -= 2; // Decrease space count
        cout << endl;
}
}
void print12(int n){
    
    int spaces = 2 * (n - 1);

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
        spaces -= 2;
    }

    spaces = 2; // Reset spaces for lower half

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
        spaces += 2;
    
    }
}
 void print13(int n){
    // *****
    // *   *
    // *   *
    // *   *
    // *****                 




    for(int i =0 ;i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            if( i == 0 || i == n-1 || j == 0 || j == n-1){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
  void print14(int n){

//      *
//     * *
//    *   *
//   *     *
//  *       *
//   *     *
//    *   *
//     * *
//      *
    for(int i =0 ;i<n ;i++)
    {    for(int i = 0; i < n; i++) {
        // Leading spaces
        for(int j = 0; j <= n - i - 1; j++) {
            cout << " ";
        }
        cout << "*"; // First star

        if(i != 0) { // If not the first row, print spaces inside
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*"; // Second star at the end
        }
        cout << endl;
    }

    // Lower part
    for(int i = 0; i < n - 1; i++) {
        // Leading spaces
        for(int j = 0; j <= i + 1; j++) {
            cout << " ";
        }
        cout << "*"; // First star

        if(i != n - 2) { // If not the last row, print spaces inside
            for(int j = 0; j < 2 * (n - i - 2) - 1; j++) {
                cout << " ";
            }
            cout << "*"; // Second star at the end
        }
        cout << endl;

    }}
 voif }
int main (){

    int t;

    cout<< "Enter the no =";
    cin >> t;
    print14(t);

    return 0;
}   