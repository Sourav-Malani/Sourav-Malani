#include <iostream>
using namespace std;
int main()
{
    
int number,d1,d2,d3,d4,d5,d6;
cout<<"Task-08"<<endl;
cout<<"Enter a 6 digit number to reverse: ";
cin>>number;

d1=(number/100000);
d2=(number/10000)%10;
d3=(number/1000)%10;
d4=(number/100)%10;    
d5=(number/10)%10;
d6=(number%10);
cout<<"Reverse of "<<number<<" is  "<<d6<<d5<<d4<<d3<<d2<<d1<<endl;
return 0;

}

