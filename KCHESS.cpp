#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <vector <long>>operations_knight(vector <long>coords){
    vector <vector <long>>list_fin_c;

    vector <int>horiz_1;
    vector <int>horiz_2;
    vector <int>horiz_3;
    vector <int>horiz_4;

    vector <int>vertic_1;
    vector <int>vertic_2;
    vector <int>vertic_3;
    vector <int>vertic_4;

    horiz_1.push_back(coords[0] + 2);
    horiz_1.push_back(coords[1] + 1);

    horiz_2.push_back(coords[0] + 2);
    horiz_2.push_back(coords[1] - 1);

    horiz_3.push_back(coords[0] - 2);
    horiz_3.push_back(coords[1] + 1);

    horiz_4.push_back(coords[0] - 2);
    horiz_4.push_back(coords[1] - 1);

    vertic_1.push_back(coords[0] + 1); 
    vertic_1.push_back(coords[1] + 2);

    vertic_2.push_back(coords[0] - 1);
    vertic_2.push_back(coords[1] + 2);

    vertic_3.push_back(coords[0] + 1);
    vertic_3.push_back(coords[1] - 2);

    vertic_4.push_back(coords[0] - 1);
    vertic_4.push_back(coords[1] - 2);

    list_fin_c.push_back(horiz_1);
    list_fin_c.push_back(horiz_2);
    list_fin_c.push_back(horiz_3);
    list_fin_c.push_back(horiz_4);
    list_fin_c.push_back(vertic_1);
    list_fin_c.push_back(vertic_2);
    list_fin_c.push_back(vertic_3);
    list_fin_c.push_back(vertic_4);

    return list_fin_c;
}
vector <vector <long>>operations_king(vector <int>coord_king){
    vector <vector <long>>list_fin_king;

    for(int i = 0; i<1; i++){
        for(int j = 0; j<1; j++){
            vector <long>coord_temp;
            
            coord_temp.push_back(coord_temp[0] + i);
            coord_temp.push_back(coord_temp[1] + j);

            list_fin_king.push_back(coord_temp);
        }
    }

    for(int i = 0; i<1; i++){
        for(int j = 0; j<1; j++){
            vector <long>coord_temp;
            
            coord_temp.push_back(coord_temp[0] - i);
            coord_temp.push_back(coord_temp[1] - j);

            list_fin_king.push_back(coord_temp);
        }
    }

    for(int i = 0; i<1; i++){
        for(int j = 0; j<1; j++){
            vector <long>coord_temp;
            
            coord_temp.push_back(coord_temp[0] - i);
            coord_temp.push_back(coord_temp[1] + j);

            list_fin_king.push_back(coord_temp);
        }
    }

    for(int i = 0; i<1; i++){
        for(int j = 0; j<1; j++){
            vector <long>coord_temp;
            
            coord_temp.push_back(coord_temp[0] + i);
            coord_temp.push_back(coord_temp[1] - j);

            list_fin_king.push_back(coord_temp);
        }
    }
    return list_fin_king;

}
int checkmate_or_not(vector <vector<long>> coord_king , vector < vector <long>>coord_temp){
    int i;
    for(i = 0; i<coord_king.size(); i++){
        if(find(coord_temp.begin() , coord_temp.end() , coord_king[i])){
            return 1;
        }
    }
    return 0;
}
int main(){
    int t,num_inp;
    long inp;
    cin>>t;

    vector <int>answers;
    for(int i = 0; i<t; i++){
        cin>>num_inp;
        vector <vector <long>> coord
    }
    
}
