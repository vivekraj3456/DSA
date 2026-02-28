#include<iostream>
using namespace std;
int main(){
    // TODO: INTIALIZATION OF 2D ARRAY
     // 2D array ko initialize karne ke 3 tarike hote hain
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; // 1st tarika jisme hum 2D array ko directly initialize kar dete hain
    cout<<arr[0][0]<<" "<<arr[1][1]<<" "<<arr[2][2]<<endl;

    int arr1[3][3]={1,2,3,4,5,6,7,8,9}; // 2nd tarika JISME 1D array ko 2D array me convert kar diya jata hai
    cout<<arr1[0][0]<<" "<<arr1[1][1]<<" "<<arr1[2][2]<<endl;
    
    int arr3[][3]={1,2,3,4,5,6,7,8,9}; // 3rd tarika JISME ROWS KI GINATI NAHI DI JATI HAI BUT COLUMNS KI GINATI DI JATI HAI
    cout<<arr3[0][0]<<" "<<arr3[1][1]<<" "<<arr3[2][2]<<endl;

    // TODO: TRAVERSING THE 2D-ARRAY
    
}