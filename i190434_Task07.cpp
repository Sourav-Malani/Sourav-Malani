#include <iostream>
using namespace std;
int main()
{
    
float seconds,hrs,mins,C_seconds;
cout<<"Task-07 "<<endl;
cout<<"Enter seconds: ";
cin>>seconds;

hrs=int(seconds/3600);
mins=int(((seconds/3600)-hrs)*60);
C_seconds=int(((((seconds/3600)-hrs)*60)-mins)*60);

cout<<"\n "<<hrs<<" hours : "<<mins<<" mins : "<<C_seconds<<" seconds "<<endl;
return 0;
    
}

