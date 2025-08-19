# include <iostream>

using namespace std ;

int main ()
{
    cout<<"Hello, Welcome to Akhil's carpet cleaning service"s;
       int room;

    cin>> room ;
    cout << "Enter thr number of rooms to be cleaned :"<<endl ;

    cout << "Number of rooms are :"<<room<<endl;
    int price =30;
    cout <<"price per room is : $"<<price<<endl;
    int cost = room* price;
    cout<<"Cost is : $"<<cost<<endl;
    int tax = cost *0.06;
    cout <<"Tax is : $"<<endl;

    cout<<"\n ====================================\n"<<endl;

    int total = tax + cost ;

    cout <<"Total estimate : $"<<total<<endl;
    cout <<"\n This estimate is valid for 30 days"<<endl;
return 0;
}
