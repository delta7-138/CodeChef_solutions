#include <iostream>
#include <stack>
#include <vector>
#define LARGE 128
using namespace std;

int give_count(int n){
    int hash_table[LARGE];
    int ctr = 0;

    for(int i = 0; i<10; i++){
        hash_table[i] = -1;
    }

    stack <int>seq;
    seq.push(0);
    seq.push(0);
    ctr+=1;

    hash_table[0] = 1;
    while(ctr<n){
        if(hash_table[seq.top()]<0){
            hash_table[seq.top()] = ctr++;
            seq.push(0);
        }else{
            int temp = seq.top();
            seq.push(ctr - hash_table[seq.top()]);
            hash_table[temp] = ctr;
            ctr++;
        }
    }

    // for(int i = 0; i<10; i++){
    //     cout<<hash_table[i]<<" ";
    // }

    int count_x = 0;
    int x = seq.top();
    for(int i = 0; i<n; i++){
        if(seq.top()==x){
            count_x++;
        }
        seq.pop();
    }
    return count_x;
}

int main(){
    int t;
    cin>>t;

    int n;
    vector <int>ans;
    for(int i = 0; i<t; i++){
        cin>>n;
        ans.push_back(give_count(n));
    }

    for(int i = 0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}