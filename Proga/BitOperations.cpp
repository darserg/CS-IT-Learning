#include <iostream>
using namespace std;


// here we need to make a two pow of number i
int first_task(int n) {
    return 1 << n; // It will move a bit left to n positions;
}

// in i'th postion it's "1" and all another chars is like in n number
int second_task(int i, int n) {
    int temp = 1 << i;
    return n & temp;
}

// in i'th position it's "0" and all another chars is like in n number
int third_task(int i, int n)  {
    int temp = 1 << i;
    return n & ~temp;
}

int fourth_task(int i, int n) {
    int temp = 1 << i;
    return n & temp;
}

int fiveth_task(int n) {
    if ((n & 0) == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int n;
    cin >> n;
    if (fiveth_task(n)) {
        cout << "Is even" << "\n";
    } else {
        cout << "Is odd" << "\n";
    }
    return 0;
}
