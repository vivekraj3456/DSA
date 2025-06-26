// #include<iostream>
// using namespace std;



// TODO: Array_Display_Values


// int main(){
//     int arr[5];
//     arr[0]=5;
//     arr[1]=10;
//     arr[2]=13;
//     arr[3]=23;
//     arr[4]=32;
//     arr[5]=34;  
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
//         cout<<arr[5]<<endl;
// }



// TODO: "Array_Element_Print



// int main(){
//     int arr[7]={1,5,3,2,6,8,4};
//     // int arr[]={1,5,3,2,6,8,4};
//     cout<<arr[0]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[6]<<endl;
// }

// TODO: "Array_Print_All_Elements"
 

// int main(){
//     int arr[]={13,93,4543,55,6657,35};
//     for(int i=0;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
// }




// TODO: "Array_Input_Output"



// int main(){
//     int arr[7];
//     for(int i =0;i<=6;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=6;i++){
//     cout<<arr[i]<<" ";
//     }
// }


// TODO: Student_Marks_Check



// int main(){
//     int n;
//     cout<<"no. of students:";
//     cin>>n;
//     int marks[n];
//     cout<<"Enter the marks:";
//     for(int i=0;i<=n-1;i++){
//         cin>>marks[i];
//     }
//     for(int i=0;i<=n-1;i++){
//         if(marks[i]<=35){
//             cout <<"which no. of student have 25 marks: "<< i<<" ";
//         }
//     }
// }

// int main(){
//     int arr[]={2213,23,3423,434,545,66,57,78,6,21,3,123,12,3,123,1,23,43,435,5,6,67,7,8,89,342,5,2,747,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n;
// }


// TODO: Memory_Allocation


// int main(){
//     int arr[6];
//     //arr and &arr are same/
//     cout<<&arr<<endl;
//     cout<<arr<<endl;

//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
//     cout<<arr[4]<<endl;
//     cout << arr + 1 << endl;  // Moves by size of int (4 bytes)
//     cout << &arr + 1 << endl;  // Moves by size of entire array (20 bytes)

// }



// TODO: Ques : Calculate the sum of all the elements in the given array.


// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=n-1;i++){
//         sum+=arr[i];
//     }
//         cout<<sum;
// }

//*  Linear search

// TODO: Ques: Find the element x in the array . Take array and x as input.

// int main(){
//     int n;
//     cout<<"Enter the size of array:"<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the element want to search:"<<endl;
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }

//     int x;
//     cout<<"enter element of array:"<<endl;
//     cin>>x;

//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x){
//             cout<<"Element found at index "<<i<<endl;
//             break;
//         }
//         }
//         cout<<"Element not found"<<endl;
//     }
    
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"Enter the size of array: "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element want to found: "<<endl;
    cin>>x;

    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            cout<<"array element found at index"<<i<<endl;
            break;
        }
    }
}


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of array:" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int x;
//     cout << "Enter the element to search:" << endl;
//     cin >> x;
//     int i;
    
//     for (i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             cout << "Element found at index "<<i<<endl;
//             break; 
//         }
//     }
//     if (i == n) {
//         cout << "Element not found" << endl;
//     }
//     return 0;
// }

