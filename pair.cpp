#include<./stdc++.h>
#include <utility>

using namespace std;



void explainPair(){
    pair<int,int> pairDats(1,3);
    cout << pairDats.first << " " << pairDats.second;

    pair<int, pair<int,int> > p;
    p.first = 3;
    p.second.first = 1;
    p.second.second = 4;
    cout << p.first << " " << p.second.first;

}

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int> > v1;
    v1.emplace_back(3,4);

    vector<int> v2(1,100);
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);

    vector<int>::iterator it = v2.begin();
    it = it+5;
    // cout << *(it)<<" ";

    // for(vector<int>::iterator it=v2.begin(); it!=v2.end(); it++ ){
    //     cout << *(it) << " ";
    // }

    // for(auto it=v2.begin(); it!=v2.end();it++){
    //     cout << *(it) << " ";
    // }

    for(auto it:v2){
        cout << it << " ";
    }
    cout<<endl;
    v2.erase(v2.begin());
    for(auto it:v2){
        cout << it << " ";
    }
    cout<<endl;
    v2.erase(v2.begin()+2, v2.begin()+4);

for(auto it:v2){
        cout << it << " ";
    }
    cout<<endl;
}
int main(){
    // explainPair();
    explainVector();
    return 0;
}