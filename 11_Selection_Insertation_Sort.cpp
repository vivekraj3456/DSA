// TODO:selection sort
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> v={21,43,67,87,32,29,-5,-8,4312};
    int n=v.size();
    for(int ele : v){
        cout<<ele<<" ";
    }
    //selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
    //minimum element
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                minidx=j;
            }
        }
        swap(v[i],v[minidx]);
    }
    cout<<endl;
    for(int ele : v){
        cout<<ele<<" ";
    }
}