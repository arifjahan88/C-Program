#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < 10000; i++)
    {
        if(i%n == 2){
            cout<<i<<endl;
        }
    }
}
