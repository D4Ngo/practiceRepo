#include <iostream>

using namespace std;

int main()
{
    int A[5][6] = {{0,0,0,0,9,0},
                    {0,8,0,0,0,0},
                    {4,0,0,2,0,0},
                    {0,0,0,0,0,5},
                    {0,0,2,0,0,0}
                    };

    int B[20][3];
    int C=1;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(A[i][j] != 0)
            {
                B[C][0]=i;
                B[C][1]=j;
                B[C][2]=A[i][j];
                C++;
            }

        }
    }

    B[0][0] = 5;B[0][1]=6;B[0][2]=C;

    cout<<"Rows     Column      Values"<<endl;
    for(int i=0;i<C; i++)
    {
        for(int j=0; j<3;j++)
        {
            cout<<B[i][j]<<"        ";
        }
        cout<<endl;
    }
}
