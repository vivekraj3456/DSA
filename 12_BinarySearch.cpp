// TODO: *Lower bound 
#include<iostream>
#include<vector>
using namespace std;
// Ques: Given a sorted integer array and an integer 
// ‘x’, find the lower bound of x. 

// int main(){
//     vector<int> v={1,2,4,5,9,15,18,21,24};
//     int n=v.size();

//     int x=8;
//     int low=0;
//     int high=n-1;

//     bool flag=false;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(v[mid]==x){
//             flag=true;
//             cout<<v[mid-1]<<endl;
//             break;
//         }
//         else if(v[mid]<x) low =mid+1; 
// // *for uppper bound we will do high=mid-1 and low=mid+1 for lower bound
//         else high=mid-1;
//     }
//     if(flag==false) cout<<v[high]<<endl; 
// //!for upper bound we will print v[high] and for lower bound we will print v[low]
// // ok
// }

// TODO: First Occurrence Index
/*Ques  :Given a sorted array of n elements and a 
target ‘x’. Find the first occurrence of ‘x’ in the 
array. If ‘x’ does not exist return -1.
*/
// int main(){
//     vector<int> nums={1,2,2,3,3,3,4,4,5,8,9};
//     int n=nums.size();

// }

vector<int> nums={-1,0,3,5,9,12};
int target=9;
int n=nums.size();
for(int i=0;i<=n-1;i++){
    int low=0;high=n-1;
    // while()
}
