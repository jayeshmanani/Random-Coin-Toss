#include<iostream>
using namespace std;
class guessNumber{
public:
    int number;
    int max = 100;
    guessNumber()
    {
        number= ( rand() * rand() % (max+1));
    };

    void play(){
    int y;
    while(true){
    cin>>y;
    if(y>number){
        cout<<"The Number Is Bigger\n";
    }
    else if(y<number){
        cout<<"The Number Is Smaller\n";
    }
    else {
        cout<<"You Got The Number\n";
        break;
    }
    }
    };
};
int main(){
 guessNumber g;
 g.play();
 return 0;
}
