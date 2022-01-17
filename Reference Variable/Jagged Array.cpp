#include<iostream>
using namespace std;


int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;
   

    //create pointer array
    int** arr = new int* [row];

    //assign every pointer its column
    for(int i = 0 ; i < row; i++){
        arr[i] = new int[col];
        col++;
    }

    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i < row; i++){
        delete [] arr[i];
    }

    delete [] arr;
}