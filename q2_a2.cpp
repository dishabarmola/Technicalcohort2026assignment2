#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the n:"<<endl;
    cin>>a;

    for(int i =1;i<=a;i++){
        for(int j= a;j>=i;j--){
            cout<<"*";
            
        }
        cout<<endl;
    }
   

    return 0;
}
