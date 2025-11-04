#include<iostream>
using namespace std;
// int main(){
    // int n;
    // cout<<"n: ";
    // cin>>n;
    // int a=1;
    // for(int i=0;i<=n;i++){
    //     cout<<a<<endl;
    //     a*=2;
    // }

// TODO: WAP of AP - 100,97,94,..upto all terms which are positive.

// int n; 

// basic way 
// for(int i=100;i<=n;i++){}

// ap formula se n  ka value nikall lenge jo last positve no. ho
// iss qs me ap k=nikal ke switch staemnet ka usse kr lenge ki >0 pe continue aur <0 pe break 
// }


// TODO: RECTANGLE


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// TODO: Print a right-angled triangle pattern with '*' based on user input for rows.



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" ";
//         }
//         cout<<"*"<<endl;
//     }
//     for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<" ";
//     }
//     cout<<"*"<<endl;
//     }
//     return 0;
// }

// TODO: Print a right-angled triangle pattern with '*' based on user input for rows.



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         // for(int j=1;j<=n-i+1;j++){  //for reverse right-angled triangle
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// TODO:  I/P & O/P of array
 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//     cout<<arr[i];
//     }
//     return 0;

// }




// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};

//     // Size of array in bytes
//     cout << "Size of array in bytes: " << sizeof(arr) << endl;

//     // Size of one element
//     cout << "Size of one element: " << sizeof(arr[0]) << endl;

//     // Total number of elements
//     cout << "Total elements: " << sizeof(arr) / sizeof(arr[0]) << endl;

//     // Address of entire array
//     cout << "Address of array: " << arr << endl;

//     // Address of first element (same as above)
//     cout << "Address of first element: " << &arr[0] << endl;

//     return 0;
// }



// TODO: Ques : Calculate the sum of all the elements in the given array.

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[n]={1,2,3,4,5};
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
//     cout << "Size of float: " << sizeof(float) << " bytes" << endl;
//     cout << "Size of double: " << sizeof(double) << " bytes" << endl;
//     cout << "Size of char: " << sizeof(char) << " byte" << endl;

// int age = 21;
// cout << "Age = " << age;

// short year = 2025;
// cout << "Year = " << year;
// long population = 150000;
// cout << "Population = " << population;
// long long stars = 9223372036854775807;
// cout << "Stars = " << stars<<endl;
// long long *ptr = &stars;
// cout << "Stars address: " << ptr << endl; 
// unsigned int marks = 98;
// cout << "Marks = " << marks;

// char grade = 'A';
// cout << "Grade = " << grade;
// float pi = 3.14159;
// cout << "Pi = " << pi;
// double distance = 12345.6789012345;
// cout << "Distance = " << distance;
// long double bigValue = 1.234567890123456789L;
// cout << "BigValue = " << bigValue;
// bool isCodingFun = true;
// cout << "Is coding fun? " << isCodingFun;
// wchar_t letter = L'अ'; // Hindi character
// wcout << "Letter = " << letter;

// }


// TODO: FOR PERMUTATION AND COMBINATION
// #include<iostream>
// using namespace std;

// int fact(int x) {
//     int f = 1;
//     for(int i = 2; i <= x; i++) {
//         f *= i;
//     }
//     return f;
// }
// int permutation(int n, int r) {
//     return fact(n) / fact(n - r);
// }
// int combination(int n, int r) {
//     return fact(n) / (fact(r) * fact(n - r));
// }

// int main() {
//     int n, r;
//     cout << "Enter n and r: ";
//     cin >> n >> r;

//     int npr = permutation(n, r);
//     int ncr = combination(n, r);

//     cout << "nPr = " << npr << endl;
//     cout << "nCr = " << ncr << endl;

//     return 0;
// }



// todo: 