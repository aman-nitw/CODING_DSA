#include<iostream>
#include<vector>
using namespace std;
void subsequences(vector<int> A,int idx,vector<int> temp){
    
    if(idx>=A.size()){
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }cout<<endl;
        return;
    }
    //take condition
    temp.push_back(A[idx]);
    subsequences(A,idx+1,temp);
    //not take condition
    temp.pop_back();
    subsequences(A,idx+1,temp);
}
int main(){
    int n,k;
    cout<<"enter the number of elements of the array : ";
    cin>>n;
    vector<int> A;
    vector<int> temp;
    for(int i=0;i<n;i++){
     cin>>k;
     A.push_back(k);
    }
    subsequences(A,0,temp);
    
}
