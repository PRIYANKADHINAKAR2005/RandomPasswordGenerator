/***********************************************************************************************************************************************
 ***********************************************Priyanka's Random Generator********************************************************************
************************************************************************************************************************************************/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const char alphanum[]="0123456789/*-+!@$%^&*()_-=qwertyuiopasdfghjklzxcvbnm<>,?/{}[]QWERTYUIOPASDFGHJKLZXCVBNM";
int stringlen=sizeof(alphanum)-1;
int main()
{
    cout<<"Enter the number of digits for your password:"<<endl;
    int num;
    cin>>num;
    srand(time(0));
    cout<<"The Generated Password is: ";
    for(int i=0;i<num;i++)
    {
        
        cout<<alphanum[rand()%stringlen];
    }
    
}