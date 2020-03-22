#include <iostream>
#include <vector>
using namespace std;

int min_num(vector <int>arr , int n){
    int min_no = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]<min_no){
            min_no = arr[i];
        }
    }
    return min_no;
}

int main(){
    vector <int>arr_ans;

    int t, n, inp;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n;
        vector <int>arr_inp;
        for(int i = 0; i<n; i++){
            cin>>inp;
            arr_inp.push_back(inp);
        }
        arr_ans.push_back(min_num(arr_inp , n));

    }

    for(int i = 0; i<t; i++){
        cout<<arr_ans[i]<<endl;
    }

    return 0;
}