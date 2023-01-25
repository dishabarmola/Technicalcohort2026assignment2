#include <iostream>
using namespace std;

int main()
{
    int a,b;
    b=1;
    cin>>a;
    for(int i =1;i<=a;i++){
        for(int j = 1;j<=i;j++){
            cout<<b<<" ";
            b=b+1;
        }
        cout<<endl;
    }
    

    return 0;
}
