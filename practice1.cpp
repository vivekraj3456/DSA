// TODO: Ques : If cost price and selling price of an item is input through the keyboard, 
// TODO: write a program to determine whether the seller has made profit or incurred loss. 
// TODO: Also determine how much profit he made or loss he incurred.
// #include<iostream>
// using namespace std;
// int main(){

//     int cp,sp;
//     cout<<"Enter cp: ";
//     cin>>cp;
//     cout<<"Enter sp: ";
//     cin>>sp;


//     if(sp>cp){
//         int profit=sp-cp;
//         cout<<"profit: "<<profit<<endl;
// }

//     else if (cp>sp){
//         int loss=cp-sp;
//         cout<<"loss: "<<loss<<endl;
//     }

//     else{
//         cout<<"No profit no loss"<<endl;
//     }

//     return 0;
// }


// 1000/1000=1`
// 100/1000=0.1
// if (n/1000){
//     if(n>=0.1 || n<=1){
//         cout<<"three digit number"<<endl;
//     }
//     else{}
    
// }



// TODO: Print a right-angled triangle pattern with odd numbers starting from 1 in each row

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     int k=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<k;
//             k+=1;
//         }
//         cout<<endl;
//     }
// }

// TODO: Print a right-aligned triangle pattern with '*' based on user input for rows.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
// }




// TODO: Print a pyramid pattern of '*' with n rows.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//    8
//   888
//  88888


// TODO: function
// #include<iostream>
// using namespace std;
// int multiply(int x,int y){
//     return x*y;
// }
// int main(){
//     int x,y;
//     cout<<"x: ";
//     cin>>x;
//     cout<<"y: ";
//     cin>>y;
//     int result=multiply(x,y);
//     cout<<result<<endl;
// }

// TODO: Star_Pattern_Program


// #include<iostream>
// using namespace std;
// void star(int n){
//     // int n;
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     star(2);
//     star(3);
// }


// TODO: SUM-FN
// #include<iostream>
// using namespace std;
// int sum(int x, int y){
//     return x+y;
// }
// int main(){
//     int x,y;
//     cout<<"x: ";
//     cin>>x;
//     cout<<"y: ";
//     cin>>y;
//     cout<<"sum: "<<sum(x,y);
//     cout<<"sum: "<<sum(x,y);
    
// }

// TODO: Factorial

// #include<iostream>
// using namespace std;
//     int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     fact(7);
// }

// TODO:  permutation_combination_function(ncr)


// #include<iostream>
// using namespace std;
// int fact(int j){
//     int f=1;
//     for(int i=1;i<=j;i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){
//     int n,r;
//     cout<<"n :";
//     cin>>n;
//     cout<<"r :";
//     cin>>r;
//     int ncr=fact(n)/(fact(n-r)*fact(r));
//     int npr=fact(n)/fact(n-r);
//     cout<<ncr<<endl;
//     cout<<npr;
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int fact(int j){
//     int f=1;
//     for(int i=1;i<=j;i++){
//         f*=i;
//     }
//     return f;
// }
//     int combination(int n,int r){
//         int ncr=fact(n)/(fact(n-r)*fact(r));
//         return ncr;
//     }
//     int permutation (int n,int r){
//         int npr=fact(n)/fact(n-r);
//         return npr;
//     }
// int main(){
//     int n,r;
//     cout<<"n :";
//     cin>>n;
//     cout<<"r :";
//     cin>>r;
//     int ncr= combination(n,r);
//     int npr= permutation(n,r);
//     cout<<ncr<<endl;
//     cout<<npr<<endl;
//     return 0;
// }



// TODO: WAP to compute the greatest common divisor(GCD)

// #include<iostream>
// using namespace std;
// int p;
// int gcd(int a,int b){
//     while(b!=0){
//         int r=a%b;
//         a=b;
//         b=r;
//     }
//     return a;
// }
// int main(){
//     int a,b;
//     cout<<"a :";
//     cin>>a;
//     cout<<"b :";
//     cin>>b;
//     int result=gcd(a,b);
//     cout<<result<<endl;
// }

// TODO: Array size 
// #include<iostream> 
// using namespace std;
// int main(){
//     int arr[]={34,34,24,345,456,657,56,7,432,35,345,345,423,2,5,345,456,68,67,9,565,34}; 
//     cout<<(sizeof(arr))<<endl; // size of entire array
//     cout<<sizeof(arr[0]);  // size of one element in the array
//     cout<<(sizeof(arr)/sizeof(arr[0])); // size of array in terms of number of elements
// }



