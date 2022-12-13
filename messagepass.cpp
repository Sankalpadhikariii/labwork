#include <bits/stdc++.h>
using namespace std;
// lottery machine
class Lottery_Machine{
public:
// lottery number produced by the machine
    int lottery_number;
    void get_lottery(){
// get a random number between 0 to 99
        srand(time(0));
        lottery_number=rand()%100;
        cout << "Lottery_number is: " << lottery_number;
    }    
};
// user using the lottery machine
class User{
private:    
// name and if of the user
    string user_name;
    int user_id;
public:
    User(string name,int id){
        user_name=name;
        user_id=id;
    }
// invoke the get_lottery function
    void call_lottery(Lottery_Machine lottery){
        cout << "User name : " << user_name<<endl;
        cout << "User id: "<< user_id<<endl;
        lottery.get_lottery();
    }
};
int main() 
{
// Create a user
    User Ram("Ram",18);
// Object for lottery machine
    Lottery_Machine lottery;
// The user pressing the button in 
// lottery machine to get lottery
    Ram.call_lottery(lottery);

    return 0;
}
