
#include <iostream>
using namespace std;

int main(){
    string n ; 
    cin>>n; 

    int max_cnt=1 , cnt=1;

    for( int i=1 ;i<n.size();i++){
        if(n[i]==n[i-1]) cnt++;
        else cnt=1;

        if(cnt>max_cnt) max_cnt=cnt;
    }

    cout<<max_cnt<<endl;
    return 0 ;
}