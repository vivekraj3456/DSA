// TODO:selection sort
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// int main(){
//     vector<int> v={21,43,67,87,32,29,-5,-8,4312};
//     int n=v.size();
//     for(int ele : v){
//         cout<<ele<<" ";
//     }
//     //selection sort
//     for(int i=0;i<n-1;i++){
//         int min=INT_MAX;
//         int minidx=-1;
//     //minimum element
//         for(int j=i;j<n;j++){
//             if(v[j]<min){
//                 min=v[j];
//                 minidx=j;
//             }
//         }
//         swap(v[i],v[minidx]);
//     }
//     cout<<endl;
//     for(int ele : v){
//         cout<<ele<<" ";
//     }
// }


// TODO: Selection sort ANOTHER METHOD 

// int main(){
//     vector<int> v={21,43,67,87,32,29,-5,-8,4312};
//     int n=v.size();
//     for(int ele : v){
//         cout<<ele<<" ";
//     }
//     //selection sort
//     for(int i=0;i<n-1;i++){
//         int min=INT_MAX;
//         int minidx=-1;
//     //minimum element
//         for(int j=i;j<n;j++){
//             if(v[j]<min){
//                 min=v[j];
//                 minidx=j;
//             }
//         }
//         swap(v[i],v[minidx]);
//     }
//     cout<<endl;
//     for(int ele : v){
//         cout<<ele<<" ";
//     }
// }


// TODO: Insertion sort
// int main(){
//     int arr[14]={34,5,4,67,7,34,32,4323,4,2345,45,656,5,6};
//     int n=14;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=1;i<n;i++){
    //         int j=i;
    //         while(j>=1){
        //             if(arr[j]>arr[j-1]) break;
        //             else swap(arr[j],arr[j-1]);
        //             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    
    // TODO:Ques :Replace Elements By Rank
    /*
    Given an array with N distinct elements, convert the given array to a form where all 
    elements are in the range from 0 to N-1. The order of elements is the same, i.e., 0 is placed in the 
    place of the smallest element, 1 is placed for the second smallest element, … N-1 is placed for the largest element
    */

//     int main(){
//     int arr[]={19,12,23,8,16};
//     int n=5;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     vector<int> v(n,0);
//     int x=0;
//     for(int i=0;i<n;i++){
//         int min=INT_MAX;
//         int mindx= -1;
//         for(int j=0;j<n;j++){
//             if(v[j]==1) continue;
//             else {
//                 if(min>arr[j]){
//                     min=arr[j];
//                     mindx=j;
//                 }
//             }
//         }
//         arr[mindx]=x;
//         v[mindx]=1; //v[mindx] is used to mark the element at index mindx as visited or processed. By setting v[mindx] to 1, we indicate that the element at index mindx has been assigned its rank and should not be considered in subsequent iterations of the loop. This helps us avoid reprocessing the same element and ensures that we only assign ranks to unprocessed elements in each iteration.
//         x++;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }    
// }



