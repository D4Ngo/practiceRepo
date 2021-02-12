#include <iostream>
#include <stdlib.h>
using namespace std;

int arr[20][20];


struct sparseEle{
    int row,col,val;
} *ptr;

void inputArr(int row,int col){
    for(int i =0;i<row;i++){
        cout<<"\nrow: "<<i<<endl;
        for(int j =0;j<col;j++){
            cin>>arr[i][j];        
        }
    }    
}
void displayArr(int row , int col){
    for(int i =0;i<row;i++){
        cout<<"\t\t";
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<"\t";        
        }
        cout<<endl;
    } 
}
int getPosInt(int row,int col){
    int count=0;
     for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
           if(arr[i][j]>0)
                count++;       
        }
    } 
    return count;     
}
void getSparseArr(int row,int col,int p){
    ptr = (struct sparseEle*) malloc(p* sizeof(struct sparseEle));
    int k=0;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
           if(arr[i][j]>0){
                (ptr+k)->row = i;
                (ptr+k)->col = j;
                (ptr+k)->val = arr[i][j];   
                k++;
            }
        }
    } 

}
void displaySparseArr(int p,int row ,int col){
    cout<<"\nRow "<<"Column "<<"Values "<<endl;
    cout<<row<<"\t"<<col<<"\t"<<p<<endl;
    int k=0;
    for(int i =0;i<p;i++){
             cout<<(ptr+k)->row<<"\t"<<(ptr+k)->col<<"\t"<<(ptr+k)->val<<endl; 
                k++;       
    } 

}

int main(){
    int row,col;
    cout<<"Enter the array row size: ";
    cin>>row;
    cout<<"Enter the array column size: ";
    cin>>col;
    cout<<"Enter the values of the array:";
    inputArr(row,col);
    cout<<"\nThe array:\n";
    displayArr(row,col);
    int posInt = getPosInt(row,col);
    getSparseArr(row,col,posInt);
    displaySparseArr(posInt,row,col);
    return 0;
}
