#include<iostream>
using namespace std;
int main(){


int n,key;
cout<<"enter the size which you want\n";
cin>>n;
int arr[n]={0};

cout<<"enter you array element\n";


    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
cout<<"enter a element to search in this array\n\n";
cin>>key;
       for(int i = 0; i<=n; i++){
            if(arr[i]==key){
                cout<<key<<" is fount in "<<i<<"th index";
                break;
            }
}

}
