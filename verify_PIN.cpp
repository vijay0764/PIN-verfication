#include <iostream>

using namespace std;

int main()
{
    int userPin=8124 , pinEntered, counter=0 ;



    do{     cout << "input PIN code  ";
            cin>>pinEntered;

        if(userPin == pinEntered)
        {
            cout << "correct PIN";
            counter = 3;
        }
        else
        {
        counter++;
            if(counter<3)
                  cout << "wrong PIN,  ";
            else
                  cout << "attempts failed";

        }
     }
        while(counter<3);





    return 0;
}
