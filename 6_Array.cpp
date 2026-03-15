#include <iostream>
#include <vector>
#include <algorithm>
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
//         int arr[6];
//         //arr and &arr are same/
//         cout<<&arr<<"&arr"<<endl;
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
//         int n;
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
//                 cout<<"Element found at index "<<i<<endl;
//                 break;
//         }
//         }
//         cout<<"Element not found"<<endl;
//     }

// int main(){
//     int n;
//     int arr[n];
//     cout<<"Enter the size of array: "<<endl;
//     for(int i=0;i<=n-1;i++){
//             cin>>arr[i];
//         }

//         int x;
//         cout<<"Enter the element want to found: "<<endl;
//         cin>>x;

//         for(int i=0;i<=n-1;i++){
//                 if(arr[i]==x){
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
//             cin>>arr[i];
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

// TODO: TO FIND THE  NUMBER OF ELEMENTS IN ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={34,34,24,345,456,657,56,7,432,35,345,345,423,2,5,345,456,68,67,9,565,34};
//     cout<<(sizeof(arr))<<endl; // size of entire array
//     cout<<sizeof(arr[0])<<endl;  // size of one element in the array
//     cout<<(sizeof(arr)/sizeof(arr[0])); // size of array in terms of number of elements
//     return 0;
// }

//* C++ Assignments | Arrays - 1  | Week 5
// TODO: Q1.Calculate the product of all the elements in the given array.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,p=1;
//     cout<<"n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         p=p*(arr[i]);

//     }
//     cout<<p<<endl;
// }
// TODO: Q2.Find the second largest element in the given Array in one pass.

// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//     int arr[9]={21,3,9567,65,67,76,878,4324,34};
//     int max=arr[0],smax=arr[0];
//     for(int i=0;i<=8;i++){
//         if(arr[i]>max){
//             smax=max;
//             max=arr[i];
//         }

//         else if (arr[i]>smax && arr[i]!=max){
//             smax=arr[i];
//         }

//     }
//     cout<<smax;
// }

// TODO: Q3.Find the minimum value out of all elements in the array.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int min;
//     int arr[10]={34,6,8,4,45,8,86,-43,534,-6};
//     for(int i=0;i<10;i++){
//         if(min>arr[i]) {
//             min=arr[i];
//         }
//     }
//     cout<<min;
// }

// TODO: Q4.Given an array, predict if the array contains duplicates or not.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {101, 102, 103, 104, 102};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bool isDouble=false;
//     int target ;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 isDouble=true;
//                 cout<<arr[i]<<endl;
//                 break;
//             }
//         }
//     }
// }

// // TODO: Q5.WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

// TODO: Q6.Predict the output.
// int main()
// {
// int sub[50], i ;
// for ( i = 0 ; i <= 48 ; i++ ) ;
// {
// sub[i] = i ;
// cout<<sub[i]<<endl ;
// }
// return 0;
// }
// // * o/p: 49

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

//     int main(){
//     // accessing the element of array in another function
//     //updation pass by value/reference
//     int arr[5]={1,3,95,62,23};
//     display(arr);
//     change(arr);
//     display(arr);
// }

// void display(int a[],int size){
// // void display(int *a,int size){  arr aur *arr dono same hai
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
//     //! int *ptr=&arr;  //&arr type mismatch with int*.
//     int *ptr=&arr[0];   //Gets address of first element.
//     //! int *ptr=arr[0];  //arr[0] is int, not int*.
// }

// int main(){
//     int arr[]={4,6,8,3,9};
//     int *ptr=arr;
//     //! int *ptr=&arr[0];  //this ptr has becomes addresses the whole array
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
//! capacity is always greater than or equal to size
//! capacity doubles when size becomes equal to capacity
//! capacity halves when size becomes one-fourth of capacity
//! capacity is always in power of 2
//! capacity is the total space allocated to the vector

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
// v.push_back(89);
// cout<<"size: "<<v.size()<<endl; //4
// cout<<"capacity: "<<v.capacity()<<endl; //8
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
// vector<int> v(5); //Intialise vector of size 5
// cout<<v[0]<<endl; //0, as vector is intialised with 0
// ----------------------------
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
// #include <algorithm>
// void change(vector<int> &a)
// { // pass by reference
//     a[0] = 100;
// }
// int main(){
// vector<int>v; //original vector
// v.push_back(92);
// v.push_back(79);
// v.push_back(83);
// v.push_back(49);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" "; //original vector
// }
// cout<<endl;
// change(v); //pass by reference
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";  //changed vector
// }
// cout<<endl;
// }
// TODO: 26_Find_Element_in_Vector
// *Find an element in vector and return its index or -1 if not found.
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
//     int idx=-1;
//     for(int i =0;i<v.size();i++){
//         if(v[i]==x) idx=i;
//     }
// -----------another method---------------
// auto it=find(v.begin(),v.end(),x);
// int idx=it-v.begin();
// if(it==v.end()) idx=-1; //element not found
// ---------------another method-------------
//     cout<<idx;
// }

// TODO: 27_Two sum problem
//  by nested loop
//  if i ,if j ;i+j=target value
//  and i!=j

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
//                 cout<<v[i]<<" + "<<v[j]<<endl;
//                 return 0;
//             }
//         }
//     }
// }

// TODO: 28_WAP to copy the contents of one array into another in the reverse order.
// *Method_1
// vector<int> reverse( const vector<int>& v ){
//     int n=v.size();
//     vector<int> rev(n);
//     for(int i=0;i<n;i++){
//         rev[i]=v[n-i-1];
//     }
//     return rev;
// }
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int> result=reverse(v);
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     reverse(v);
// }

// *Method_2
// void display(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
// vector<int> v1(n);
// for(int i=0;i<v1.size();i++){
//     cin>>v1[i];
// }
// display(v1);
// vector<int> v2(n);
// for(int i=0;i<v2.size();i++){
//     v2[i]=v1[n-i-1];
//     cout<<v2[i]<<" ";
//     }
// }
// TODO: 29_WAP TO REVERSE THE ARRAY WITHOUT USING ANY EXTRA ARRAY.

// void display(vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(43);
//     display(v);
//     cout << endl;
//     // *Method_1 using for lopp
//     // for(int i=0,j=v.size()-1;i<=j;i++,j--){
//     //     int temp=v[i];
//     //     v[i]=v[j];
//     //     v[j]=temp;
//     // }
//     // display(v);
//     // *Method_2 using while loop
//     int i = 0;
//     int j = v.size() - 1;
//     while (i <= j)
//     {
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
//     display(v);
// }

// TODO: 30_reverse part of array

// void display(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     display(v);
//     cout << endl;

//     int i=1;
//     int j=v.size()-3;
//     while(i<=j)
//     {
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     display(v);
// }

// TODO: 31_Rotate the given array ‘a’ by k steps

// void display(vector<int>& v){
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// void reverseWhole(vector<int>& a){

//     int i = 0;
//     int j = a.size() - 1;
//     while (i < j)
//     {
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
// }

// void reverseK(vector<int>& a,int k){

//     int i = 0;
//     int n=a.size();
//     int j=k-1;
//     while (i < j)
//     {
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
// }

// void reverseRemaining(vector<int>& a,int k){

//     int i = k;
//     int j = a.size() -1;
//     while (i < j)
//     {
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
// }

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     display(v);
//     reverseWhole(v);
//     // display(v);
//     reverseK(v,2);
//     // display(v);
//     reverseRemaining(v,2);
//     display(v);
//     cout<<"--------";
    //     reverse(v.begin(), v.end());
//     display(v);
//     reverse(v.begin(), v.begin()+k);
//     display(v);
//     reverse(v.begin()+k, v.end());
//     display(v);
// }

// * METHOD_2

// void display(vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     display(v);
//     cout << endl;

//     int k=2;

//     reverse(v.begin(), v.end());
//     display(v);
//     reverse(v.begin(), v.begin()+k);
//     display(v);
//     reverse(v.begin()+k, v.end());
//     display(v);
// }

// TODO:  Count the number of elements strictly greater than x.

// int main(){
//     int count =0,x=25;
//     int arr[5]={2,45,87,23,12};
//     for(int i=0;i<=5;i++){
//         if(arr[i]>x){
//         count++;
//         }
//     }
//     cout<<count;
// }

// TODO: WAP to find the largest three elements in the array.

// int main(){
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int a=arr[0];
//     for (int i=0;i<9;i++){
//         if(arr[i]>a){
//             a=arr[i];
//         }
//     }
//     int b=arr[0];
//     for(int i = 0;i<9;i++){
//         if (arr[i]>b && arr[i]!=a){
//             b=arr[i];
//         }
//     }
//     int c=arr[0];
//     for(int i=0;i<9;i++){
//         if (arr[i]!=a && arr[i]!=b && arr[i]>c){
//             c=arr[i];
//         }
//     }
//     cout<<c<<endl;
//     cout<<b<<endl;
//     cout<<a;
// }

// TODO:Check if the given array is ced or not

// int main(){
//     int arr[9]={23,34,45,65,78,98,343,723,943};
//     bool isSorted=true;
//     for(int i=0;i<8;i++){
//         if(arr[i]>arr[i+1]){
//             isSorted=false;
//             break;
//         }
//     }
//     if(isSorted){
//     cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }
// }

// TODO: Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

// int main(){
//     int sum_e=0,sum_o=0;
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<10;i++){
//         if(i%2==0){
//            sum_e+=arr[i];
//         }
//         else{
//             sum_o+=arr[i];
//         }
        
//     }
//     int diff=sum_e-sum_o;
//     cout<<diff;
// }

// TODO: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

// int main(){
//     int sum_e=0,sum_o=0;
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<10;i++){
//         if(i%2==0){
//            arr[i]+=10;
//         }
//         else{
//             arr[i]*=2;
//         }
//         cout<<arr[i]<<" ";
//     }
// }
// o/p=11 4 13 8 15 12 17 16 19 20 

// TODO: Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

// int main(){
//     int arr[9]={21,34,56,6,12,56,21,34,12};
//     sort(arr,arr+9);
//     for(int i=0;i<8;i+=2){
//             if(arr[i]!=arr[i+1]){
//                 cout<<arr[i];
//                 break;
//             }
//     }
// }

// TODO: If an array arr contains n elements, then check if the given array is a palindrome or not .4

// int main(){
//     int arr[5]={1,2,3,2,1};
//     bool isPalindrome=true;
//     int n=5;
//     for(int i=0,j=n-1;i<=j;i++,j--){
//         if(arr[i]!=arr[j]){
//             isPalindrome=false;
//             break;
//         }
//     }
//     if(isPalindrome){
//         cout<<"Array is palindrome"<<endl;
//     }
//     else{
//         cout<<"Array is not palindrome"<<endl;
//     }
// }


// TODO: Sort zero and one in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={0,1,0,1,0,1,0,1,0,1};
//     int n=10;
//     int count0=0,count1=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         else{
//             count1++;
//         }
//     }
//         for(int i=0;i<n;i++){
//             if(i<count0) {
//                 arr[i]=0;
//             }
//             else{
//                 arr[i]=1;
//             }
//         cout<<arr[i]<<" ";
//     }
//     //*method-2
//     cout<<endl;
//     for(int i=0;i<10;i++){
//         for(int j=0;j<9;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
            
//         }
//     }
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }

//* METHOD-3
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={0,1,0,1,0,1,0,1,0,1};
//     int n=10;
//     int i=0,j=n-1;
//     while(i<j){
//         if(arr[i]==0){
//             i++;
//         }
//         if (arr[j]==1){
//             j--;   
//         }
//         else {
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     for(int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }


// TODO: Ques : Move all negative numbers to beginning and positive to end with constant extra space.
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// // * METHOD-1
// void moveNegatives(vector<int> &v){
//     int i=0;
//     int j=v.size()-1;
//     while(i<=j){
//         if(v[i]<0){
//             i++;
//         }
//         else if(v[j]>=0){
//             j--;
//         }
//         else{
//             swap(v[i],v[j]);
//             i++;
//             j--;
//         }
//     }
// }
// // * METHOD-2

// void moveNegatives(vector<int> &v){
//     int i=0;
//     for(int j=0;j<v.size();j++){
//         if(v[j]<0){
//             swap(v[i],v[j]);
//             i++;
//         }
//     }
// }
// // * METHOD-3

// void moveNegatives(vector<int> &v){
//     sort(v.begin(),v.end());
// }
// int main(){
//     vector<int> v;
//     v.push_back(32);
//     v.push_back(-34);
//     v.push_back(92);
//     v.push_back(-85);
//     v.push_back(32);
//     v.push_back(-23);
//     v.push_back(876);
//     display(v);
//     moveNegatives(v);
//     cout<<endl;
//     display(v);
//     return 0;
// }

// TODO: TWO SUM USING TWO POINTER APPROACH



// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// void twoSum(vector<int> &v,int target){
//     int i=0;
//     for(int j=0;j<v.size()-1;j++){
//         if(v[i]+v[j]==target){
//             cout<<"("<<i<<","<<j<<")"<<endl;
//             cout<<v[i]<<" + "<<v[j]<<" = "<<target<<endl;
//             return;
//             i++;
//         }
//     }
//     cout<<"No such elements found"<<endl;

// }

// int main(){
//     vector<int> v;
//     v.push_back(32);
//     v.push_back(-34);
//     v.push_back(2);
//     v.push_back(-85);
//     v.push_back(7);
//     v.push_back(-23);
//     v.push_back(876);
//     display(v);
//     // moveNegatives(v);
//     twoSum(v,9);
//     cout<<endl;
//     display(v);
//     return 0;
// }


// TODO: SORT 0,1,2 USING DUTCH  NATIONAL FLAG ALGORITHM  || LEETCODE-75
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// void dnf(vector <int> &v){
//     int low=0;
//     int mid=0;
//     int high=v.size()-1;

//     while(mid<=high){
//         if(v[mid]==0){
//         swap(v[low],v[mid]);
//         low++;
//         mid++;
//         }
//         else if(v[mid]==1){
//             mid++;
//         }
//         else if(v[mid]==2){
//             swap(v[mid],v[high]);
//             high--;
//         }
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(2);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     display(v);
//     dnf(v);
//     display(v);
// }

// TODO: MERGE TWO SORTED ARRAY--incomplete

// * USING THREE POINTERS
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void merge (vector <int>& v1,vector <int>& v2,vector<int> &v3){
//     int i=0,j=0;
//     while(i<v1.size() && j<v2.size()){
//         if(v1[i]<v2[j]){
//             v3.push_back(v1[i]);
//             i++;
//         }
//         else {
//             v3.push_back(v2[j]);
//             j++;
//         }
//     }
//     while(i<v1.size()){
//         v3.push_back(v1[i]);
//         i++;
//     }
//     while(j<v2.size()){
//         v3.push_back(v2[j]);
//         j++;
//     }
//     for(int x:v3){
//         cout<<x<<" ";
//     }
// }
// int main(){
//     vector <int> v1={1,4,5,8};
//     vector <int> v2={2,3,6,7,10,12};
//     vector<int> v3;
//     merge(v1,v2,v3);
// }

// TODO: NEXT PERMUTATION
