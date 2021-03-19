#include<iostream>
#include<string.h>
using namespace std;

void search(char* p, char* s) 
{ 
    int M = strlen(p); 
    int N = strlen(s); 
  
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        for (j = 0; j < M; j++) 
            if (s[i + j] != p[j]) 
                break; 
  
        if (j == M) 
            cout << "Pattern is present at "<< i << endl; 
    } 
} 
  
int main() 
{ 
    char s[] = "abbcdabcd"; 
    char p[] = "bcda"; 
    search(p, s); 
    return 0; 
}
