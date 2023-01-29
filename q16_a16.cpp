#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    for(int i = 1;i<=a;i++){
        c=1;
        b=(i);
        d=(i-1);
        for(int j = 1;j<=a;j++){
            if(j<=i){
                cout<<" "<<c<<" ";
                c=c+1;
            }
            else{
                cout<<"   ";
            }
            
           
        }
        for(int y =a+1;y<=(2*a)-1;y++){
            if((i+y)>=(2*a)&&i!=a){
                cout<<" "<<b<<" ";
                b=b-1;
            }
            else if(i==a){
                cout<<" "<<d<<" ";
                d=d-1;
                
            }
            else{
                cout<<"   ";
            }
        }
            
            
        
        
        cout<<endl;
        
    }

    return 0;
}
