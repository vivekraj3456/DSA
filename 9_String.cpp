#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
// TODO 1st: INTRO STRING
// int main(){
    // char str[5]={'a','b','c','d','e'};  // "\0" is null character which is used to indicate the end of the string in C-style strings. It is automatically added at the end of the string when we declare it using double quotes. But when we declare it using single quotes, we need to add it manually if we want to treat it as a string.
    // // cout<<str[10];
    // cout<<str<<endl;; //output abcde
    
    // for(int i=0;i<5;i++){
    //     cout<<int(str[5])<<" "; //output: 1 2 3 4 
    //     cout<<str[i]<<" ";  //output a b c d e
    //     cout<<int(str[i])<<" "<<endl;  //output 97 98 99 100 101 
    //     // that means char is stored in ascii value in memory and when we print it as int it will print the ascii value of that char
    // }

    // }
// TODO 2nd: '/0'
// int main(){
// char str[]={'a','b','\0','c','d','e'};  // only print until \0 is encountered
//     cout<<str; //output ab
// }


// char ch='a'; //output a
// char ch='\0'; //output null character
// char ch=0;  //output null character
// char ch=97; //output a
// char ch=ch+1; //output b
// char ch='\n';  //output new line
// char ch='\t';  //output tab
// char ch=' ';   //output space
// char ch='\\';  //output backslash


// TODO 3rd: STRING AS A DATA TYPE
// int main(){
//     string str="vivek raj";
//     cout<<str<<endl; //vivek raj
//     cout<<str[0]<<endl; //v
//     cout<<str[1]<<endl; //i
//     cout<<str[2]<<endl; //v
// }

// TODO 4th: Input a string of length n and count all the vowels in the given string
// int main(){
//     string str="jgfsajgjufajgajgfabod";
//     int count=0;

//     for(int i=0;i<str.length();i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]== 'o' || str[i]=='u' ){
//             count++;
//         }
//     }
//     cout<<count;
// }
// TODO 5th: PRINT STRING
// int main(){
    // string str1="VIVEK IS CUREENTLY IN 3RD SEMESTER";
    // cout<<str1<<endl; //this will print whole-"VIVEK IS CUREENTLY IN 3RD SEMESTER
    // string s; //string intialization
    // cout<<"Enter string: ";
    // cin>>s; //string input  
    // cout<<"The string is :"<<s<<endl;;
    //  // this will print first word of string ,when we put value of string then it will print whole string but if we take input then it prints onlu first word
// }
// * so  the solution is getline
//     int main(){
//     string s1;
//     cout<<"Name: ";
//     getline(cin,s1);  // reads the entire line from input (including spaces)
//     cout<<s1;  // prints the complete name entered by the user
    
// }  

// TODO 6th: UPDATION OF SINGLE CHARACTER IN STRING

// int main(){
//     string str="vivek";
//     cout<<str<<endl; //vivek
//     str[2]='c';
//     cout<<str<<endl; //vicek
// }
// //* this means string is mutable in c++ {but not in java}and we can change the value of string by using index and assigning new value to it.

// TODO 7th: Input a string of size n and Update all the even positions in the string to character ‘a’. Consider 0-based indexing

// int main(){
    // string str;
    // cout<<"Enter a string: ";
    // cin>>str;
    // for(int i=0;i<str.length();i++){
    //     if(i%2==0){
    //         str[i]='a';
    //     }
    // }
    // cout<<str<<endl;
// }

// TODO 8th: BUILT IN STRING FUNCTIONS
// int main(){
//     string str="my name is Vivek Raj";
//     cout<<str.size()<<endl; //output 20
//     cout<<str.length()<<endl; //output 20
//     cout<<str.capacity()<<endl; //output 20

//     str.push_back('a'); //output my name is Vivek Raja
//     cout<<str<<endl;
//     //only char will be push , not string
//     str.pop_back(); //last char of string is removed
//     cout<<str<<endl;
// }

// TODO 9th: OPERATOR(CONCATENATION) 
// int main(){
//     string s="abc";
//     cout<<s<<endl; //abc
//     string t="def";
//     s=s+t;
//     cout<<s<<endl; //abcdef
//     s=s+"ghi"; //concat(only string,not int)
//     cout<<s<<endl; //abcdefghi
// }

// TODO 10th: REVERSE THE STRING 

// int main(){
//     string s="abcdef";
//     cout<<s<<endl; // abcdef
//     reverse(s.begin(),s.end()); //whole string is reversed //fedcba
//     cout<<s<<endl;
//     reverse(s.begin()+1,s.begin()+5); //fbcdea //partial reversing ,method-1
//     cout<<s<<endl;
//     reverse(s.begin()+1,s.begin()-1); //fbcdea //partial reversing ,method-2
//     cout<<s<<endl;
// }

// TODO 11th: Input a string of even length and reverse the first half of the string.

// int main(){
//     string str;
//     cout<<"enter the  string: ";
//     getline(cin,str);
//     int n=str.size();
//     if(n%2==0){
//         reverse(str.begin(),str.begin()+n/2);
//         cout<<str<<endl;
//     }
//     else{
//         cout<<"string should be of even length";
//     }
// }

// TODO 12th:  Input a string of length greater than 5 and reverse the substring from position 2 to 5 using  inbuilt functions.

// int main(){
//     string str;
//     cout<<"enter the string: ";
//     getline(cin,str);
//     int n=str.size();
//     if(n>5){
//         reverse(str.begin()+1,str.begin()+5);
//         cout<<str<<endl;
//     }
//     else{
//         cout<<"string should be of length greater than 5";
//     }
// }

// TODO 13th: SUBSTRING

// int main(){
//     string s="VivekRaj";
//     // cout<<s.substr(0,5)<<endl;
//     // substr(starting index,length of substring)
//     cout<<s.substr(1,5)<<endl; //ivekR
//     cout<<s.substr(2,7)<<endl; //vekRaj
// }

// TODO 14th:  Input a string of even length and return the second half of that string using inbuilt substr function.

// int main(){
//     string str;
//     cout<<"enter the string: ";
//     getline(cin,str);
//     int n=str.size();
//     if(n%2==0){
//         int n=str.size();
//         cout<<str.substr(n/2)<<endl; 

//     }
//     else{
//         cout<<"string should be of even length";
//     }
// }

// TODO 15th: STRING TO INTEGER and INTEGER TO STRING

// int main(){
//     int num= -12345;
//     string s=to_string(num); //convert integer to string
//     cout<<s<<endl; //output 12345
//     string s2=to_string(23423); //convert integer to string
//     cout<<s2<<endl; //output 23423
//     string s1="54321";
//     int num1=stoi(s1); //convert string to integer
//     cout<<num1<<endl; //output 54321    
// }

// TODO 16th: Return the total number of digits in a Number without using any loop

// int main(){
//     int num=123456;
//     string s=to_string(num);
//     cout<<s.length()<<endl; //output 6
// }

// TODO 17th:  Input a string and return the number of times the neighbouring characters are different from each other.

// int main(){
//     string s;
//     getline(cin,s);
//     int count=0;
//     int n=s.size();
//     for(int i=1;i<n;i++){
//         if(n==1) break;
//         if(n==2 && s[0]!=s[1]) {
//             count=1;
//             break;
//         }
//         if(i==0){
//             if(s[i]!=s[i+1]) count++;
//         }
//         else if (i==n-1){
//             if(s[i]!=s[i-1]) count++;
//         }
//         else if(s[i]!=s[i-1] && s[i]!=s[i+1]){
//             count++;
//         }
//     }
//     cout<<count<<endl;

// }

// TODO 18th: sorting lexicographically

// int main(){
//     string s;
//     cout<<"enter the string: ";
//     getline(cin,s);
//     // *lexicographical order means ASCII value of characters is used to sort the string.
//     sort(s.begin(),s.end());
//     cout<<s<<endl; 
// }

// TODO 19th: Given two strings s and t, return true if t is an anagram of s, and false otherwise.|| Input : s = physicswallah, t = wallahphysics  ;;Output: YES
// int main(){
//     string s1="physicswallah";
//     string s2="wallahphysics";
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     if(s1==s2) cout<<"true"<<endl;
//     else cout<<"false"<<endl;
// }

// TODO 20th: Ques  : Given a string consisting of lowercase English alphabets. Print the character that is occurring most number of times

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
//             cout<<ch<<" "<<mx<<endl;
//         }
//     }
// }

// TODO 21st: stringstream

// int main() {
//     string str="vivek is cse student";
//     stringstream ss(str); // stringstream is a class in C++ that allows us to treat a string as a stream, which can be used for input and output operations. It is defined in the <sstream> header file and is part of the C++ Standard Library, and it is used to perform various operations on strings, such as parsing, formatting, and converting between different data types. In this code, we are using stringstream to read the string "vivek is cse student" word by word and print each word on a new line.
//     string temp;    //ss ka ek object banaya hai jisme str string ko pass kiya hai, ab ss ke through hum str string ko read kar sakte hain.ye cin ki tarah kaam karega, lekin ye string ke andar ke words ko read karega, jab tak space nahi aata hai. jab space aayega tab wo ek word ko read kar lega aur usko temp string me store kar lega, aur phir usko print kar dega. is process ko tab tak repeat karega jab tak string ke end tak nahi pahuch jata hai.
//     while(ss>>temp){
//         cout<<temp<<endl;
//     }
// }

// TODO 22nd: MAX WORD IN A STRING

// int main(){
//     string str="vivek , vivek is a cse student, vivek is from bihar, vivek is in 6th semester , vivek is 23 years old";
//     stringstream ss(str);
//     string temp;
//     vector<string>v;
//     while(ss>>temp){
//         v.push_back(temp);
//     }

//     cout<<endl;
//     sort(v.begin(),v.end());
//     int maxcount=0;
//     int count=0;
//     for(int i=1;i<v.size();i++){
//         if(v[i]==v[i-1]){
//             count++;
//         }
//         else{
//             count=1;
//         }
//         maxcount=max(maxcount,count);
//     }
    
//     count=1;
//     for(int i=1;i<v.size();i++){
//         if(v[i]==v[i-1]){
//             count++;
//         }
//         else{
//             count=1;
//         }
//         if(count==maxcount){
//             cout<<v[i]<<" "<<maxcount<<endl;
//         }
//     }
// }

// TODO 23rd: MOST OCCURING WORD IN A STRING

// int main(){
//     string str="1234561234";
//     int x=stoi(str); //stoi is a function in C++ that converts a string to an integer. It is defined in the <string> header file and is part of the C++ Standard Library. In this code, we are using stoi to convert the string "1234561234" to an integer and store it in the variable x. The output will be 1234561234 as an integer.
//     cout<<x<<endl;

//     string str1="12345678912345";
//     long long x1=stoll(str1); //stoll is a function in C++ that converts a string to a long long integer. It is defined in the <string> header file and is part of the C++ Standard Library. In this code, we are using stoll to convert the string "12345678912345" to a long long integer and store it in the variable x1. The output will be 12345678912345 as a long long integer.
//     cout<<x1<<endl;
// }

// TODO 24th: Given n string consisting of digits from 0 to 9. 

// /*
// Return the index of string which has 
// maximum value. (Take 0 based indexing)
// Input : 0123, 0023, 456, 00182, 940, 2901
// Output: 5 
// */

// int main(){
//     string str[]={"0123", "0023", "456", "00182", "940", "2901"};
//     int max=stoi(str[0]);
//     int idx=0;
//     for(int i=0;i<6;i++){
//         int x=stoi(str[i]);
//         if(x>max){ 
//         max=x;
//         idx=i;
//         }
//     }
//     cout<<max<<" "<<idx<<"times"<<endl;
// }

// !DOUBT IN TODO 14 ,17, 20