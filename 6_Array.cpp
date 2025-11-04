#include<iostream>
#include<vector>
using namespace std;



// TODO: 1_Array_Display_Values
//* Store values in array and display them.
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
//     cout<<arr[5]<<endl;
// }



// TODO: 2_"Array_Element_Print
// *Print only specific elements using indexes.

// int main(){
    //     int arr[7]={1,5,3,2,6,8,4};
//     // int arr[]={1,5,3,2,6,8,4};
//     cout<<arr[0]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[6]<<endl;
// }

// TODO: 3_"Array_Print_All_Elements"
// *Print all elements with a loop.



// int main(){
    //     int arr[]={13,93,4543,55,6657,35};
//     for(int i=0;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
// }




// TODO: 4_"Array_Input_Output"
// *Take user input, then display array values.



// int main(){
    //     int arr[7];
    //     for(int i =0;i<=6;i++){
        //         cin>>arr[i];
        //     }
//     for(int i=0;i<=6;i++){
//     cout<<arr[i]<<" ";
//     }
// }


// TODO: 5_Student_Marks_Check
// *Identify students scoring less than or equal 35.



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

// TODO: 6_Memory_Allocation
// *Show how arrays occupy continuous memory locations.


// int main(){
    //     int arr[6];
    //     //arr and &arr are same/
    //     cout<<&arr<<"&arr"<<endl;
//     cout<<arr<<endl;
//     cout<<"&arr:"<<&arr[0]<<endl;
//     cout<<"&arr[1]:"<<&arr[1]<<endl;
//     cout<<"&arr[3]:"<<&arr[3]<<endl;
//     cout<<"&arr[2:"<<&arr[2]<<endl;
//     cout<<"&arr[4]:"<<&arr[4]<<endl;
//     cout<<"arr[4]:"<<arr[4]<<endl;
//     cout<<"arr + 1:" << arr + 1 << endl;  // Moves by size of int (4 bytes)
//     cout<<"&arr + 1:" << &arr + 1 << endl;  // Moves by size of entire array (20 bytes)

// }



// TODO: 7_Ques : Calculate the sum of all the elements in the given array.
// *Add and display sum of array elements


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
// TODO: 8_Linear search
//*  Search an element linearly and show position.


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


// int main(){
//     int n;
//     int arr[n];
//     cout<<"Enter the size of array: "<<endl;
//     for(int i=0;i<=n-1;i++){
    //         cin>>arr[i];
    //     }

    //     int x;
    //     cout<<"Enter the element want to found: "<<endl;
    //     cin>>x;
    
    //     for(int i=0;i<=n-1;i++){
        //         if(arr[i]==x){
//             cout<<"array element found at index"<<i<<endl;
//             break;
//         }
//     }
// }


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

// TODO: Ques : 9_Find the maximum value out of all the elements in the array.
// *Find the largest element in array.


// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
    //         cin>>arr[i];
//     }
//     int max=arr[0];
//     for(int i=1;i<n;i++){
//             if(arr[i]>max){
//             max=arr[i]; 
//             }
//     }
//     cout<<max<<endl;
// }



// TODO: Ques : 10_Find the second largest element in the given array.
// * Find second maximum element of array.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//             cin>>arr[i];
//         }
//     int maxval=INT_MIN; 
//     for(int i=0;i<n;i++){
//             if(arr[i]>maxval){ //it 
//             maxval=arr[i]; 
//             }
//     }
//     int smax=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]!=maxval && smax<arr[i]){
//                 smax=arr[i];
//             }
//         }
//         cout<<maxval<<endl;
    
//     if(smax == INT_MIN){
//         cout << "Second Maximum does not exist (all elements might be same)" << endl;
//     } else {
//         cout << "Second Maximum: " << smax << endl;
//     }

//     return 0;
// }



// #include<iostream> 
// using namespace std;
// int main(){
//     int arr[]={34,34,24,345,456,657,56,7,432,35,345,345,423,2,5,345,456,68,67,9,565,34}; 
//     cout<<(sizeof(arr))<<endl; // size of entire array
//     cout<<sizeof(arr[0])<<endl;  // size of one element in the array
//     cout<<(sizeof(arr)/sizeof(arr[0])); // size of array in terms of number of elements
//     return 0;
// }



// TODO: [11] Arrays 02
// TODO: 11_Passing_Array_to_Function
// *Pass array to function and modify elements.


// void display(int a[] ){
//     for(int i=0;i<=4;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<endl;
//     return;
// }
// void change(int b[]){
//         b[0]=100;
//     }
//         int main(){
//     //accessing the element of array in another function
//     //updation pass by value/reference
//     int arr[5]={1,3,95,62,23}; //
//     display(arr);
//     change(arr);
//     display(arr);
// }


// void display(int a[],int size){
//// void display(int *a,int size){  arr aur *arr dono same hai
//     for(int i=0;i<size;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<" "<<endl;
//     return;
// }
// void change(int b[],int size){ //int *b bhi likh sakte hain
//         b[0]=100;
//     }
// int main(){
//     int arr[]={1,3,95,62,23};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<size<<endl;
//     display(arr,size);
//     change(arr,size);
//     display(arr,size);
// }


// TODO: 12_Array_Pointer
// * Explore relation between arrays and pointers.


// int main(){
//         int arr[]={232,4,54,5,56,67,56,4};  //arr decays to &arr[0].
//     // int *ptr=&arr;  //&arr type mismatch with int*.
//     int *ptr=&arr[0];   //Gets address of first element.
//     // int *ptr=arr[0];  //arr[0] is int, not int*.
// }


// int main(){
//     int arr[]={4,6,8,3,9};
//     int *ptr=arr;
//     int *ptr=&arr[0];  //this ptr has becomes addresses the whole array 
//     ptr[0]=110; //arr becomes ptr;
//     for(int i=0;i<=4;i++){
//         cout<<ptr[i]<<" ";
//     }
//         cout<<endl;
// }


// TODO: 13_print sub-array
// * Print all possible continuous subarrays. 

// int main(){
//     int arr;
//     cin>>arr;
//     for(int i=-;i<n;i++){
//         cout<<"arr: ";
//     }
// }

// TODO: 14_Pointer_Arithmetic
// * Use pointer arithmetic to access and modify array elements.
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {3, 45, 67, 87, 3, 24}; 
//     int *ptr = arr;                     // ptr points to arr[0]

//     // First loop: prints each element 5 times using different equivalent expressions
//     for (int i = 0; i <= 5; i++) {
//         cout << ptr[i]      << " "; // ptr[i] == *(ptr + i)
//         cout << *(ptr + i)  << " "; // explicit pointer arithmetic
//         cout << *(arr + i)  << " "; // arr decays to &arr[0], same as above
//         cout << arr[i]      << " "; // array indexing (same)
//         cout << i[arr]      << " "; // weird-but-valid: same as arr[i]
//         // So for each i you'll print the same element 5 times
//     }
//     cout << endl;

//     // Modify elements via pointer
//     *ptr = 8;   // sets arr[0] = 8
//     ptr++;      // now ptr points to arr[1]
//     *ptr = 9;   // sets arr[1] = 9
//     ptr--;      // move ptr back to arr[0]; now ptr == arr again

//     // Second loop: print elements using ptr as before.
//     // Since ptr points to start again, ptr[i] prints arr[i]
//     for (int i = 0; i <= 5; i++) {
//         cout << ptr[i] << " ";
//     }
//     return 0;
// }

// TODO: 15_Arrays_and_Pointers
// * Traverse array using both array indexing and pointer arithmetic.
// #include <iostream>
// using namespace std;
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



//?Vector
// TODO: 15_Vector_Basics
// * Basic vector operations: creation, insertion, access, and update.

// int main(){
//     vector<int>v;
//     //during insertion of elements in vector don't use indexing[]
//     v.push_back(7);
//     // but it can use during accessing/updating the elements
//     v[0]=19;
//     cout<<v[0]<<endl;  
// }

// TODO: 15_Vector_Basics
// * Basic vector operations: creation, insertion, access, and update.

// int main(){
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(1);
//     v.push_back(9);

//     v[0]=5;
//     v[1]=54; 
//     cout<<v[0]<<endl;
//     cout<<v[1]<<endl;
//     cout<<v[2]<<endl;
//     cout<<v[3]<<endl;
// }

// TODO: 16_Vector_Size_Capacity
// * Explore vector size vs capacity using push_back().
//!capacity is always greater than or equal to size
//!capacity doubles when size becomes equal to capacity
//!capacity halves when size becomes one-fourth of capacity
//!capacity is always in power of 2
//!capacity is the total space allocated to the vector


// int main(){
// vector<int>v;
// v.push_back(23);
// cout<<"size: "<<v.size()<<endl; //1
// cout<<"capacity: "<<v.capacity()<<endl; //1
// v.push_back(45);
// cout<<"size: "<<v.size()<<endl; //2
// cout<<"capacity: "<<v.capacity()<<endl; //2
// v.push_back(67);
// cout<<"size: "<<v.size()<<endl; //3
// cout<<"capacity: "<<v.capacity()<<endl; //3
// v.push_back(89);
// cout<<"size: "<<v.size()<<endl; //4
// cout<<"capacity: "<<v.capacity()<<endl; //4
// }

// TODO: 17_Vector_Out_of_Bound_Access
// * Demonstrate out-of-bounds access and its consequences.

// int main(){
//     vector<int> v;
//     v.push_back(4);

//     v[1]=54; //this will not give error but it is undefined behaviour
//     // as we are trying to access the index which is not present in the vector
//     // v has only one element at index 0
//     // v[1] is out of bound access

//     v.push_back(65);
//     v.push_back(23);
//     cout<<v[0]<<endl;
//     cout<<v[1]<<endl;
//     cout<<v[2]<<endl;
//     cout<<v[3]<<endl;
//     // it should be 4 54 65 23 but 54 is out of bound access.
//     // output: 4 65 23 1397965136{random garbage value}
// }


// TODO: 18_Vector_Pop_Back
// * Use pop_back() to remove elements and observe size/capacity changes.


// int main(){
//     vector<int> v;
//     v.push_back(23);
//     v.push_back(34);
//     v.push_back(31);
//     v.push_back(45);
//     v.push_back(67);
//     v.push_back(89);
//     v.push_back(940);
//     v.push_back(2390);
//     v.push_back(2390);
//     v.push_back(766790);
//     v.push_back(790);
//     v.push_back(590);
//     v.push_back(4540);
//     v.push_back(23);
//     v.push_back(78);
//     v.push_back(33);
//     v.push_back(123);
//     v.push_back(738);
//     v.push_back(335);
//     for(int i =0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl; 
// cout<<endl;
// v.pop_back();
// v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     for(int i =0;i<v.size();i++){
//         cout<<v[i]<<" "; 
//         //push back se size badhegi aur pop back se ghateegi lekin capacity nahi badhegi ghategi
//     }
//     cout<<endl;
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl; 
// }

// TODO: 19_Vector_Initialization
// * Different ways to initialize vectors.

// int main(){
// // vector<int> v(5); //Intialise vector of size 5 
// // cout<<v[0]<<endl; //0, as vector is intialised with 0
// // ----------------------------
// vector<int> v(23,199); //Intialise vector of size 23 with all values as 199
// cout<<v[0]<<endl; //199
// cout<<v[1]<<endl; //199
// }

// TODO: 20_user_input.



// int main(){
//     vector<int> v(5);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i]; //user input
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "; 
//     }
// }


// TODO: 21_user_input_dynamic_vector
// *Take user input to dynamically size the vector and display values.
// int main(){
//     vector<int> v;   
//     int n;
//     cout<<"n: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){   
//         int x;
//         cin >> x;
//         v.push_back(x); 
//     }
//     for(int i = 0; i < v.size(); i++){  
//         cout << v[i] << " ";
//     }
// }


// TODO: 22_Vector_Access_Update using_at()
// *Access and update vector elements using at() method.
// int main(){
//     vector<int> v;
//     v.push_back(92);
//     v.push_back(79);
//     v.push_back(83);
//     v.push_back(49);
//     v.at(2)=100; //v[2]=100
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
// }
// TODO: 23_Sorting_Vector
// *Sort vector elements using sort() from <algorithm>.

// #include<algorithm>
// int main(){
//     vector<int> v;
//     v.push_back(92);
//     v.push_back(79);
//     v.push_back(83);
//     v.push_back(49);
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
// }

// TODO: 24_passing vector by value to function
// * Original vector remains unchanged when passed by value.


// void change(vector<int> a){ 
//     a[0]=100; 
//     for(int i=0;i<a.size();i++){  
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

//     int main(){
//     vector<int>v; //original vector
//     v.push_back(92);
//     v.push_back(79);
//     v.push_back(83);
//     v.push_back(49);
// //vectors are passed by values:
// // each times you paass,new vector is created.

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl; 
//     change(v); //pass by value
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }


// TODO: 25_passing vector by reference
// * Modify original vector by passing it by reference.
// #include<algorithm>
// void change(vector<int> &a){ //pass by reference
//     a[0]=100; 
// }
//     int main(){
//     vector<int>v; //original vector
//     v.push_back(92);
//     v.push_back(79);
//     v.push_back(83);
//     v.push_back(49);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "; //original vector
//     }
//     cout<<endl; 
//     change(v); //pass by reference
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";  //changed vector
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v;
//     v.push_back(23);
//     v.push_back(34);
//     v.push_back(90);
//     v.push_back(56);
//     v.push_back(67);
//     v.push_back(78);
//     v.push_back(89);
//     v.push_back(90);
//     v.push_back(91);
//     int x=90;
    // int idx=-1;
    // for(int i =0;i<v.size();i++){
    //     if(v[i]==x) idx=i;
    // }
    // -----------another method---------------
//     auto it=find(v.begin(),v.end(),x);
//     int idx=it-v.begin();
//     if(it==v.end()) idx=-1; //element not found
//     // ---------------another method-------------
//     cout<<idx;
// }




//* 2sumproblem 
// by nested loop 
// if i ,if j ;i+j=target value
// and i!=j


// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"arr: ";
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     int target;
//     cout<<"target: ";
//     cin>>target;
//     for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j]==target){
//                     cout<<"indices: "<<i<<" and "<<j<<endl;
//                     cout<<nums[i]<<"+"<<nums[j]<<"="<<target;
//                     return 0;
//                 }
//             }
//         }
//     cout<<"No such elements found";
//     return 0;
// }

// ! Another method  

// int main(){
//     int x;
//     cout<<"Enter target: ";
//     cin>>x;
//     vector<int> v;
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter array elements: ";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i =0;i<=v.size()-1;i++){
//         for(int j=i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }


                                        