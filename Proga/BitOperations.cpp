#include <iostream>
using namespace std;


// here we need to make a two pow of number i
int first_task(int n) {
    return 1 << n; // It will move a bit left to n positions;
}

// in i'th postion it's "1" and all another chars is like in n number
int second_task(int i, int n) {
    int temp = 1 << i; // Move a bit with "1" to i position, to create a number, like 100000 or something like this, number of "0" depends on i
    return n | temp; // Here we use a byte or, to create a number with with byte will "0" and all other like in the n number
}

// in i'th position it's "0" and all another chars is like in n number
int third_task(int i, int n)  {
    int temp = 1 << i; // Move a bit with "1" to i position, to create a number, like 100000 or something like this, number of "0" depends on i
    return n & ~temp; // Here we use a byte or, to create a number with with byte will "1" and all other like in the n number (~ - byte negative (creates a different number with 0 and '1')
}

// in this task we must change an i'th byte and all other bytes will be like in the n number
int fourth_task(int i, int n) {
    int temp = 1 << i; // Here we create an temp int (will use it once) with first bit of '1' and all another bytes is
    return n ^ temp; // Here we are changing an i'th byte and all other numbers like in the n number
}

// in this task we must check if the number is even or odd, i would return true, if number is even and false, if the number is odd
bool fiveth_task(int n) {
    if ((n & 0) == 0) { // if we made an byte and with 0, it would return 1 only if the number is even
        return true;
    }
    else { // another case is if number is odd
        return false;
    }
}

int main () {
    int i, n;
    cin >> i >> n;
    return 0;
}
