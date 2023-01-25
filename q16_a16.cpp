#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int b = 1;
    for(int i =1;i<=a;i++){
        for(int j = 1; j<=((2*a)-1);j++){
            if(j>i&&j<((2*a)-i)){
                cout<<"  ";
            }
            else{
                cout<<b<<" ";
                
            }
            
        }
        cout<<endl;
        b=b+1;
        
        
    }
    

    return 0;
}
