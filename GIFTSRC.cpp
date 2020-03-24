#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <int>return_coord(string pattern , int length){
    int x = 0 , y = 0;
    vector <int>ans;
    ans.push_back(x);
    ans.push_back(y);

    int i = 0, flip;
    char c;
    while(i<length){
        c = pattern[i];
        flip = 0;
        i++;

        if(c=='L'){
            ans[0]--;
        }else if(c=='R'){
            ans[0]++;
        }

        while(pattern[i]=='L' || pattern[i]=='R'){
            i++;
        }
        
        c=pattern[i];
        i++;
        if(c=='U'){
            ans[1]++;
        }else{
            ans[1]++;
        }
        while(pattern[i]=='U' || pattern[i]=='D'){
            i++;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;

    int n;
    vector <vector <int>>arr_ans;

    string inp;
    for(int i = 0; i<t; i++){
        cin>>n>>inp;
        arr_ans.push_back(return_coord(inp , n));
    }

    for(int i = 0; i<t; i++){
        cout<<arr_ans[i][0]<<" "<<arr_ans[i][1]<<endl;
    }
    return 0;
}
