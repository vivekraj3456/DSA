// TODO: 1 Ques : Take positive integer input and tell if it is even or odd

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n % 2 ==0){
//         cout<<"Number is even";
//     }
    // if (n%2!=0){
    //     cout<<"Number is Odd";
    // }
    // else{
//         cout<<"Number is odd";
//     }
//     return 0;
// }

// TODO: 2 Ques : Given an integer: Print the absolute value of that integer.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if ( n >=0){
//         cout<<n;
//     }
//     else{
        // cout<<(n+(2*(-n)))<<endl;
//         cout<<-n;
//     }
//     return 0;
// }




// TODO: 3 Ques : If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.




// #include<iostream>
// using namespace std;
// int main(){
//     int Cost_price,Selling_price;
//     cout<<"Enter the cost price: ";
//     cin>>Cost_price;
//     cout<<"Enter the selling price: ";
//     cin>>Selling_price;
//     if(Selling_price>Cost_price){
//         cout<<"profit of: "<<"Rs"<<Selling_price-Cost_price<<endl;
//     }
//     else{
//         cout<<"Lost of: "<<"Rs "<<Cost_price-Selling_price<<endl;
//     }
//     return 0;
// }

//METHOD-2


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




// TODO: 4 Ques : Take positive integer input and tell if it is a three digit number or not.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     if(n >= 100 & n <= 999){
//         cout<<"Three digit number"<<endl;
//     }
//     else{
//         cout<<"Not a three digit number"<<endl;
//     }
//     return 0;
// }




// TODO: 5 Ques : Take positive integer input and tell if it is divisible by 5 and 3.


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     if ( n % 5 == 0 || n % 3 == 0){
//         cout<<"Divisible by 5 and 3"<<endl;
//     }
//     else{
//         cout<<"Not divisible by 5 and 3";
//     }
//     return 0;
// }


// TODO: 6 Ques : Take 3 positive integers input and print the greatest of them.




// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"x: ";
//     cin>>x;
//     cout<<"y: ";
//     cin>>y;
//     cout<<"z: "; 
//     cin>>z;
//     if (x>y & x>z){
//         cout<<"x is the greatest"<<endl;
//     }
//     else if ( y>x & y>z){
//         cout<<"y is the greatest"<<endl;
//     }
//     else{
//         cout<<"z is the greatest"<<endl;
//     }
// }




// TODO: 7 Ques : Write a program to check whether a character is an alphabet or not.






// #include<iostream>
// using namespace std;
// int main(){
//     char n;
//     cout<<"Enter a character: ";
//     cin>>n;
//     if (isalpha(n)){
//         cout<<"Character is an alphabet"<<endl;
//     }
//     else{
//         cout<<"Character is not an alphabet"<<endl;
//     }
//     return 0;
// }




// TODO: 8 Ques : Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "n: ";
//     cin >> n;

//     if (n % 5 == 0 & n % 3 == 0 & n % 15 != 0 ) {
//         cout << "Divisible by 5 and 3 but not 15" << endl;
//     } else {
//         cout <<"Not matching condition"<< endl;
//     }
//     return 0;
// }

// Method-2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     if ( n % 5 == 0 || n % 3 == 0){
//         if (n % 15 != 0){
//             cout<<n<<" is divisible by 5 or 3 but not 15";
//         }
//         else{
//             cout<<n<<" is divisible by 5 or 3 but also 15";
//         }
//     }
//     else{
//         cout<<"not divisible"<<endl;
//     } 
// }


// TODO: 9 Ques : Take input marks of a student and print the Grade according to marks:
// 1)91-100 Excellent
// 2)81-90 very Good
// 3)71-80 Good
// 4)61-70 Can do better
// 5)51-60 Average
// 6)40-50 Below Average
// 7)Fail

/*Method-1*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     if (n>=91 & n<=100){
//         cout<<"Excellent"<<endl;
//     }
//     else if (n>=81 & n<=90){
//         cout<<"Good"<<endl;
//     }
//     else if (n>=71 & n<=80){
//         cout<<"Can do better"<<endl;
//     }
//     else if (n>=51 & n<=60){
//         cout<<"Average"<<endl;
//     }
//     else if (n>=40 & n<=50){
//         cout<<"Below Average"<<endl;
//     }
//     else{
//         cout<<"Fail"<<endl;
//     }
//     return 0;
// }

//Method-2


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n: ";
//     cin>>n;
//     if(n>=91){
//         cout<<"Excellent";
//     }
//     else{
//         if(n>=81){
//             cout<<"Very good";
//         }
//         else{
//             if(n>=71){
//                 cout<<"Good";
//             }
//             else{
//                 if(n>=61){
//                     cout<<"Can do better";
//                 }
//                 else{
//                     if(n>=51){
//                         cout<<"Average";
//                     }
//                     else{
//                         if(n>=41){
//                             cout<<"Below Average";
//                         }
//                         else{
//                             cout<<"Fail";
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }




// TODO: 10 Ques : Take 3 numbers input and tell if they can be the sides of a triangle.


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"a: ";
//     cin>>a;
//     cout<<"b: ";
//     cin>>b;
//     cout<<"c: ";
//     cin>>c;
    // if ((a+b)>=c){
    //     if((b+c)>a){
    //         if((a+c)>b){
    //             cout<<"This is triangle.";
    //         }
    //     }
    // }
//     if((a+b>c)&&(b+c>a)&&(c+a>b)){
//         cout<<"Th5is is triangle";
//     }
//     else{
//         cout<<"This is not triangle.";
//     }
//     return 0;
// }


// TODO: Q11. WAP to check if a number is prime or not.

////false approach
// #include<iostream>
// using namespace std;
// int main(){
//     int i=2,j=1,n;
//     cout<<"n: ";
//     cin>>n;
//     for(i;i<=n;i++){
//         for(j;j<=i;j++){
//             if(j%i!=0){
//             }
//         }
//         cout<<i<<endl;
//     }
// }



// TODO: 12 WAP to print odd numbers from 1 to 100.

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     for(i;i<=100;i++){
//         if(i%2==0){
//             continue;
//         }
//         else{
//             cout<<i<<endl;
//         }  
        
//     }
//     return 0;
// }

// TODO: 13 Ques : WAP to count digits of a given number.
// #include<iostream>
// using namespace std;
// //// int main(){
//     int n,count=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     while(n!=0){
//         n=n/10;
//         count++;
//         }
//         cout<<"No. of digits: "<<count;

// }


// #include<iostream>
// using namespace std;
// int main(){
// int x;
// cin>>x;
// if(x % 2== 0) cout<<"even";
// else cout<<"Odd";
// condition ? true : false 
// (x%2==0) ? cout<<"even" : cout<<"odd";
// }


// TODO: 14 If the marks are greater than 33 print the result as pass otherwise fail without using if-else statement.


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"x: ";
//     cin>>x;
//     (x>=33) ? cout<<"pass" : cout<<"fail";
// } 


// TODO: Qs15.To input week number(1-7) and print day of week name using switch case.

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter day no.: ";
//     cin>>x;
//     switch(x){
//         case 1:
//             cout<<"monday"<<endl;
//             break;
//         case 2:
//             cout<<"Tuesday"<<endl;
//             break;
//         case 3:
//             cout<<"Wednesday"<<endl;
//             break;
//         case 4:
//             cout<<"Thursday"<<endl;
//             break;
//         case 5:
//             cout<<"Friday"<<endl;
//             break;
//         case 6:
//             cout<<"saturday"<<endl;
//             break;
//         case 7:
//             cout<<"sunday"<<endl;
//             break;
//         default:
//             cout<<"Invalid number";
//     }
// }




// TODO: 16 WAP To input month number and print total number of days in month using switch case.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter month no.: ";
//     cin>>x;
//     switch(x){
//         case 1:
//             cout<<"31"<<endl;
//         break;
//         case 2:
//             cout<<"28"<<endl;
//         break;
//         case 3:
//             cout<<"31"<<endl;
//         break;
//         case 4:
//             cout<<"30"<<endl;
//         break;
//         case 5:
//             cout<<"31"<<endl;
//         break;
//         case 6:
//             cout<<"30"<<endl;
//         break;
//         case 7:
//             cout<<"31"<<endl;
//         break;
//         case 8:
//             cout<<"31"<<endl;
//         break;
//         case 9:
//             cout<<"30"<<endl;
//         break;
//         case 10:
//             cout<<"31"<<endl;
//         break;
//         case 11:
//             cout<<"30"<<endl;
//         break;
//         case 12:
//             cout<<"31"<<endl;
//         break;
//         default:
//             cout<<"Invalid input";
//     }
// }

// TODO: 17 WAP to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. The calculator should input two numbers and an operator from user.
// #include<iostream>
// using namespace std;
// int main(){
//    int a,b;
//    char op;
//    cout<<"Enter op: ";
//    cin>>a>>op>>b;
//     }


