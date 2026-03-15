// 1. sum of array
// input 4 2 3 4 5 output 14
// 2. find maximum/largest no. in an array
// input 1 34 56 78 23 output= 78
// 3.swap alternates in an array
// input = 6 1 2 3 4 5 6 output 2 1 4 3 6 5 6
// 4.Search a element in an array
// input 5 23 45 79 23 34 x=23 output true/1
// // #include<iostrea,m>
// #include <iostream>
// using namespace std;
// // int main
// int main() {
//     int arr[]={43,5,568,67,432,234,5};
//     int *ptr=arr;
//     for(int i=0;i<=6;i++){
//         cout<<*ptr<<" ";  //*ptr=arr[0]
//         ptr++;
//     }
//     cout<<endl;
//     for(int i=0;i<=6;i++){
//         cout<<*arr<<" "; //*arr=arr[0]  //*ptr=*arr
//         //*ptr == *arr == arr[0]

//     }
//     return 0;
// }
//?VECTOR
// TODO: CONVERT BINARY INTO DECIMAL
#include<iostream>
using namespace std;
int main(){

    int deci=0;
    int n;
    cout<<"Enter the size of binary number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the binary number: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int x=1;
    for(int i=n-1;i>=0;i--){
        deci+=arr[i]*x;
        x*=2;
    }
    cout<<deci<<endl;
    return 0;
}