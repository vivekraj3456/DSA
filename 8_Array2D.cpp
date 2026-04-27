#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
// int main(){
    // TODO 1st: INTIALIZATION OF 2D ARRAY
     // 2D array ko initialize karne ke 3 tarike hote hain
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; // 1st tarika jisme hum 2D array ko directly initialize kar dete hain
    // cout<<arr[0][0]<<" "<<arr[1][1]<<" "<<arr[2][2]<<endl;

    // int arr1[3][3]={1,2,3,4,5,6,7,8,9}; // 2nd tarika JISME 1D array ko 2D array me convert kar diya jata hai
    // cout<<arr1[0][0]<<" "<<arr1[1][1]<<" "<<arr1[2][2]<<endl;
    
    // int arr3[][3]={1,2,3,4,5,6,7,8,9}; // 3rd tarika JISME ROWS KI GINATI NAHI DI JATI HAI BUT COLUMNS KI GINATI DI JATI HAI
    // cout<<arr3[0][0]<<" "<<arr3[1][1]<<" "<<arr3[2][2]<<endl;
// }
    // TODO 2nd: TRAVERSING THE 2D-ARRAY
    // int main(){}
//     int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
//     for(int i =0;i<3;i++){  // i is for rows
//         for(int j=0;j<3;j++){ // j is for columns
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// TODO 3rd: Taking 2D array as input from the user
// int main(){
//     int m;
//     cout<<"Enter the no of rows: ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of column";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"O/P:"<<endl;;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// TODO 4th: WAP to store roll number and marks obtained by 4 students side by side in a matrix.
// int main(){
//     int m;
//     cout<<"Enter Roll no: ";
//     cin>>m;
//     int n;
//     cout<<"Enter Marks: ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// TODO 5th: WAP TO FIND THE LARGEST ELEMENT OF A GIVEN A 2D ARRAY OF INTEGERS
// int main(){
//     int arr[3][3]={12,34,56,76,4321,65,54,352,436};
//     int max=arr[0][0];
//     for(int i=0;i<3;i++){
    //         for(int j=0;j<3;j++){
        //             if(max<=arr[i][j]){
            //                 max=arr[i][j];
            //             }
            //         }
            //     }
            //     cout<<max;
            // }
// TODO 6th: WAP TO PRINT SUM OF ALL THE ELEMENTS OF 2D MATRIX
// int main(){
//     int arr[3][3]={12,34,56,76,21,65,54,52,436};
//     int sum=0;
//     for(int i =0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<sum;
// }

// TODO 7th: WAP TO PRINT THE SUM OF TWO MATRICES
// int main(){
//     int arr1[3][3]={1,2,3,4,5,6,7,8,9};
//     int arr2[3][3]={9,8,7,6,5,4,3,2,1};
//     int sum[3][3];
    // // for(int i=0;i<3;i++){
    // //     for(int j=0;j<3;j++){
    // //         sum[i][j]=arr1[i][j]+arr2[i][j];
    // //     }
    // // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
            // // cout<<sum[i][j]<<" ";
            // // cout<<(arr1[i][j]+arr2[i][j])<<" "; //upper wale loop ke need hi nhi hai isme 
            // cout<<(arr2[i][j]+=arr1[i][j])<<" "; // isme arr2 me hi sum store ho jayega aur usko print kar diya jayega

//         }
//         cout<<endl;
//     }
// }
// TODO 8th: WAP TO PRINT THE TRANSPOSE OF A MATRIX ENTERED BY THE USER AND STORE IN A NEW MATRIX
// int main(){
// int arr[3][3]={23,45,67,89,21,34,56,78,90};
// int trans[3][3];
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;
    
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         trans[i][j]=arr[j][i];
//         cout<<trans[i][j]<<" ";
//     }
//     cout<<endl;
// }

// // *METHOD-2
// cout<<endl<<"*method-2*"<<endl<<endl;
// for(int j=0;j<3;j++){
//     for(int i=0;i<3;i++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }

// TODO 9th: WAP TO TRANSFORM THE SQUARE MATRIX
// int main(){
// int arr[3][3]={23,45,67,89,21,34,56,78,90};
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }    
// for(int i=0;i<3;i++){
//     for(int j=i+1;j<3;j++){
//         int temp=arr[i][j];
//         arr[i][j]=arr[j][i];
//         arr[j][i]=temp;
//     }
// }
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }

// TODO 10th: WAP TO PRINT THE MULTIPLICATION OF TWO MATRICES

// int main(){
//     // *input from the user for 2 matrices
//     int m;
//     cout<<"Enter the no of rows of arr1: ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of columns of arr1: ";
//     cin>>n;

//     int p;
//     cout<<"Enter the no of rows of arr2: ";
//     cin>>p;
//     int q;
//     cout<<"Enter the no of columns of arr2: ";
//     cin>>q;
//     // !taking input for 1st matrix
//     int arr1[m][n];
//     for(int i =0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr1[i][j];
//         }
//     }
    
//     int arr2[p][q];
//     // !taking input for 2nd matrix
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cin>>arr2[i][j];
//         }
//     }
//     //resultant matrix
//     int res[m][q];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 res[i][j]=0;
//             }
//         }
//     if(n==p){
//         // !multiplication of 2 matrices
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 for(int k=0;k<n;k++){
//                     res[i][j]+=arr1[i][k]*arr2[k][j];
//                 }
//             }
//         }
//         // !printing the resultant matrix
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 cout<<res[i][j]<<" ";
//             }
//             cout<<endl;
//         }        
//     }
//     else{
//         cout<<"Multiplication not possible";
//         return 0;
//     }
// }

// TODO 11th: WAP TO PRINT THE ZIG-ZAG ORDER OF A MATRIX
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         if(i%2==0){
//             for(int j=0;j<3;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=2;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }
// TODO 12th: WAP TO PRINT THE SPIRAL ORDER OF MATRIX

// int main(){
//     int m;
//     cout<<"Enter the no of rows of arr1: ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of columns of arr1: ";
//     cin>>n;
//     int arr[m][n];
//     for(int i =0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int minr=0,minc=0;
//     int maxr=m-1, maxc=n-1;

//     int total=m*n;
//     int count=0;

//     while(minr<=maxr && minc<=maxc ){
//     //right
//     for(int j=minc;j<=maxc && count<total;j++){
//         cout<<arr[minr][j]<<" ";
//         count++;
//     }
//     minr++;
//     //down
//     for(int i=minr;i<=maxr && count<total;i++){
//         cout<<arr[i][maxc]<<" ";
//         count++;
//     }
//     maxc--;
//     //left
//     for(int j=maxc;j>=minc && count<total;j--){
//         cout<<arr[maxr][j]<<" ";
//         count++;
//     }
//     maxr--;
//     //up
//     for(int i=maxr;i>=minr && count<total;i--){
//         cout<<arr[i][minc]<<" ";
//         count++;
//     }
//     minc++;
//     }
// }
    
// TODO 13th: WAP TO PRINT THE 2D ARRAY IN VECTOR FORM
// int main(){
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
    
//     vector<int> v2;
//     v2.push_back(3);
//     v2.push_back(4);
//     v2.push_back(5);
    
//     vector<int> v3;
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);

//     vector<vector<int>> v;
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);

//     // cout<<v[1][1];
//     //*printing the 2D vector
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// TODO 14th: function to print the 2D vector
// void change(int a[3][3]){
//     a[0][0]=100;
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<arr[0][0]<<endl;
//     change(arr);
//     cout<<arr[0][0];
// }

// TODO 15th: INITIALIZE 2D VECTOR
// int main(){
//     vector<vector<int> > v(3,vector<int>(4,2)); //3 rows and 4 columns and all the elements are initialized to 2
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// // o/p: 
// // 2 2 2 2 
// // 2 2 2 2
// // 2 2 2 2
// TODO 16th: PASCAL'S TRIANGLE

// int main(){
//     string s="leetcode";
//     vector<int> arr(26,0);
//     for(int i =0;i<s.size();i++){
//         char ch=s[i];
//         int ascii=(int)ch;
//         arr[ascii-97]++;
//     }
//     int mx=0;
//     for(int i=0;i<26;i++){
//         if(arr[i]>mx) mx=arr[i];
//     }
//     for(int i=0;i<26;i++){
//         if(arr[i]==mx){
//             int ascii=i+97;
//             char ch=(char)ascii;
//             cout<<ch<<" "<<i<<endl;
//         }
//     }
// }