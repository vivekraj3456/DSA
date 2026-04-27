#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//TODO: INBUILT SHORTING FUNCTIONS IN C++
// int main(){
//     vector<int> v(5);
//     for(int i =0;i<5;i++){
//         cin>>v[i];  //5 2 4 1 3 
//     }
//     sort(v.begin(),v.end());

//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" "; //1 2 3 4 5 
//     }
// }

// TODO: USING BUBBLE SORT ALGORITHM
// int main(){
//     int arr[9]={21,43,67,87,32,29,-5,-8,4312};
//     int n=9;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     //bubble sort
//     for(int i=0;i<n-1;i++){ //passes
//         // for(int j=0;j<n-1;j++){ //
//         for(int j=0;j<n-1-i;j++){ //“-i is used because after every pass, the largest element gets placed at its correct position at the end of the array, so we don’t need to compare it again.”
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "; //-8 -5 21 29 32 43 67 87 4312
//     }
// }

// TODO: CHECK IF ARRAY IS SORTED OR NOT
// int main(){
//     int arr[11]={32,45,9,65,20,23,74,6,521,7,2323};
//     int n=11;
//     bool isSort=true;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1]) isSort=false;
//     }
//     if(isSort==true) cout<<"Array is sorted";
//     else cout<<"Array is not sorted";
// }



// TODO: USING BUBBLE SORT ALGORITHM
// int main(){
//     int arr[]={21,43,67,87,32,29,-5,-8,4312};
//     int n=9;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     //check if sorted
//     bool isSort=true;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             isSort=false;
//             break;
//         }
//     }
//     if(isSort) cout<<"Array is sorted";
//     else{

//     //bubble sort
//     for(int i=0;i<n-1;i++){ //passes
//         // for(int j=0;j<n-1;j++){ //
//         for(int j=0;j<n-1-i;j++){ //“-i is used because after every pass, the largest element gets placed at its correct position at the end of the array, so we don’t need to compare it again.”
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "; //-8 -5 21 29 32 43 67 87 4312
//     }
// }
// }

// TODO:SORT A STRING IN DECREASING ORDER OF VALUES ASSOCIATED AFTER REMOVAL OF VALUES SMALLER THAN X.

// int main(){
//     string s="AZYXXYYBHDHHBXHJHDZGBXCHBGKZHGBYYGSJHBHBDYBKHBJHYBZJHB";
//     string str="";
//     for(int i =0 ;i< s.size();i++){
//         if(s[i]>='X'){
//             str.push_back(s[i]);
//         }
//     }
//     sort(str.begin(),str.end());
//     cout<<str; // XXXYYYYYYYZZZZ
// }

// TODO: PUSH ZEROES TO END WHILE MAINTAINING THE RELATIVE ORDER OF OTHER ELEMENTS.

// int main(){
//     int arr[]={5,0,3,39,5,0,0,67,87,20,0,34,5,0,26};
//     int n=15;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     //bubble sort
//     for(int i=0;i<n-1;i++){ //passes
//         for(int j=0;j<n-1-i;j++){ //“-i is used because after every pass, the largest element gets placed at its correct position at the end of the array, so we don’t need to compare it again.”
//             if(arr[j]==0){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "; 
//     }
// }