// TODO:print '*' rectangle from user input.




// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,m;
//     cout<<"no. of rows: ";
//     cin>>n;
//     cout<<"no. of column: ";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// TODO: Print a square pattern with numbers from 1 to n.
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,m;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


// TODO: Print a right-angled triangle pattern with '*' based on user input for rows.
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,m;
//     cout<<"no. of rows: ";
//     cin>>n;
//     // cout<<"no. of column :";
//     // cin>>m; 
//     for(int i=1;i<=n;i++){
//             // cout<<i;
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// }

// TODO: Print a reverse right-angled triangle pattern with '*' based on user input for rows.

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,m;
//     cout<<"no. of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// }


// TODO: Print a right-angled triangle pattern with numbers from 1 to i for each row based on user input for rows.


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"no. of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//     cout<<endl;
//     }
// }

// o/p
// 1
// 12
// 123
// 1234
// 12345



// TODO: Print a right-angled triangle pattern with odd numbers starting from 1 in each row
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,m;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int m=1;
//         for(int j=1;j<=i;j++){
//             cout<<m;
//             m=m+2;
//         }
//     cout<<endl;
//     }
// }




// TODO: Print a right-angled triangle pattern with odd numbers, starting from 1,
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,m;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int m=1;
//         for(int j=1;j<=i;j++){
//             cout<<m;
//             m=m+2;
//         }
//     cout<<endl;
//     }
// }




// TODO: Print a pattern of a cross using '*' based on user input for size n.


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"n: ";
//     cin>>n;
//     int mid = n/2 +1;
//     for(int i=1;i<=n;i++){
//         for(int j = 1;j<=n;j++){
//             if(i==mid||j==mid){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//             cout<<endl;
//     }
// } 



// TODO: Print a pattern of an 'X' using '*' based on user input for size n.


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"n: ";
//     cin>>n;
//     int mid = n/2 +1;
//     for(int i=1;i<=n;i++){
//         for(int j = 1;j<=n;j++){
//             if(i==j||i==n-j+1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// } 






// TODO: Print a right-angled triangle pattern with increasing numbers, where the numbers are printed sequentially across rows.


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"n: ";
//     cin>>n;
//     int k=1;
//     for(int i = 1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<k;
//             k+=1;
//         }
//     cout<<endl;
//     }
//     return 0;
// }





// TODO: Print a right-aligned triangle pattern with '*' based on user input for rows.

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"n: ";
//     cin>>n;
//     int k=1;
//     for(int i = 1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//            cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// }


//     *
//    **
//   ***
//  ****
// ******


// TODO: Print a right-aligned triangle pattern with numbers, where numbers increase from 1 to i in each row.



// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"n: ";
//     cin>>n;
//     int k=1;
//     for(int i = 1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//         cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//     cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int n=10;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             cout<<" "<<endl;
//         }
        
//         cout<<endl;
//     }
// }




//     1
//    12
//   123
//  1234
// 12345


// TODO: Print a pyramid pattern of '*' with n rows.



// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"n:";
//     cin>>n;
//     for(int i=1;i<+n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(j=1;j<=2*i-1;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// TODO: Print a pyramid pattern with stars ('*') based on user input for rows, where the number of stars increases by 2 in each row.
#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"i:";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
            }
            for(int j=1;j<=nst;j++){
                cout<<"*";
                }
                nsp--;
                nst+=2;
                cout<<endl;
                }






// TODO: Print a pyramid pattern with numbers increasing and then decreasing.

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"n:";
//     cin>>n;
//     for(int i=1;i<n;i++){
//         for(k=1;k<=n-i;k++){
//             cout<<" ";
//         }
//         for(j=1;j<=i;j++){
//         cout<<j;
//         }
//         for(int l=i-1;l>=1;l--){
//             cout<<l;
//         }
//         cout<<endl;
//     }
// }




