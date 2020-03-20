#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n , x , y , pow, m, c;

    cin>>n;
    cin>>m>>c;
    vector <int>village_one;
    vector <int>village_two;

    int sum_pow_1 = 0 , sum_pow_2 = 0;
    for(int i = 0; i<n; i++){
        cin>>x>>y>>pow;
        if(m * x - y + c<0){
            village_one.push_back(pow);
            sum_pow_1+=pow;
        }else{
            village_two.push_back(pow);
            sum_pow_2+=pow;
        }
    }
    if(sum_pow_1>sum_pow_2){
        cout<<sum_pow_1;
    }else{
        cout<<sum_pow_2;
    }

    return 0;
}