#include <iostream>
using namespace std;
int main()
{   /* The alograithum  of the program is that I frist calculated the brics needed for upper side of room. Which is basically side by side divided by total dimension of the brick which is 4*4= 16. And then doing same for the 4 sides and adding them up.
Height and width will be divisor of 4 becuase the dimensions of brick given are 4X4.                      */
        
        
    int W,H,up,side,total; //W is width and H is height. 
    cout<<"Enter width of room(an divisior of 4): ";
    cin>>W;
    cout<<"Enter height of room(an divisior of 4): ";
    cin>>H;
    up=(W*W)/16;
    side=(W*H)/16;
    total=up+4*side;
    cout<<"Total bricks required for the room are: "<<total<<endl;
    return 0;
}

