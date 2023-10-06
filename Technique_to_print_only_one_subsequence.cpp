#include <iostream>
#include<vector>
using namespace std;
bool sequence(int idx,vector<int> &result,int sum,vector<int> A,int target,int n){
    
    if(idx==n)
    {
        if(sum==target){
            for(int i=0;i<result.size();i++){
                cout<<result[i]<<" ";
            }return true;
        }else{
            return false;
        }
    }
    sum+=A[idx];
    result.push_back(A[idx]);
    if(sequence(idx+1,result,sum,A,target,n)==true){
       return true; 
    }
    sum-=A[idx];
    result.pop_back();
    if(sequence(idx+1,result,sum,A,target,n)==true){
        return true;
    }
    return false;
    
}
int main()
{
    int n,k,x;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter the target sum : ";
    cin>>k;
    vector<int> A;
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>x;
        A.push_back(x);
    }
    int idx=0,sum=0;
    vector<int> result;
    sequence(idx,result,sum,A,k,n);
}
