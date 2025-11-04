// TODO: Write a program to display a Geometric Progression (GP): 1, 2, 4, 8, 16, 32,... up to 'n' terms. 
// Take 'n' as user input.

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout <<"n: ";
//     cin >> n;
//     int a = 1;
//     for (int i = 0; i < n; i++) {
//         cout<<a<<endl;
//         a*= 2;
//     }
//     return 0;
// }


// TODO: Write a program to display an Arithmetic Progression (AP): 100, 97, 94,... 

// Continue until all positive terms are displayed. Ensure clear logic and comments.


// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=100;
//     for(i;i>0;i--){
//         cout<<i<<endl;
//         i=i-2;
//     }
// }




// TODO: Implement another method to display the AP sequence using a 'for' loop.  Start from 100 and decrement by 3 until reaching a value less than or equal to 34.

// #include<iostream>
// using namespace std;
// int main() {
//     int i;
//     for (i=100; i >= 34; i -= 3) { 
//         cout << i << endl;
//     }
//     return 0;
// }




// TODO: Explore the 'while' loop by creating:

// TODO:1. An infinite loop (for testing) — print numbers starting from 1. 

// #include<iostream>
// using namespace std;
// int main() {
// int x=1;
// while (x>0){
//     cout<<x<<endl;
//     x=x+1;
// }
// }

/* 2. A counter-controlled loop — print numbers from 0 to 999. */

// #include<iostream>
// using namespace std;
// int main(){
//     int x=0;
//     while (x<1000){
//         cout<<x<<endl;
//         x=x+1;
//     }
//     return 0;
// }

// TODO: 3. A formatted output loop — print numbers from 0 to 9999, padded with leading zeros (e.g., 0000, 0001,...).



// #include <iostream>
// using namespace std;
// int main() {
//     int x = 0;
//     while (x < 10000) {
//         if (x < 10) {
//             cout << "000" << x << endl; 
//         }
//         else if (x < 100) {
//             cout << "00" << x << endl;  
//         }
//         else if(x<1000){
//             cout<<"0"<<x<<endl;
//         }
//         else {
//             cout<<x<<endl;   
//         }
//         x = x + 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
    //     int x=1;
//     for(int x;x<10000;x++){
    //         cout<<x<<endl;
    //         x=x+1;
//     }
//     return 0;
// }

// TODO: Add user input to control the range of loops — ask for start, end, and increment values.


#include <iostream>
using namespace std;
int main() {
    int x = 0;
    while (x < 10000) {
        string output = to_string(x);  // Convert x to a string
        while (output.length() < 4) {  // Add leading zeros until the length is 4
            output = '0' + output;
        }
        cout << output << endl;        // Print the formatted string
        x = x + 1;
    }
    return 0;
}

// TODO:now using for loop

// #include<iostream>
// using namespace std;
// int main(){

//     int start, end , increment;
//     cout<<"Enter start, end and increment values";
//     cin>>start>>end>>increment;

//     for(int i=start; i<=end; i+=increment){
//         string output = to_string(i);
//         while(output.length() < 5){
//             cout<< '0' + output;
//         }
//         cout<<output<<endl;
//     }

// }