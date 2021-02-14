#include <iostream>

using namespace std;
    int main(){
       int a[5][6] = {{0,0,0,0,9,0},
                     {0,8,0,0,0,0},
                     {4,0,0,2,0,0},
                     {0,0,0,0,0,5},
                     {0,0,2,0,0,0}
                                  };
       int i,j;

      cout<< "\n 3 tuple \n";
      cout << "rows coulmn value"<<endl;
       for(i=0;i<5;i++){
           for( j=0;j<6;j++){
               if(a[i][j]!=0)
                   cout<<(i+1)<<"      "<<(j+1)<<"      "<<(a[i][j])<<endl;
           
        }
    }
 }
