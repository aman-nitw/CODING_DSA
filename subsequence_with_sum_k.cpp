#include<iostream>
#include<vector>
using namespace std;
void subsequences(vector<int> A,int idx,vector<int> temp,int k,int sum){
    
    if(idx>=A.size()){
       
        if(sum==k){
             for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        }
        return;
    }
    temp.push_back(A[idx]);
    sum=sum+A[idx];
    subsequences(A,idx+1,temp,k,sum);
    sum=sum-A[idx];
    temp.pop_back();
    subsequences(A,idx+1,temp,k,sum);
}
int main(){
    int n,k,p=0;
    cout<<"enter the number of elements of the array : ";
    cin>>n;
    vector<int> A;
    vector<int> temp;
    for(int i=0;i<n;i++){
     cin>>k;
     A.push_back(k);
    }
    subsequences(A,0,temp,3,p);
    
}
