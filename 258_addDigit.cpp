// 258. Add Digits
// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// Example 1:
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

// Example 2:
// Input: num = 0
// Output: 0
 

// Constraints:  0 <= num <= 231 - 1
// Follow up: Could you do it without any loop/recursion in O(1) runtime?

#include<iostream>
using namespace std;

int addDigit(int n){
    if (n==0) return 0;
    return 1 + (n-1)%9;
    // whi int d_sum=0;
    //     while(n>0){
    //         int ld=n%10;
    //         d_sum+=ld;
    //         n/=10;
    //     }le (n>=10){
       
    //     n=d_sum;
    // }
    // return n;
}

int main(){
    int n;
    cin>>n;
    // cout << n;
    cout<<addDigit(n);
    return 0;
}
