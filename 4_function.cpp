// TODO: Multiplication_Function

// #include<iostream>
// using namespace std;
// int multiply(int x, int y){
//     return x*y; 
// }
// int main(){
//     int result=multiply(2,5);
//     cout<<"multiplication of this is "<<result<<endl;
// }



// TODO: Star_Pattern_Program
// #include<iostream>
// using namespace std;
// int
// star(int x){
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
//     int main(){
//         star(2);
//         cout<<endl;
//         star(3);
//         cout<<endl;
//         star(4);
//         cout<<endl;
// }

// TODO: Sum_Function_Program
// #include<iostream>
// using namespace std;
// int sum(int x, int y){
//     return x+y;
// }
// int main(){
//     // int result=sum(4,5);
//     // cout<<result;
//     cout<<sum(12,13);
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"x:"; 
//     cin>>x;
//     cout<<"y:"; 
//     cin>>y;
//     cout<<"min:"<<min(x,y)<<endl;  //inbuilt function
//     cout<<"max:"<<max(x,y)<<endl;  //inbuilt function
//     cout<<"power:"<<pow(x,y)<<endl; //by default pow fn return double value
//     cout<<"square root:"<<sqrt(9)<<endl; //by default sqrt fn return double value
// }



// TODO: Factorial_function

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//         for(int i=2;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }

// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<fact(n);
// }


// TODO:  permutation_combination_function(ncr)

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int nfact = 1;
//     for(int i=2;i<=n;i++){
//         nfact*=i;
//     }
//     int rfact=1;
//     for(int i=2;i<=r;i++){
//         rfact*=i;
//     }
//     int nrfact=1;
//     for(int i=2;i<=n-r;i++){
//     nrfact*=i;
//     }
//     int ncr=nfact/(nrfact*rfact);
//     cout<<ncr;
// }


//// M-2
// TODO: Calculate ( nCr) and(nPr) using factorials for given (n) and(r).

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int i=2;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }

// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int nfact=fact(n);
//     int rfact=fact(r);
//     int nrfact=fact(n-r);
//     int ncr=nfact/(rfact*nrfact);
//     int npr=nfact/nrfact;
//     cout<<ncr<<endl;
//     cout<<npr<<endl;
// }




// TODO: Combination and Permutation Calculator



//TODO: Calculate 
// #include<bits/stdc++.h>
// // #include<iostream>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int i=2;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }
// int combination(int n, int r){
//     int ncr=fact(n)/(fact(n-r)*fact(r));
//     return ncr;
// }
// int permutation(int n,int r){
//     int npr=fact(n)/fact(n-r);
// }
// int main(){
//     int n,r;
//     cout<<"Enter n:";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     int ncr=combination(n,r);
//     int npr=permutation(n,r);
//     cout<<"Combination: "<<ncr<<endl;

//     cout<<"Permutation: "<<npr<<endl;
// }





// TODO: pascal triangle
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    int ncr=fact(n)/(fact(n-r)*fact(r));
    return ncr;
}
int main(){
    int n;
    int i;
    cout<<"n:";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}


// TODO to illustrate usage of Global Variables
// #include <iostream>
// using namespace std;

// // Global variable declaration
// int global = 5;

// // Another global variable
// int global1 = 15;

// // Function to display values
// void display() {
//     // Local variable (only accessible within this function)
//     int local = 15;

//     // Accessing global and local variables
//     cout << global << " " << global1 << " " << local << endl;
// }

// // Main function
// int main() {
//     // First function call (prints global = 5, global1 = 15, local = 15)
//     display();

//     // Changing the value of global variable
//     global = 10;

//     // Second function call (prints updated global = 10, global1 = 15, local = 15)
//     display();

//     // Accessing global1 from main (allowed, since it's global)
//     cout << global1 << endl;

//     // Trying to access 'local' here would cause an error because it's local to 'display()'
//     // cout << local; // ❌ Error: 'local' is not declared in this scope

//     return 0;
// }

// TODO: default value argument

// #include<iostream>
// using namespace std;
// void fun(int x=8,float y=3.1){
//     cout<<x<<" "<<y<<endl;
// }
// int main(){
//     fun(3.4); //x = 3.4 → gets converted to int → x = 3
//              //y not passed → uses default y = 3.1
// }

// TODO: WAP to compute the greatest common divisor(GCD)

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"n: "<<"m: "<<endl;
//     cin>>n>>m;
//     cout<<"GCD is: ";
//     for(int i=1;i<=min(n,m);i++){
//         if(n%i==0 & m%i==0){}
//             cout<<i<<" ";
//         }
//     }
// }

// TODO: WAP to compute using the function for greatest common divisor(GCD)





// #include<iostream>
// using namespace std;
// int hcf(int m,int n){
//     int gcd=1;
//     for(int i=1;i<=min(n,m);i++){
//         if(n%i==0 & m%i==0){
//             gcd=i;
//         }
//     }
//     return gcd;
//     }
//     int main(){
//     int m,n;
//     cout<<"n: "<<"m: "<<endl;
//     cin>>n>>m;
//     cout<<hcf(m,n)<<endl;
//     }




// TODO: swap b/w two no.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // x=5;
//     // x=x*6;
//     for(int i=1;i<=n;i++){
//         i%5==0;
//         cout<<i<<endl;
//     }
//     // cout<<x<<endl;
// }