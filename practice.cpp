#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
// #include<math>
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



// TODO: HASHING

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
    
//     // int hash[26]={0}; //hash array to store the frequency of each character in the string. It is initialized to 0 for all characters. The index of the hash array corresponds to the character's position in the alphabet (0 for 'a', 1 for 'b', ..., 25 for 'z').
//     int hash[256]={0}; //hash array to store the frequency of each character in the string. It is initialized to 0 for all characters. The index of the hash array corresponds to the ASCII value of the character (0 for null character, 1 for start of heading, ..., 255 for extended ASCII characters).
//     for(int i =0;i<s.size();i++){
//         hash[s[i]-'a']++; // It is used to increment the frequency count of the character s[i] in the hash array. The expression s[i]-'a' calculates the index in the hash array corresponding to the character s[i]. For example, if s[i] is 'a', then s[i]-'a' will be 0, and if s[i] is 'b', then s[i]-'a' will be 1, and so on. This way, we can keep track of how many times each character appears in the string.
//     }
// // q->query for frequency of a character in the string
//     int q;
//     cin>>q;
//     while(q--){
//         char ch;
//         cin>>ch;
//         // cout<<hash[ch-'a']<<endl; // It is used to print the frequency count of the character ch in the string. The expression ch-'a' calculates the index in the hash array corresponding to the character ch, and hash[ch-'a'] gives us the frequency count of that character. For example, if ch is 'a', then ch-'a' will be 0, and hash[0] will give us the count of 'a' in the string. If ch is 'b', then ch-'a' will be 1, and hash[1] will give us the count of 'b' in the string, and so on.
//         cout<<hash[ch]<<endl; // I      It is used to print the frequency count of the character ch in the string. The expression hash[ch] gives us the frequency count of the character ch directly, since the index of the hash array corresponds to the ASCII value of the character. For example, if ch is 'a', then hash['a'] will give us the count of 'a' in the string. If ch is 'b', then hash['b'] will give us the count of 'b' in the string, and so on. This approach allows us to handle a wider range of characters beyond just lowercase letters.
//     }
//     return 0;
// }

//===========USIGN_HASH=============================
// TODO: HASH_MAP
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mpp[arr[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         cout<<mpp[x]<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     unordered_map<int, int> mpp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         cout<<mpp[x]<<endl;
//     }
// }

int main(){
    vector<int>v1={1,2,3,4,5,6,7,8,9};
    int a=15;
    string s="";
    // vector<int>v2={15};
    s=to_string(v1);
    int num=stoi(s);
    int res=num*a;
    cout<<res<<endl;
}