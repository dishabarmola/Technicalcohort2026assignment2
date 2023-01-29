#include <iostream>
using namespace std;
int main()
{
    int a,k;
    cin>>a;
    if(a%2!=0){
        k =(a+1)/2;
        for(int i = 1;i<=k;i++){
            for(int j = 1;j<=a;j++){
                if(j==k||j==a){
                    cout<<" * ";
                }
                else if(i==1&&j<=k){
                    cout<<" * ";
                }
                else if(i==k){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
            cout<<endl;
        }
        for(int m = k+1;m<=a;m++){
            for(int y=1;y<=a;y++){
                if(y==1||y==k){
                    cout<<" * ";
                }
                else if(m==a&&y>k){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
            cout<<endl;
        }
        
    }

    return 0;
}
