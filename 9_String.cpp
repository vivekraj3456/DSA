#include<iostream>
using namespace std;
// int main(){
    // TODO: INTRO STRING
    // char str[5]={'a','b','c','d','e'};  // \0 is null character which is used to indicate the end of the string in C-style strings. It is automatically added at the end of the string when we declare it using double quotes. But when we declare it using single quotes, we need to add it manually if we want to treat it as a string.

    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";  //output a b c d e
    //     cout<<int(str[i])<<" "<<endl;  //output 97 98 99 100 101 
        // that means char is stored in ascii value in memory and when we print it as int it will print the ascii value of that char
    // }
    // cout<<int(str[5])<<" "; 
    // cout<<str[10];
    // cout<<str; //output abcde

// char str[]={'a','b','\0','c','d','e'};  // only print until \0 is encountered
//     cout<<str; //output ab


// char ch='a'; //output a
// char ch='\0'; //output null character
// char ch=0;  //output null character
// char ch=97; //output a
// char ch=ch+1; //output b
// char ch='\n';  //output new line
// char ch='\t';  //output tab
// char ch=' ';   //output space
// char ch='\\';  //output backslash


// TODO: STRING AS A DATA TYPE
    // string str="vivek raj";
    // cout<<str<<endl; //vivek raj
    // cout<<str[0]<<endl; //v
    // cout<<str[1]<<endl; //i
    // cout<<str[2]<<endl; //v

    
    
// }

// TODO: Input a string of length n and count all the vowels in the given string
// int main(){
    // string str="jgfsajgjufajgjgfabod";
    // int count=0;

    // for(int i=0;i<str.length();i++){
    //     if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]== 'o' || str[i]=='u' ){
    //         count++;
    //     }
    // }
    // cout<<count;
// }

// int main(){
//     string str1="VIVEK IS CUREENTLY IN 3RD SEMESTER";
//     cout<<str1; //this will print whole-"VIVEK IS CUREENTLY IN 3RD SEMESTER
//     string s; //string intialization
//     cout<<"Enter string: ";
//     cin>>s; //string input  
//     cout<<"The string is :"<<s;
//      // this will print first word of string ,when we put value of string then it will print whole string but if we take input then it prints onlu first word
         
// }  
// so  the soln is getline
// int main(){
//     string s;
//     cout<<"name: ";
//     getline(cin,s); //using this tupe if input
//     cout<<s;  // it will print whole string  
// }