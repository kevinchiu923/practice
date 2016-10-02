#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"請輸入一正整數: "<<endl; cin>>n;
    cout<<endl;
    
    for(i=0; i<n/2; i++){              
        for(j=n/2-i-!(n%2); j>0; j--) 
        	cout<<" ";
        for(j=0; j<=i*2; j++)
        	cout<<"*";
        cout<<endl;
    }  
    for(i=(n-1)/2+1; i>0; i--){              
        for(j=0; j<=n/2-i-!(n%2); j++)
        	cout<<" ";
        for(j=2*i-1; j>0; j--)
        	cout<<"*";
        cout<<endl;
    }   
    system("pause");
    return 0;
}

