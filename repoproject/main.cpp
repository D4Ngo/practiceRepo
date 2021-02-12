#include <iostream>
#include<iomanip>

int m,n;
int total_positive(int *arr,int r,int c)
 {int count;
     for(int i=0;i<r;i++)
     {
         for(int j=0;j<c;j++)
         {
             if(*(arr+i*c+j)>0)
             {
                 count++;
             }
         }
     }
     return count;
 }




using namespace std;

int main()
{int totalpositive,s=0;
 cout<<"\n Enter the no of rows";
 cin>>m;
 cout<<"\n Enter the no of columns";
 cin>>n;
 cout<<"\nenter the elements in matrix format....";
 int arr[m][n];
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
        cin>>arr[i][j];
     }
 }


 cout<<setw(5)<<"Row"<<setw(15)<<"coloumn"<<setw(15)<<"value"<<endl;
 cout<<"\n"<<setw(5)<<m<<setw(15)<<n<<setw(15)<<total_positive((int *)arr,m,n)<<endl;
 totalpositive=total_positive((int *)arr,m,n);
 while(s<totalpositive)


 {for(int i=0;i<m;i++)
 {
     for (int j=0;j<n;j++)
     {
         if(arr[i][j]>0)
         {
            cout<<setw(5)<<i<<setw(15)<<j<<setw(15)<<arr[i][j]<<endl;
            s++;
         }
     }
 }}
 return 0;

}



