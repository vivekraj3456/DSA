// data_type *pointer_name;

#include<iostream>
using namespace std;



// TODO: "Memory Address Viewer"
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<&x<<endl<<&y<<endl;
// }

// TODO: "Swap By Value"

// void swapByValue(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
//     a=b;
//     b=a-(b=a)+b;
// }
// int main() {
//     int x,y;
//     cout<<"x:";
//     cin>>x;
//     cout<<"y:";
//     cin>>y;
//     cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
//     swapByValue(x, y);  // Copies of x and y are passed
//     cout << "After swapByValue: x = " << x << ", y = " << y << endl;  
//     return 0;
// }




// TODO: "Swap By Reference"

// void swapByReference(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "Inside swapByReference: a = " << a << ", b = " << b << endl;
// }

// int main() {
//     int x = 10, y = 20;
//     cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
//     swapByReference(x, y);  
//     cout << "After swapByReference: x = " << x << ", y = " << y << endl;  
//     return 0;
// }




// TODO: "Sizeof Data Types and Address" 
// int main(){
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(char)<<endl;
//     cout<<sizeof(bool)<<endl;
//     cout<<sizeof(float)<<endl;
//     char x ='abc';  //0x61ff0c
//     cout<<&x;
// }   



// TODO:  "Memory Address and Variable Values

// int main(){
//     float x=0.5;
//     cout<<&x;  //0x61ff0c  
//     cout<<endl<<x;  
//     int z=5;
//     int y=5;
//     cout<<&z<<endl; //0x61ff0c
//     cout<<&y<<endl;   //0x61ff08
// }

// TODO:  "Dereferencing a Pointer"
// int main() {
//     char x = 'a';  
//     char *p = &x;
//     cout <<*p;  
// }

// TODO: "Pointer Dereferencing and Value Modification"
// int main(){
//     int x = 10;
//     int *p = &x;  //dereference
//     cout<<*p<<endl; //10 
//     x=90;
//     cout<<*p<<endl;  //90
//     *p=6;
//     cout<<x;        //6
// }

// TODO: WAP to calculate sum of two numbers using pointers.

// int main(){
//     int x,y,z;
//     int *p1=&x;
//     cout<<"x "<<"y ";
//     cin>>x>>y;
//     int *p2=&y;
//     z = *p1+*p2;
//     cout<<z;
// }


// void swap(int *x,int*y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int main(){
//     int a=8,b=6;
//     // cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// }



// TODO: "Swap Using Pointers"

// void swap(int *x,int*y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int main(){
//     int a=8,b=6;
//     int *x=&a;
//     int *y=&b;

//     swap(a,b);
//     cout<<"a: "<<a<<" b: "<<b;
// }




// TODO: "Swap By Reference"
// void swap(int &x,int &y){
//     int temp = x;
//     x=y;
//     y=temp;
//     return;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }



// TODO: "Pointer Arithmetic and Address Manipulation"
// int main(){
//     int x=5;
//     x++;
//     cout<<&x<<endl;    //0x61ff08
//     int *p=&x;
//     p=p+1;
//     cout<<p<<endl;    //0x61ff0c
//     p=p+1;
//     cout<<p<<endl;   //0x61ff10   
//     p=p+1;
//     cout<<p;        //0x61ff14
// }

// TODO:  "Pointer Dereferencing, Arithmetic, and Memory Behavior"
// int main(){
//     int x=4;
//     int *ptr=&x;
//     cout<<*ptr<<endl;  //4
//     *ptr+=1;
//     cout<<*ptr<<endl;  //5
//     ptr+=1;
//     cout<<*ptr<<endl;  //6422284
//     *ptr=(*ptr)*5;
//     cout<<*ptr<<endl;  //6422284
// }


// TODO:  Predict the output

// int main(){
// int a= 15;
// int *ptr=&a;
// int b=++*ptr;
// // int b=(*ptr)++;
// cout << a <<" "<<b<<endl;
// }



// TODO: WAP of function to find out the first and last digit of a number without returning anything.

// /*string method*/
// int find_digit(int x){
//     string str=to_string(x);
//     cout<<"First digit is: "<<str[0]<<endl;
//     cout<<"last digit is: "<<str.back()<<endl;
// }
// int main(){
//     int x;
//     cin>>x;
//     find_digit(x);
// }

// pahle no. of digit string se nikalenge fir utne baar loop chalyenge functionme tab  main chalyenege



// #include <iostream>
// #include <string>
// using namespace std;

// void find_digits(int x) {
//     string str = to_string(x);
//     int num_digits = str.length();
//     cout<<num_digits<<endl;
//     for (int i = 0; i < num_digits; i++) {
//     }
//         cout << "1st Digit is: "<< str[0] << endl;
//         cout << "last Digit is: "<< str[x] << endl;
// }
// int main() {
//     int x;
//     cin >> x;  
//     find_digits(x);
//     return 0;
// }



// void find(int n, int *p1, int *p2) {
//     *p2 = n % 10;  
//     while (n >= 10) {
//         n = n / 10;  
//     }
//     *p1 = n;  
// }
// int main() {
//     int n;
//     cin >> n;
//     int firstdigit, lastdigit;
//     int *p1 = &firstdigit;
//     int *p2 = &lastdigit;
//     find(n, p1, p2);  
//     cout << "First digit: " << firstdigit << endl;
//     cout << "Last digit: " << lastdigit << endl;
//     return 0;
// }


//  TODO: "Null Pointer Initialization" 


// int main(){
//     int *ptr1=NULL;   //RESERVED ADDRESS=0
//     int*ptr2='\0'; 
//     int *ptr3=0;    //'\0'=null character 
//     cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;   //0
// }




// TODO:  "Null Pointer Check" 
// int main() {
//     int *p = NULL;  // p ko null pointer banaya gaya hai
//     cout << p << endl;  // yeh 0 ya NULL print karega
//     if (p == NULL) {
//         cout << "p is a null pointer" << endl;  
//     }
//     return 0;
// }


// TODO: "Pointer to Pointer Dereferencing(Double pointer)

// int main(){
//     int x=5;
//     int *p1=&x;
//     int **p2=&p1;
//     cout<<&p1<<endl;  //p1 ka address
//     cout<<&x<<endl;   //x ka address
//     cout<<p1<<endl;   //p1 jo x ka address point kar raha hai
//     cout<<p2<<endl;   //p2 jo p1 ka address point kar raha hai
//     cout<<*p1<<endl;  //p1 ka deference ho ha hai jo p1 jo x ko adress kiya hua tha uss x ka value 
//     cout<<**p2<<endl;  //p2 ka deference ho ha hai jo p1 ko point karege phir jo x ko adress kiya hua tha uss x ka value 
// }





