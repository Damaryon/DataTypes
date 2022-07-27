#include <iostream>
using namespace std;
//declare varibalsint yourFriends
int main() {
    int totalFriends;
    int yourFriends;
    cin >> yourFriends; //yourFriends = Get next input;
    totalFriends = yourFriends*yourFriends;
    cout << "Your friend knows ";
    cout << totalFriends;
    cout << " people.\n";
    totalFriends = totalFriends*yourFriends;
    cout << "And, they know ";
    cout << totalFriends;
    cout << " people.\n";
     return 0;
    }